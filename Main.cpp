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
	Course course1;
	course1.setCourseInfo("ComputerSci", "CS", 250, 4.00);
	cout << "getCourseName: " << course1.getCourseName() << endl;
	cout << "getCoursePrefix: " << course1.getCoursePrefix() << endl;
	cout << "getCourseNo: " << course1.getCourseNo() << endl;
	cout << "getCourseUnits: " << course1.getCourseUnits() << endl;
	cout << "printCourseInfo: " << endl;
	course1.printCourseInfo();
	cout << endl;
	
	Person person1;
	Person person2("Billy", "Smith");
	person1.setName("Mike", "Mikes");
	cout << "getLastName: " << person1.getLastName() << endl;
	cout << "printName: ";
	person2.printName();
	cout << endl;
	cout << endl;

	Student student1;
	multimap<Course, char> m1;
	m1.insert(make_pair(course1, 'A'));
	student1.setStudentInfo("James", "Pham", 394256, true, m1);
	cout << "getID: " << student1.getID() << endl;
	cout << "getNumberOfCourses: " << student1.getNumberOfCourses() << endl;
	cout << "getUnitsCompleted: " << student1.getUnitsCompleted() << endl;
	cout << "getGpa: " << student1.getGpa() << endl;
	bool tuitionPaid = student1.isTuitionPaid();
	if (tuitionPaid)
	{
		cout << "Tuition Paid" << endl;
	}
	else
	{
		cout << "Tuition Not Paid" << endl;
	}
	bool courseCompleted = student1.courseIsCompleted("CS", 250);
	if (courseCompleted)
	{
		cout << "Course Completed" << endl;
	}
	else
	{
		cout << "Course not completed" << endl;
	}

	cout << "printName: ";
	student1.printName();
	
	cout << "printStudentInfo: " << endl;
	student1.printStudentInfo();

	cout << "Setting tuitionWasPaid to false..." << endl;
	student1.setStudentInfo("James", "Pham", 394256, false, m1);
	cout << "printStudentInfo: " << endl;
	student1.printStudentInfo();

	cout << endl;
	system("Pause");
	return 0;
}


