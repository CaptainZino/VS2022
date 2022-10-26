#define _CRT_SECURE_NO_WARNINGS 1
#include "SpeechManagementSystem.h"

int main()
{
	SpeechManage speechManage;
	int option = 0;
	do
	{
		speechManage.ShowMenu();
		cout << "请输入您的选项:";
		cin >> option;
		switch (option)
		{
		case 0:
			cout << "欢迎下次使用" << endl;
			break;
		case 1:
			speechManage.ContestantDraw();
			speechManage.SpeechContest();
			break;
		case 2:
			speechManage.SpeechContest();
			break;
		case 3:
			break;
		default:

			return 0;
		}

	} while (option);
	return 0;
}