/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: MBN 2014-10-16
 */

package com.atinea.nianio;

import java.lang.reflect.Method;
import java.util.Arrays;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Map;

public class c_std_lib_NL {

	private static Imm global_profile[] = new Imm[] { null };

	public static ImmMap get_profile_global_nl() {
		if (global_profile[0] == null) {
			global_profile[0] = new ImmMap(new HashMap<ImmString, Imm>());
		}
		return (ImmMap) global_profile[0];
	}

	public static void set_profile_global_nl(ImmRef imm) {
		global_profile[0] = imm.getValue();
	}

	public static ImmString fast_substr_nl(ImmRef sarr, ImmRef start,
			ImmRef length) throws Exception {
		Imm[] arr = ((ImmArray) sarr.getValue()).getValue();
		if (arr.length != 1)
			c_rt_lib_NL.die_nl();
		return string_sub_nl(new ImmRef(arr[0]), start, length);
	}

	public static ImmArray array_sub_nl(ImmRef array, ImmRef begin, ImmRef length) {
		int from = ((ImmDouble) begin.getValue()).getValue().intValue();
		int to = from + ((ImmDouble) length.getValue()).getValue().intValue();
		return new ImmArray(Arrays.copyOfRange(
				((ImmArray) array.getValue()).getValue(), from, to));
	}

	public static ImmArray array_sort_nl(ImmRef arr, ImmRef func)
			throws Exception {
		Imm[] immArr = ((ImmArray) arr.getValue()).getValue();
		immArr = Arrays.copyOf(immArr, immArr.length);

		NLcomparator a = new c_std_lib_NL().new NLcomparator(func);
		Arrays.sort(immArr, a);

		return new ImmArray(immArr);
	}

	public static void array_push_nl(ImmRef arr, ImmRef el) {
		Imm[] tmp = Arrays
				.copyOf(((ImmArray) arr.getValue()).getValue(),
						((ImmArray) arr.getValue()).getCount().getValue()
								.intValue() + 1);
		tmp[tmp.length - 1] = el.getValue();
		arr.setValue(new ImmArray(tmp));
	}

	public static ImmDouble array_len_nl(ImmRef arr) {
		return c_rt_lib_NL.array_len_nl(arr);
	}

	public static void array_pop_nl(ImmRef arr) {
		arr.setValue(new ImmArray(
				Arrays.copyOf(((ImmArray) arr.getValue()).getValue(),
						((ImmArray) arr.getValue()).getCount().getValue()
								.intValue() - 1)));
	}

	public static Imm hash_get_value_nl(ImmRef hash, ImmRef key) {
		return c_rt_lib_NL.hash_get_value_nl(hash, key);
	}

	public static ImmOV hash_has_key_nl(ImmRef hash, ImmRef key) {
		return c_rt_lib_NL.native_to_nl_nl(((ImmMap) hash.getValue()).getValue()
				.containsKey(new ImmString(key.getValue().toString())));
	}

	public static void hash_set_value_nl(ImmRef hash, ImmRef key, ImmRef value) { // ref hash
		c_rt_lib_NL.hash_set_value_nl(hash, key, value);
	}

	public static void hash_delete_nl(ImmRef hash, ImmRef key) { // ref hash
		hash.setValue(new ImmMap(new HashMap<ImmString, Imm>(((ImmMap) hash
				.getValue()).getValue())));
		((ImmMap) hash.getValue()).getValue().remove(
				new ImmString(key.getValue().toString()));
	}

	public static ImmDouble hash_size_nl(ImmRef hash) {
		return new ImmDouble(((ImmMap) hash.getValue()).getValue().size());
	}

	public static ImmString string_chr_nl(ImmRef code) {
		StringBuilder builder = new StringBuilder();
		builder.append(Character.toChars(((ImmDouble) code.getValue())
				.getValue().intValue()));
		return new ImmString(builder.toString());
	}

	public static ImmDouble string_ord_nl(ImmRef str) {
		return new ImmDouble(Character.codePointAt(
				((ImmString) str.getValue()).getValue(), 0));
	}

	public static ImmDouble string_length_nl(ImmRef str) {
		return new ImmDouble(((ImmString) str.getValue()).getValue().length());
	}

	public static ImmDouble string_index_nl(ImmRef str, ImmRef substr,
			ImmRef start) {
		return new ImmDouble(((ImmString) str.getValue()).getValue().indexOf(
				((ImmString) substr.getValue()).getValue(),
				((ImmDouble) start.getValue()).getValue().intValue()));
	}

	public static ImmString string_sub_nl(ImmRef str, ImmRef start, ImmRef length) {
		int from = ((ImmDouble) start.getValue()).getValue().intValue();
		int to = from + ((ImmDouble) length.getValue()).getValue().intValue();
		return new ImmString(((ImmString) str.getValue()).getValue().substring(
				from, to));
	}

	public static ImmString string_replace_nl(ImmRef str, ImmRef old,
			ImmRef new_part) {
		String string = ((ImmString) str.getValue()).getValue();
		String oldStr = ((ImmString) old.getValue()).getValue();
		String newStr = ((ImmString) new_part.getValue()).getValue();
		return new ImmString(string.replace(oldStr, newStr));
	}

	public static ImmDouble string_compare_nl(ImmRef a, ImmRef b) {
		String s1 = ((ImmString) a.getValue()).getValue();
		String s2 = ((ImmString) b.getValue()).getValue();
		ImmDouble d = new ImmDouble(s1.compareTo(s2));
		return d;
	}

	public static ImmOV is_array_nl(ImmRef imm) {
		return c_rt_lib_NL.native_to_nl_nl(imm.getValue() instanceof ImmArray);
	}

	public static ImmOV is_hash_nl(ImmRef imm) {
		return c_rt_lib_NL.native_to_nl_nl(imm.getValue() instanceof ImmMap);
	}

	public static ImmOV is_sim_nl(ImmRef imm) {
		return c_rt_lib_NL.native_to_nl_nl(imm.getValue() instanceof ImmString
				|| imm.getValue() instanceof ImmDouble);
	}

	public static ImmOV is_variant_nl(ImmRef imm) {
		return c_rt_lib_NL.native_to_nl_nl(imm.getValue() instanceof ImmOV);
	}

	public static void print_nl(ImmRef imm) {
		c_rt_lib_NL.print_nl(imm);
	}

	public static Imm exec_nl(ImmRef func, ImmRef arr) throws Exception {
		Imm[] immArr = ((ImmArray) arr.getValue().clone()).getValue();
		Object[] newArr = new ImmRef[immArr.length];
		for (int i = 0; i < newArr.length; i++) {
			newArr[i] = new ImmRef(immArr[i]);
		}
		Object result = null;
		Method m = getMethodFromImm(func);
		if (m != null)
			result = m.invoke(null, newArr);
		for (int i = 0; i < newArr.length; i++) {
			immArr[i] = ((ImmRef) newArr[i]).getValue();
		}
		arr.setValue(new ImmArray(immArr));
		return new Imm(result);
	}

	private static Method getMethodFromImm(ImmRef imm) throws Exception {
		Map<ImmString, Imm> map = ((ImmMap) (c_rt_lib_NL.ov_as_nl(imm,
				new ImmRef(new ImmString("ref"))))).getValue();
		Class<?> c = Class.forName("com.atinea.nianio."
				+ ((ImmString) map.get(new ImmString("module"))).getValue());
		for (Method m : c.getMethods()) {
			if (m.getName().equals(
					((ImmString) map.get(new ImmString("name"))).getValue())) {
				return m;
			}
		}
		return null;
	}

	private class NLcomparator implements Comparator<Imm> {

		private Method m;

		public NLcomparator(ImmRef func) throws Exception {
			m = getMethodFromImm(func);
		}

		@Override
		public int compare(Imm o1, Imm o2) {
			try {
				return c_rt_lib_NL.check_true_native_nl(new ImmRef((ImmOV) m
						.invoke(null, new ImmRef(o1), new ImmRef(o2)))) ? -1
						: 1;
			} catch (Exception e) {
				c_rt_lib_NL.print_nl(new ImmRef(new ImmString(e.toString())));
			}
			return 0;
		}
	}

}