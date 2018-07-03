#include<iostream>
#include<string>
#include"students.h"

Student::Student(string name, string id)
{
	this->name = name;
	this->id = id;
}
void Student::CheckInfo()
{
	std::cout << "name:" << name << " " << "id:" << id << std::endl;
}
void Student::CheckAbsInfo()
{
	for(auto iter = abs_record.begin(); iter != abs_record.end(); iter++)
	{
		std::cout << iter << std::endl;
	}
}