package com.demo.dao;

import com.demo.beans.Person;

public class PersondaoImpl implements Persondao{
	
	Person parr[]= new Person[4];
	static int count;
	static {
		count=0;
	}
	@Override
	public void save(Person p) {
		parr[count]=p;
		count++;
	}
	@Override
	public Person[] display() {
		return parr;
	}
	@Override
	public Person searchID(int id) {
		for(int i=0; i <count; i++) {
			if(parr[i].getPid()==id) {
				return parr[i];
			}
		}
		return null;
	}
	@Override
	public Person[] searchName(String name) {
		Person[] temp = new Person[count];
		int index=0;
		for(int i=0; i <count; i++) {
			if(parr[i].getName().equals(name)) {
				
				temp[index++]=parr[i];
				
			}
			
		}
		return temp;
		
	}
	@Override
	public void display1() {
		// TODO Auto-generated method stub
		
	}
	@Override
	public void display11() {
		// TODO Auto-generated method stub
		
	}
	
	
	
}
