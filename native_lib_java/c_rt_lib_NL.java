/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: MBN 2014-10-16
 */

package com.atinea.nianio;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

public class c_rt_lib_NL {

	private static ImmOV trueVariant = ov_mk_none_nl(new ImmString("TRUE"));
	private static ImmOV falseVariant = ov_mk_none_nl(new ImmString("FALSE"));
	
	private static boolean isOV(ImmRef variant) {
		return variant.getValue() instanceof ImmOV;
	}

	public static void die_nl() throws Exception {
		throw new Exception("NL_DIE");
	}

	public static Imm clone_nl(Imm obj) {
		return obj.clone();
	}

	public static ImmDouble array_len_nl(ImmRef arr) {
		return ((ImmArray) arr.getValue()).getCount();
	}

	public static Imm get_ref_arr_nl(ImmRef arr, ImmRef ind) {
		return ((ImmArray) arr.getValue()).getValue()[((ImmDouble) ind
				.getValue()).getValue().intValue()];
	}

	public static void set_ref_arr_nl(ImmRef arr, ImmRef ind, ImmRef value) { // arr ref
		ImmArray immArr = ((ImmArray) arr.getValue());
		arr.setValue(new ImmArray(Arrays.copyOf(immArr.getValue(),
				immArr.getValue().length)));
		((ImmArray) arr.getValue()).getValue()[((ImmDouble) ind.getValue())
				.getValue().intValue()] = value.getValue();
	}

	public static Imm get_ref_hash_nl(ImmRef hash, ImmRef key) {
		return hash_get_value_nl(hash, key);
	}

	public static void set_ref_hash_nl(ImmRef hash, ImmRef key, ImmRef value) { // ref hash
		hash_set_value_nl(hash, key, value);
	}

	public static Imm init_iter_nl(ImmRef hash) {
		Map<ImmString, Imm> baseMap = ((ImmMap) hash.getValue()).getValue();
		Imm[] arr = new Imm[baseMap.size()];
		int i = 0;
		for (ImmString imm : baseMap.keySet()) {
			arr[i++] = imm;
		}
		HashMap<ImmString, Imm> map = new HashMap<ImmString, Imm>();
		map.put(new ImmString("pos"), new ImmDouble(0));
		map.put(new ImmString("keys"), new ImmArray(arr));
		return new ImmMap(map);
	}

	public static ImmOV is_end_hash_nl(ImmRef iter) {
		return native_to_nl_nl(get_iter_position(iter) >= get_iter_keys(iter).length);
	}
	
	private static int get_iter_position(ImmRef iter) {
		return ((ImmDouble)((ImmMap)iter.getValue()).get("pos")).getValue().intValue();
	}
	
	private static Imm[] get_iter_keys(ImmRef iter) {
		return ((ImmArray)((ImmMap)iter.getValue()).get("keys")).getValue();
	}

	public static ImmString get_key_iter_nl(ImmRef iter) {
		return (ImmString)get_iter_keys(iter)[get_iter_position(iter)];
	}

	public static Imm next_iter_nl(ImmRef iter) {
		ImmMap map = (ImmMap)iter.getValue().clone();
		int position = get_iter_position(iter) + 1;
		map.getValue().put(new ImmString("pos"), new ImmDouble(position));
		return map;
	}

	public static Imm hash_get_value_nl(ImmRef hash, ImmRef key) {
		return ((ImmMap) hash.getValue()).getValue().get(
				new ImmString(key.getValue().toString()));
	}

	public static void hash_set_value_nl(ImmRef hash, ImmRef key, ImmRef value) {
		hash.setValue(new ImmMap(new HashMap<ImmString, Imm>(((ImmMap) hash
				.getValue()).getValue())));
		((ImmMap) hash.getValue()).getValue().put(
				new ImmString(key.getValue().toString()), value.getValue());
	}

	public static Imm ov_as_nl(ImmRef variant, ImmRef name) throws Exception {
		if (!isOV(variant)
				|| !((ImmOV) variant.getValue()).getName().equals(((ImmString) name
						.getValue()).getValue())
				|| ((ImmOV) variant.getValue()).getValue() == null)
			die_nl();
		return ((ImmOV) variant.getValue()).getValue();
	}

	public static ImmOV ov_is_nl(ImmRef variant, ImmRef name) throws Exception {
		if (!isOV(variant))
			die_nl();
		return native_to_nl_nl(((ImmOV) variant.getValue()).getName().equals(((ImmString) name
				.getValue()).getValue()));
	}

	public static ImmOV ov_has_value_nl(ImmRef variant) throws Exception {
		if (!isOV(variant))
			die_nl();
		return native_to_nl_nl(((ImmOV) variant.getValue()).getValue() != null);
	}

	public static Imm ov_get_value_nl(ImmRef variant) throws Exception {
		if (!isOV(variant) || variant.getValue().getValue() == null)
			die_nl();
		return ((ImmOV) variant.getValue()).getValue();
	}

	public static ImmString ov_get_element_nl(ImmRef variant) throws Exception {
		if (!isOV(variant))
			die_nl();
		return new ImmString(((ImmOV) variant.getValue()).getName());
	}

	public static ImmOV ov_arg_new_nl(ImmRef name, ImmRef arg) {
		return ov_mk_arg_nl(((ImmString) name.getValue()), arg);
	}

	public static ImmOV ov_none_new_nl(ImmRef name) {
		return ov_mk_none_nl(((ImmString) name.getValue()));
	}

	public static ImmOV ov_mk_arg_nl(ImmString name, ImmRef value) {
		return new ImmOV(name.getValue(), value.getValue());
	}

	public static ImmOV ov_mk_none_nl(ImmString name) {
		return new ImmOV(name.getValue());
	}

	public static boolean check_true_native_nl(ImmRef value) {
		if (value.getValue() == trueVariant) return true;
		if (value.getValue() == falseVariant) return false;
		return ((ImmOV) value.getValue()).getName().equals("TRUE");
	}

	public static ImmOV get_false_nl() {
		return falseVariant;
	}

	public static ImmOV get_true_nl() {
		return trueVariant;
	}

	public static ImmOV native_to_nl_nl(boolean value) {
		return value ? get_true_nl() : get_false_nl();
	}

	public static void print_nl(ImmRef imm) {
		System.out.println(imm.getValue().toString());
	}
}