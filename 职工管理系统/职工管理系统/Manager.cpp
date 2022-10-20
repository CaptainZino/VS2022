#define _CRT_SECURE_NO_WARNINGS 1
#include "Manager.h"

Manager::Manager(string Name, int PersonalId, int DepartId)
{
	this->Name = Name;
	this->PersonalId = PersonalId;
	this->DepartId = DepartId;
}

void Manager::ShowInfo()
{
	cout << "姓名:" << this->Name << endl;
	cout << "个人编号:" << this->PersonalId << endl;
	cout << "岗位:" << this->GetDepartName() << endl;
	cout << "岗位职责:" << "完成老板下发的任务" << endl;
}

string Manager::GetDepartName()
{
	return string("经理");
}