#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"


int main()
{
	int input = 0;  //����ѡ��
	Contact con;
	InitContact(&con);  //��ʼ��ͨѶ¼
	do
	{
		menu();
		printf("��ѡ��:>");
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
				printf("�˳�ͨѶ¼\n");
				break;
			default:
				printf("ѡ�����!������ѡ��:\n");
				break;
		}

	} while (input);

	return 0;
}