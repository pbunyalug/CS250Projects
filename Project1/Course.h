/************************
	Team1

	Ong, Johnny
	Ngo, Simon
	Bunyalug, Puwakun

	CS A250 - Fall 2019

	Project 1
*************************/

#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

class Course
{
public:
	// default constructorre
	Course();

	// setCourseInfo
	void setCourseInfo(const std::string&, const std::string&, int, double);

	// getCourseName
	std::string getCourseName() const;

	// getCoursePrefix
	std::string getCoursePrefix() const;

	// getCourseNo
	int getCourseNo() const;

	// getCourseUnits
	double getCourseUnits() const;

	// printCourseInfo
	void printCourseInfo() const;

	// destructor;
	~Course();

	// overloaded
	bool operator<(const Course&) const;

private:
	std::string courseName;
	std::string coursePrefix;
	int courseNo;
    double courseUnits;
};

#endif
