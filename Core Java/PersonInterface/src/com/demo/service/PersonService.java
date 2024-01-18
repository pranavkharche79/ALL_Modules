package com.demo.service;

import com.demo.beans.Person;

public interface PersonService  {

	void addNewPeople();

	Person[] displayAll();

	Person searchById(int id);

	Person[] searchByName(String name);

	void display();

	void display1();

	

	

	

}
