#pragma once
using namespace std;
#include <iostream>
#include <vector>
#include "Staff.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"
#include <fstream>


class Manage
{
public:
	vector<Staff*> vStaff;  //记录员工数据
	vector<Staff*> InfoFromFile;
	vector<Staff*> vDelete;
	Manage();
	~Manage();
	void Menu();
	void AddStaff();
	void SaveInfoToFile(vector<Staff*>& vStaff);
	void ReadInfoFromFile();
	void PrintInfo();
	void DeleteStaff();
};