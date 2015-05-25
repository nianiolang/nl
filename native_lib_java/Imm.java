package com.atinea.nianio;

public class Imm {
	protected Object value;
	protected int refCount;
	
	public Imm(Object value) {
		this.value = value;
	}
	
	public Object getValue() {
		return value;
	}
	
	public Imm clone() {
		return new Imm(getValue());
	}
	
	public String toString() {
		return value.toString();
	}
}
