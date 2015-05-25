package com.atinea.nianio;

public class ImmRef {
	private Imm value;
	
	public ImmRef(Imm value) {
		this.value = value;
	}
	
	public Imm getValue() {
		return value;
	}
	
	public void setValue(Imm value) {
		this.value = value;
	}
	
	public String toString() {
		return value.toString();
	}
}