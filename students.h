#pragma once
#include<string>
#include<map>
#include<vector>
#include"course.h"

using std::string;
using std::vector;

class Student
{
public:
	Student();
	Student(string name, string id);
	void SaveInfo();  //保存信息到文件
	void CheckInfo();  //显示个人信息
	void CheckAbsInfo();  //显示翘课记录
private:
	string name;
	string id;
	vector<AbsRecord> abs_record;
	Student *pre;
	Student *next;
};

