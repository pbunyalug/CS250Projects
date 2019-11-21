/************************
	Team1

	Ong, Johnny
	Ngo, Simon
	Bunyalug, Puwakun

	CS A250 - Fall 2019

	Project 1
*************************/

#include "Course.h"

using namespace std;

// default constructor
Course::Course()
{
	courseNo = 0;
	courseUnits = 0;
}

// setCourseInfo
void Course::setCourseInfo(const string& newCourseName, const string& newCoursePrefix,
	int newCourseNo, double newCourseUnits)
{
	courseName = newCourseName;
	coursePrefix = newCoursePrefix;
	courseNo = newCourseNo;
	courseUnits = newCourseUnits;
}

// getCourseName
string Course::getCourseName() const
{
	return courseName;
}

// getCoursePrefix
string Course::getCoursePrefix() const
{
	return coursePrefix;
}

// getCourseNo
int Course::getCourseNo() const
{
	return courseNo;
}
// getCourseUnits
double Course::getCourseUnits() const
{
	return courseUnits;
}

// printCourseInfo
void Course::printCourseInfo() const
{
	cout << coursePrefix << " " << courseNo;
	cout << setw(4);
	cout << courseUnits << endl;
}

// destructor
Course::~Course()
{

}

bool Course::operator<(const Course& otherCourse) const
{
	if (coursePrefix == otherCourse.coursePrefix)
		return (courseNo < otherCourse.courseNo);
	else
		return (coursePrefix < otherCourse.coursePrefix);
}
