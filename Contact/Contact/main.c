#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"


int main()
{
	int input = 0;  //输入选项
	Contact con;
	InitContact(&con);  //初始化通讯录
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
			case ADD:
				AddContact(&con);
				break;
			case DEL:
				DelContact(&con);
				break;
			case SERCH:
				SerchContact(&con);
				break;
			case MODIFY:
				ModifyContact(&con);
				break;
			case SORT:
				//
				break;
			case PRINT:
				PrintContact(&con);
				break;
			case EXIT:
				printf("退出通讯录\n");
				break;
			default:
				printf("选择错误!请重新选择:\n");
				break;
		}

	} while (input);

	return 0;
}