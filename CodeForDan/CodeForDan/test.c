#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

static int a = 100;  //aֻ���ڱ��ļ��ڱ����ʣ����ܱ����ļ�ֱ�ӷ���
//int a = 200;

static void show()  //showֻ���ڱ��ļ��ڱ����ʣ����ܱ����ļ�ֱ�ӷ���
{
	printf("hello there\n");
	printf("%d\n",a);
}

//static����ȫ�ֱ����ͺ������޸����������������ڲ���
//static���ξֲ��������޸����������ڣ������򲻱�
void show_test()
{
	show();
} 