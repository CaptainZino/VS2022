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
	cout << "����:" << this->Name << endl;
	cout << "���˱��:" << this->PersonalId << endl;
	cout << "��λ:" << this->GetDepartName() << endl;
	cout << "��λְ��:" << "ѹեԱ��" << endl;
}

string Boss::GetDepartName()
{
	return string("�ϰ�");
}