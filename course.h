#pragma once
#include<string>
#include<iostream>

using std::string;

class Course
{
public:
	Course();
private:
	string CourseName;
	string TeacherName;
};

class DateTime
{
public:
	DateTime();
private:
	int year;
	int month;
	int day;
};

class AbsRecord
{
public:
	AbsRecord();
	Course GetCourse();
	DateTime GetTime();

private:
	DateTime abs_time;
	Course class_type;
};