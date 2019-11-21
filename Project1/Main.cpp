/************************
	Team1

	Ong, Johnny
	Ngo, Simon
	Bunyalug, Puwakun

	CS A250 - Fall 2019

	Project 1
*************************/

#include "Student.h"
#include "Course.h"

#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Course.................................................." << endl << endl;
	Course course1, course2, course3, course4;
	course1.setCourseInfo("Biology", "BIO", 234, 4.00);
	course2.setCourseInfo("Chemistry", "CHM", 348, 4.00);
	course3.setCourseInfo("Compute Sciences", "CSC", 150, 4.00);
	course4.setCourseInfo("English", "ENG", 101, 3.00);

	cout << "...getCourseName: " << course1.getCourseName() << endl;
	cout << "...getCoursePrefix: " << course1.getCoursePrefix() << endl;
	cout << "...getCourseNo: " << course1.getCourseNo() << endl;
	cout << "...getCourseUnits: " << course1.getCourseUnits() << endl;
	cout << "...printCourseInfo: " << endl;
	course1.printCourseInfo();
	cout << endl << "End of Course..........................................." << endl << endl;
	
	cout << "Person.................................................." << endl << endl;
	Person person1;
	cout << "...printName (default): ";
	person1.printName();

	cout << "...setName...printName: ";
	person1.setName("Billy", "Smith");
	person1.printName();

	Person person2("Jane", "Smith");
	cout << "...getLastName: " << person2.getLastName() << endl;
	cout << "...printName (overloaded): ";
	person2.printName();
	cout << endl << "End of Person..........................................." << endl << endl;

	cout << "Student................................................." << endl << endl;
	Student student1, student2;
	multimap<Course, char> m1;
	m1.insert(make_pair(course1, 'A'));
	m1.insert(make_pair(course2, 'B'));
	m1.insert(make_pair(course3, 'A'));
	m1.insert(make_pair(course4, 'A'));

	student1.setStudentInfo("Pete", "Parker", 654321, true, m1);
	cout << "...getID: " << student1.getID() << endl;
	cout << "...getNumberOfCourses: " << student1.getNumberOfCourses() << endl;
	cout << "...getUnitsCompleted: " << student1.getUnitsCompleted() << endl;
	cout << "...getGpa: " << student1.getGpa() << endl;

	cout << "...isTuitionPaid: ";
	student1.isTuitionPaid() ? cout << "Tuition is paid." : cout << "Tuition is not paid.";
	cout << endl;

	cout << "...courseIsCompleted(BIO, 234): ";
	student1.courseIsCompleted("BIO", 234) ? 
		cout << "Course is completed." : cout << "Course is incomplete.";
	cout << endl;

	cout << "...courseIsCompleted(CS, 250): ";
	student1.courseIsCompleted("CS", 250) ?
		cout << "Course is completed." : cout << "Course is incomplete.";
	cout << endl;

	cout << "printName: ";
	student1.printName();
	
	cout << "printStudentInfo... " << endl;
	student1.printStudentInfo();

	cout << "printStudentInfo (tuitionWasPaid = false)..." << endl;
	student1.setStudentInfo("Pete", "Parker", 654321, false, m1);
	student1.printStudentInfo(); 

	cout << endl << "End of Student.........................................." << endl;

	cout << endl;
	system("Pause");
	return 0;
}


