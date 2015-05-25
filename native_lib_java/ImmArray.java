package com.atinea.nianio;

import java.util.Arrays;

public class ImmArray extends Imm {

	public ImmArray(Imm[] value) {
		super(value);
	}
	
	public Imm[] getValue() {
		return (Imm[])value;
	}
	
	public ImmDouble getCount() {
		return new ImmDouble(getValue().length);
	}
	
	public ImmArray clone() {
		return new ImmArray(Arrays.copyOf(getValue(), getValue().length));
	}
	
	public String toString() {
		StringBuilder sb = new StringBuilder();
		for (Imm imm : getValue()) {
			sb.append(imm.toString()).append(",");
		}
		return sb.toString();
	}
}
