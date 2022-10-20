#pragma once
#include <iostream>
using namespace std;

//员工基类
class Staff  
{
public:
	string Name;
	int PersonalId;
	int DepartId;

	//纯虚函数
	virtual void ShowInfo() = 0;
	virtual string GetDepartName() = 0;
};