#define _CRT_SECURE_NO_WARNINGS 1
#include "ManageClass.h"
#include "StaffManage.h"
#include "Staff.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"

int main()
{
	int option = -1;
	Manage manage;
	do
	{
		manage.Menu();
		cout << "����������ѡ��:" << endl;
		cin >> option;
		switch (option)
		{
			case Exit:
				cout << "��ӭ�´�ʹ��!" << endl;
				break;
			case Add:
				manage.AddStaff();
				break;
			case Show:
				manage.PrintInfo();
				break;
			case Delete:
				manage.DeleteStaff();
				break;
			case Modify:

				break;
			case Find:
				break;
			case Sort:

				break;
			case Clear:

				break;
			default:
				cout << "�������!";
				system("pause");
				system("cls");  //����
		}

	} while (option);
}