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
	cout << "����:" << this->Name << endl;
	cout << "���˱��:" << this->PersonalId << endl;
	cout << "��λ:" << this->GetDepartName() << endl;
	cout << "��λְ��:" << "��ɾ����·�������" << endl;
}

string Employee::GetDepartName()
{
	return string("��ͨԱ��");
}