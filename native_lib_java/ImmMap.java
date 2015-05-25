package com.atinea.nianio;

import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;

public class ImmMap extends Imm {

	public ImmMap(Map<ImmString, Imm> value) {
		super(value);
	}
	
	@SuppressWarnings("unchecked")
	@Override
	public Map<ImmString, Imm> getValue() {
		return (Map<ImmString, Imm>)value;
	}
	
	public ImmMap clone() {
		return new ImmMap(new HashMap<ImmString,Imm>(getValue()));
	}
	
	public Imm get(String key) {
		return getValue().get(new ImmString(key));
	}
	
	public String toString() {
		StringBuilder sb = new StringBuilder();
		for (Entry<ImmString, Imm> entry : getValue().entrySet()) {
			sb.append(entry.getKey().toString()).append(":");
			sb.append(entry.getValue().toString()).append(",\n");
		}
		return sb.toString();
	}
}
