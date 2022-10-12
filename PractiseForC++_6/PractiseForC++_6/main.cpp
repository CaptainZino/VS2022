#define _CRT_SECURE_NO_WARNINGS 1
#include "StaffManage.h"


int main()
{
	int input = -1;
	do
	{
		Menu();
		cout << "please input your option:" << endl;
		cin >> input;
		switch (input)
		{
			case Add:
				AddStaff();
				break;
			case Print:
				PrintStaff();
				break;
			case Delete:
				DeleteStaff();
				break;
			case Modify:
				ModifyStaff();
				break;
			case Find:
				FindStaff();
				break;
			case Sort:
				SortStaff();
				break;
			case Clear:
				ClearStaff();
				break;
			case Exit:
				cout << "Exit Staff Management!" << endl;
				break;
			default:
				cout << "input error!!!"<<endl;
				cout << "please input again:" << endl;
		}
	} while (input);
}