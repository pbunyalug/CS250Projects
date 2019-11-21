/************************
	Team1

	Ong, Johnny
	Ngo, Simon
	Bunyalug, Puwakun

	CS A250 - Fall 2019

	Project 1
*************************/

#include "Student.h"

using namespace std;

// default constructor
Student::Student()
{
	studentID = 0;
	totalCourses = 0;
	tuitionWasPaid = false;
}

// setStudentInfo
void Student::setStudentInfo(const string& newFirstName, 
	const string& newLastName, int newIDNumber, bool wasTuitionPaid,
	const multimap<Course, char>& newCoursesCompleted)
{
	setName(newFirstName, newLastName);
	studentID = newIDNumber;
	tuitionWasPaid = wasTuitionPaid;
	coursesCompleted = newCoursesCompleted;
}

// getID
int Student::getID() const
{
	return studentID;
}

// getNumberOfCourses
int Student::getNumberOfCourses() const 
{
	return static_cast<int>(coursesCompleted.size());
}

// getUnitsCompleted
double Student::getUnitsCompleted() const
{
	double unitsSum = 0;
	for (auto i : coursesCompleted)
	{
		unitsSum += i.first.getCourseUnits();
	}
	return unitsSum;
}

// getGpa
double Student::getGpa() const
{
	double unitsAwarded = 0;
	for (auto i : coursesCompleted)
	{
		switch (i.second)
		{
		case 'A':
			unitsAwarded += i.first.getCourseUnits();
			break;
		case 'B':
			unitsAwarded += i.first.getCourseUnits() * 0.75;
			break;
		case 'C':
			unitsAwarded += i.first.getCourseUnits() * 0.50;
			break;
		case 'D':
			unitsAwarded += i.first.getCourseUnits() * 0.25;
			break;
		case 'F':
			break;
		default:
			cout << "Invalid Course Grade" << endl;
		}
	}
	return unitsAwarded / getUnitsCompleted();
}

// isTuitionPaid
bool Student::isTuitionPaid() const
{
	return tuitionWasPaid;
}

// courseIsCompleted
bool Student::courseIsCompleted(const string& findCoursePrefix,
	int findCourseNo) const
{
	for (auto i : coursesCompleted)
	{
		if (i.first.getCoursePrefix() == findCoursePrefix &&
			i.first.getCourseNo() == findCourseNo)
		{
			return true;
		}
	}
	return false;
}

// printStudent
void Student::printStudent() const
{
	cout << studentID;
	printName();
	cout << endl;
}

void Student::printStudentInfo() const
{
	cout << "Student Name: ";
	printName();
	cout << endl << endl;

	cout << "Student ID: " << studentID << endl;
	cout << "Number of courses completed: " << getNumberOfCourses() << endl << endl;

	cout << "Course    Units     Grade" << endl;
	if (tuitionWasPaid)
	{
		for (auto i : coursesCompleted)
		{
			cout << fixed << showpoint << setprecision(2) << i.first.getCoursePrefix()
				<< " " << i.first.getCourseNo() << "    " << i.first.getCourseUnits()
				<< "        " << i.second << endl << endl;

			cout << "Total number of unit hours: " << getUnitsCompleted() << endl;
			cout << "Current Term GPA: " << getGpa() << endl << endl;
		}
	}
	else
	{
		for (auto i : coursesCompleted)
		{
			cout << fixed << showpoint << setprecision(2) << i.first.getCoursePrefix()
				<< " " << i.first.getCourseNo() << "    " << i.first.getCourseUnits()
				<< "        " << "***" << endl << endl;

			cout << "Total number of unit hours: " << getUnitsCompleted() << endl;
			cout << "Current Term GPA: " << getGpa() << endl << endl;
		}
	}

	cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl;
}


// destructor
Student::~Student()
{

}