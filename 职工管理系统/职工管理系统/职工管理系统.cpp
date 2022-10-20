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
		cout << "请输入您的选项:" << endl;
		cin >> option;
		switch (option)
		{
			case Exit:
				cout << "欢迎下次使用!" << endl;
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
				cout << "输入错误!";
				system("pause");
				system("cls");  //清屏
		}

	} while (option);
}