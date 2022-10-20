#pragma once
#include "Staff.h"

class Manager : public Staff
{
public:
	Manager(string Name, int PersonalId, int DepartId);
	void ShowInfo();
	string GetDepartName();
};
