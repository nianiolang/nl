package com.atinea.nianio;

public class ImmString extends Imm {

	public ImmString(String value) {
		super(value);
	}
	
	@Override
	public String getValue() {
		return (String)value;
	}
	
	public String toString() {
		return String.valueOf(getValue());
	}

	@Override
	public boolean equals(Object obj) {
		if (!(obj instanceof ImmString))
			return false;
		if (this == obj)
			return true;
		return getValue().equals(((ImmString)obj).getValue());
	}

	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + ((value == null) ? 0 : value.hashCode());
		return result;
	}
}
