#define _CRT_SECURE_NO_WARNINGS 1
#include "Boss.h"

Boss::Boss(string Name, int PersonalId, int DepartId)
{
	this->Name = Name;
	this->PersonalId = PersonalId;
	this->DepartId = DepartId;
}

void Boss::ShowInfo()
{
	cout << "姓名:" << this->Name << endl;
	cout << "个人编号:" << this->PersonalId << endl;
	cout << "岗位:" << this->GetDepartName() << endl;
	cout << "岗位职责:" << "压榨员工" << endl;
}

string Boss::GetDepartName()
{
	return string("老板");
}