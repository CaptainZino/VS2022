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
	cout << "����:" << this->Name << endl;
	cout << "���˱��:" << this->PersonalId << endl;
	cout << "��λ:" << this->GetDepartName() << endl;
	cout << "��λְ��:" << "����ϰ��·�������" << endl;
}

string Manager::GetDepartName()
{
	return string("����");
}