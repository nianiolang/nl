/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: MBN 2014-10-16
 */
 
package com.atinea.nianio;
 
 public class ImmOV extends Imm {

	private String name;
	
	public ImmOV(String name) {
		this(name, null);
	}
	
	public ImmOV (String name, Object value) {
		super(value);
		this.name = name;
	}
	
	public Imm clone() {
		return new ImmOV(getName(), getValue().clone());
	}
	
	public String getName() {
		return name;
	}
	
	public Imm getValue() {
		return (Imm)value;
	}
	
	public String toString() {
		return getName() + " : " + String.valueOf(getValue());
	}
 }