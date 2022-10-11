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

				break;
			case Delete:

				break;
			case Modify:

				break;
			case Find:
				PrintStaff();
				break;
			case Sort:

				break;
			case Clear:

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