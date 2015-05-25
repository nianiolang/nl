/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: MBN 2014-10-22
 */

package com.atinea.nianio;

import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Date;

public class c_fe_lib_NL {

	private static ImmOV get_ov(String var, Imm val) {
		return c_rt_lib_NL.ov_mk_arg_nl(new ImmString(var), new ImmRef(val));
	}

	private static void print_nl(String str) {
		print_nl(new ImmRef(new ImmString(str)));
	}

	public static void print_nl(ImmRef arg) {
		c_rt_lib_NL.print_nl(arg);
	}

	public static ImmOV file_to_string_nl(ImmRef filename) {
		return read_file(((ImmString) filename.getValue()).getValue());
	}

	private static ImmOV read_file(String filename) {
		File f = new File(filename);
		FileInputStream fs = null;
		BufferedInputStream in = null;
		byte[] result = new byte[(int) f.length()];
		try {
			fs = new FileInputStream(f);
			in = new BufferedInputStream(fs);
			int bytesRead = in.read(result);
			fs.close();
			in.close();
			if (bytesRead != f.length()) {
				print_nl("Expected bytes: " + result.length + ", but got only "
						+ bytesRead);
				return get_ov("err", new ImmString("Short read"));
			}
			return get_ov("ok", new ImmString(new String(result)));
		} catch (IOException e) {
			print_nl(e.toString());
			return get_ov("err", new ImmString(e.toString()));
		}
	}

	public static ImmOV string_to_file_nl(ImmRef filename, ImmRef content) {
		return write_file(((ImmString) filename.getValue()).getValue(),
				((ImmString) content.getValue()).getValue());
	}

	private static ImmOV write_file(String filename, String content) {
		byte[] dataToWrite = content.getBytes();
		FileOutputStream out = null;
		try {
			out = new FileOutputStream(filename);
			out.write(dataToWrite);
			out.close();
			return get_ov("ok", new ImmString(""));
		} catch (IOException e) {
			print_nl(e.toString());
			return get_ov("err", new ImmString(e.toString()));
		}
	}

	public static Imm get_file_size_nl(ImmRef filename) {
		long s = get_file_size(((ImmString) filename.getValue()).getValue());
		if (s == -1)
			return get_ov("err", new ImmString("File doesn't exists"));
		return get_ov("ok", new ImmDouble(s));
	}

	private static long get_file_size(String filename) {
		File f = new File(filename);
		if (!f.exists()) {
			print_nl("File: " + filename + " doesn't exists");
			return -1;
		}
		return f.length();
	}

	public static Imm get_modif_time_nl(ImmRef filename) {
		File f = new File(((ImmString) filename.getValue()).getValue());
		if (!f.exists()) {
			print_nl("File: " + f.getAbsolutePath() + " doesn't exists");
			return get_ov("err", new ImmString("File doesn't exists"));
		}
		return get_ov("ok", new ImmDouble(f.lastModified()));
	}

	public static Imm get_module_files_rec_nl(ImmRef directory) {
		ImmRef file = new ImmRef(new ImmArray(new Imm[0]));
		get_files_rec(((ImmString) directory.getValue()).getValue(), file,
				false);
		return file.getValue();
	}

	public static Imm get_module_files_nl(ImmRef directory) {
		ImmRef file = new ImmRef(new ImmArray(new Imm[0]));
		Imm ret = get_files_rec(((ImmString) directory.getValue()).getValue(),
				file, false);
		if (ret == null)
			return get_ov("ok", file.getValue());
		file.setValue(null);
		return ret;
	}

	private static ImmOV get_files_rec(String path, ImmRef files, boolean deep) {
		File d = new File(path);
		if (d.canRead()) {
			for (File el : d.listFiles()) {
				if (el.isFile()) {
					ImmRef imm = new ImmRef(new ImmString(el.getAbsolutePath()));
					c_std_lib_NL.array_push_nl(files, imm);
					imm.setValue(null);
				} else if (el.isDirectory() && deep) {
					get_files_rec(el.getAbsolutePath(), files, deep);
				}
			}
		} else {
			print_nl("Cannot read dir: " + path);
			return get_ov("err", new ImmString("Cannot read dir"));
		}
		return null;
	}

	public static void mk_path_nl(ImmRef path) {
		File dir = new File(((ImmString) path.getValue()).getValue());
		if (dir.exists() || !dir.mkdirs()) {
			print_nl("Cannot create directory: " + dir.getAbsolutePath());
		}
	}

	public static Imm get_time_nl() {
		long timestamp = new Date().getTime();
		int s = (int) (timestamp / 1000);
		int us = (int) (timestamp % 1000 * 1000);
		Imm[] imm = new Imm[] { new ImmDouble(s), new ImmDouble(us) };
		return new ImmArray(imm);
	}
	public static void sleep_nl(ImmRef imm) throws InterruptedException {
		Thread.sleep((long) (((ImmDouble) imm.getValue()).getValue() * 1000));
	}

	public static void exec_cmd_nl(ImmRef imm) throws Exception {
		Process p = Runtime.getRuntime().exec(
				((ImmString) imm.getValue()).getValue());
		p.waitFor();
		if (p.exitValue() != 0)
			c_rt_lib_NL.die_nl();
	}
}
