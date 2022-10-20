#define _CRT_SECURE_NO_WARNINGS 1
#include "Employee.h"

Employee::Employee(string Name, int PersonalId, int DepartId)
{
	this->Name = Name;
	this->PersonalId = PersonalId;
	this->DepartId = DepartId;
}

void Employee::ShowInfo()
{
	cout << "姓名:" << this->Name << endl;
	cout << "个人编号:" << this->PersonalId << endl;
	cout << "岗位:" << this->GetDepartName() << endl;
	cout << "岗位职责:" << "完成经理下发的任务" << endl;
}

string Employee::GetDepartName()
{
	return string("普通员工");
}