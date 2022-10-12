#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

//#define NUMLEN 10

enum Options
{
	Exit,
	Add,
	Print,
	Delete,
	Modify,
	Find,
	Sort,
	Clear
};

class Staff
{
	friend ofstream& operator<<(ofstream& StaffFile, Staff& staff);
	//void AddStaff();
protected:
	string StaffNum;
	string DepartmentNum;
	string StaffName;
public:
	Staff();
	Staff(string StaffNum,string DepartmentNum, string StaffName);
	Staff(Staff& staff);
	void PrintStaff();
	string GetStaffName();
	string GetStaffNum();
	string GetDepartmentNum();
};
class NormalStaff:public Staff
{
public:
	NormalStaff(string StaffNum, string DepartmentNum, string StaffName);
};
class ManagerStaff:public Staff
{
public:
	ManagerStaff(string StaffNum, string DepartmentNum, string StaffName);
};
class Boss:public Staff
{
public:
	Boss(string StaffNum, string DepartmentNum, string StaffName);
};


//º¯ÊýÉùÃ÷
extern void Menu();
extern void AddStaff();
extern void PrintStaff();
extern void FindStaff();
extern void DeleteStaff();