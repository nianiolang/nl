package com.atinea.nianio;

public class ImmDouble extends Imm {

	public ImmDouble(double number) {
		super(number);
	}
	
	@Override
	public Double getValue() {
		return (double)value;
	}
	
	public String toString() {
		return String.valueOf(getValue());
	}
}
