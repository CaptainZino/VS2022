#pragma once
#include "Staff.h"

class Employee: public Staff
{
public:
	Employee(string Name,int PersonalId,int DepartId);
	void ShowInfo();
	string GetDepartName();
};
