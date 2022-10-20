#pragma once
#include "Staff.h"

class Boss : public Staff
{
public:
	Boss(string Name, int PersonalId, int DepartId);
	void ShowInfo();
	string GetDepartName();
};