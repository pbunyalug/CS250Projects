/************************
	Team1

	Ong, Johnny
	Ngo, Simon
	Bunyalug, Puwakun

	CS A250 - Fall 2019

	Project 1
*************************/

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person
{
public:
	// default constructor
	Person();

	// overloaded constructor
	Person(const std::string&, const std::string&);

	// setName
	void setName(const std::string&, const std::string&);

	// getLastName
	std::string getLastName() const;

	// printName
	void printName() const;

	// destructor
	~Person();

private:
	std::string firstName;
	std::string lastName;
};

#endif 