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
	void SaveInfo();  //������Ϣ���ļ�
	void CheckInfo();  //��ʾ������Ϣ
	void CheckAbsInfo();  //��ʾ�̿μ�¼
private:
	string name;
	string id;
	vector<AbsRecord> abs_record;
	Student *pre;
	Student *next;
};

