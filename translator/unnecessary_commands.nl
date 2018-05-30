###
# (c) Atinea Sp. z o.o.
###


use array;
use ptd;
use hash;
use nlasm;
use flow_graph;

def unnecessary_commands::state_t() {
	return ptd::arr(@unnecessary_commands::block_state_t);
}

def unnecessary_commands::block_state_t() {
	return ptd::arr(ptd::hash(ptd::sim()));
}

def unnecessary_commands::graph_t() {
	return ptd::arr(ptd::arr(ptd::sim()));
}

def unnecessary_commands::delete_unnecessary_commands(ref func : @nlasm::function_t) {
	var blocks = flow_graph::make_blocks(func->commands, func->args_type);
	delete_unnecessary_commands_in_blocks(ref blocks, func->reg_size);
	func->commands = flow_graph::combine_blocks(blocks);
	blocks = flow_graph::make_blocks(func->commands, func->args_type);
	delete_unnecessary_clears_in_blocks(ref blocks, func->reg_size, array::len(func->args_type));
	func->commands = flow_graph::combine_blocks(blocks);
}

def build_empty_state(reg_size : ptd::sim()) : @unnecessary_commands::block_state_t {
	var res = [];
	array::push(ref res, {}) rep var i (reg_size);
	return res;
}

def has_side_effects(cmd_c : @nlasm::cmd_t) {
	var cmd = cmd_c->cmd;
	return (cmd is :call || cmd is :return || cmd is :die || cmd is :prt_lbl || cmd is :if_goto || cmd is :goto);
}

def build_blocks_states(blocks : @flow_graph::blocks_t, reg_size : ptd::sim()) : @unnecessary_commands::state_t {
	var state : @unnecessary_commands::state_t = [];
	var empty_block_state : @unnecessary_commands::block_state_t = build_empty_state(reg_size);
	var visited_blocks = {};
	rep var block_nr (array::len(blocks)) {
		array::push(ref state, empty_block_state);
	}
	die if array::len(blocks) == 0;
	build_block_state(ref state, blocks, 0, empty_block_state, ref visited_blocks);
	return state;
}

def delete_unnecessary_commands_in_blocks(ref blocks : @flow_graph::blocks_t, reg_size : ptd::sim()) {
	var state = build_blocks_states(blocks, reg_size);
	var all_commands_num = 0;
	fora var block (blocks) {
		all_commands_num += array::len(block->cmds);
	}
	var graph : @unnecessary_commands::graph_t = build_commands_graph(state, blocks, all_commands_num);
	var visited_nodes = {};
	fora var block (blocks) {
		rep var cmd_nr (array::len(block->cmds)) {
			if (has_side_effects(block->cmds[cmd_nr])) {
				visit_node(graph, block->from + cmd_nr, ref visited_nodes);
			}
		}
	}
	rep var block_nr (array::len(blocks)) {
		var new_cmds = [];
		rep var cmd_nr (array::len(blocks[block_nr]->cmds)) {
			var cmd = blocks[block_nr]->cmds[cmd_nr];
			var delete = false;
			var nr = blocks[block_nr]->from + cmd_nr;
			if (!(cmd->cmd is :clear)) {
				if (!hash::has_key(visited_nodes, nr)) {
					delete = true;
				}
			}
			if (!delete) {
				array::push(ref new_cmds, cmd);
			}
		}
		blocks[block_nr]->cmds = new_cmds;
	}
}

def delete_unnecessary_clears_in_blocks(ref blocks : @flow_graph::blocks_t, reg_size : ptd::sim(), args_num : ptd::sim()) {
	var state = build_blocks_states(blocks, reg_size);
	var all_commands_num = 0;
	fora var block (blocks) {
		all_commands_num += array::len(block->cmds);
	}
	var graph : @unnecessary_commands::graph_t = build_commands_graph(state, blocks, all_commands_num);
	rep var block_nr (array::len(blocks)) {
		var new_cmds = [];
		rep var cmd_nr (array::len(blocks[block_nr]->cmds)) {
			var cmd = blocks[block_nr]->cmds[cmd_nr];
			var delete = false;
			var nr = blocks[block_nr]->from + cmd_nr;
			if (cmd->cmd is :clear) {
				var reg = cmd->cmd as :clear;
				if (array::len(graph[nr]) == 0 && reg >= args_num) {
					delete = true;
				}
			}
			if (!delete) {
				array::push(ref new_cmds, cmd);
			}
		}
		blocks[block_nr]->cmds = new_cmds;
	}
}

def build_commands_graph(state : @unnecessary_commands::state_t, blocks : @flow_graph::blocks_t, all_commands_num : 
		ptd::sim()) : @unnecessary_commands::graph_t {
	var graph : @unnecessary_commands::graph_t = [];
	array::push(ref graph, []) rep var i (all_commands_num);
	rep var block_nr (array::len(blocks)) {
		var block = blocks[block_nr];
		var block_state = state[block_nr];
		fora var reg_use (block->reg_uses) {
			match (reg_use->type) case :write {
				block_state[reg_use->reg] = {};
				hash::set_value(ref block_state[reg_use->reg], reg_use->cmd_nr, '');
			} case :read {
				forh var cmd_nr_in_reg, var none (block_state[reg_use->reg]) {
					array::push(ref graph[reg_use->cmd_nr], cmd_nr_in_reg);
				}
			} case :clear {
				forh var cmd_nr_in_reg, var none (block_state[reg_use->reg]) {
					array::push(ref graph[reg_use->cmd_nr], cmd_nr_in_reg);
				}
				block_state[reg_use->reg] = {};
			}
		}
	}
	return graph;
}

def visit_node(graph : @unnecessary_commands::graph_t, cmd_nr : ptd::sim(), ref visited_nodes : ptd::hash(ptd::sim())) {
	return if (hash::has_key(visited_nodes, cmd_nr));
	hash::set_value(ref visited_nodes, cmd_nr, '');
	fora var next (graph[cmd_nr]) {
		visit_node(graph, next, ref visited_nodes);
	}
}

def build_block_state(ref state : @unnecessary_commands::state_t, blocks : @flow_graph::blocks_t, block_nr : ptd::sim(), 
	entrance_state : @unnecessary_commands::block_state_t, ref visited_blocks : ptd::hash(ptd::sim())) {
	var change = false;
	if (!hash::has_key(visited_blocks, block_nr)) {
		hash::set_value(ref visited_blocks, block_nr, '');
		change = true;
	}
	var reg_size = array::len(entrance_state);
	rep var reg_nr (reg_size) {
		forh var cmd_nr, var none (entrance_state[reg_nr]) {
			if (!hash::has_key(state[block_nr][reg_nr], cmd_nr)) {
				hash::set_value(ref state[block_nr][reg_nr], cmd_nr, '');
				change = true;
			}
		}
	}
	return unless change;
	var new_state = state[block_nr];
	forh var reg_nr, var modif (blocks[block_nr]->last_modif) {
		match (modif) case :write(var cmd_nr) {
			new_state[reg_nr] = {};
			hash::set_value(ref new_state[reg_nr], cmd_nr, '');
		} case :clear {
			new_state[reg_nr] = {};
		}
	}
	fora var next (blocks[block_nr]->next) {
		build_block_state(ref state, blocks, next, new_state, ref visited_blocks);
	}
}

