#pragma once
#include <iostream>
using namespace std;

//Ա������
class Staff  
{
public:
	string Name;
	int PersonalId;
	int DepartId;

	//���麯��
	virtual void ShowInfo() = 0;
	virtual string GetDepartName() = 0;
};