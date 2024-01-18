package com.demo.beans;

public class Person {
	private int pid;
	private String name;
	private String mno;
	public Person() {
		super();
		System.out.println("default constructor of person");
	}
	public Person(int pid, String name, String mno) {
		super();
		this.pid = pid;
		this.name = name;
		this.mno = mno;
	}
	public int getPid() {
		return pid;
	}
	public void setPid(int pid) {
		this.pid = pid;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getMno() {
		return mno;
	}
	public void setMno(String mno) {
		this.mno = mno;
	}
	@Override
	public String toString() {
		return "Person [pid=" + pid + ", name=" + name + ", mno=" + mno + "]";
	}
	
	
}
