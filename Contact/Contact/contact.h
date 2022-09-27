#pragma once
#include <stdio.h>
#include <string.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX_DATA 1000


//������Ϣ
typedef struct
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//����ѡ��
enum Option
{
	EXIT,
	ADD,
	DEL,
	SERCH,
	MODIFY,
	SORT,
	PRINT,
};

//ͨѶ¼
typedef struct
{
	PeoInfo data[MAX_DATA];  //������Ա��Ϣ
	int index;  //��ǰͨѶ¼����Ч��Ϣ�ĸ���
}Contact;

//��������
extern void menu();  //ͨѶ¼�˵�
extern void InitContact(Contact* p_con);  //��ʼ��ͨѶ¼
extern void AddContact(Contact* p_con);  //������ϵ��
extern void PrintContact(const Contact* p_con);  //��ӡ��ϵ��
extern void DelContact(Contact* p_con);  //ɾ����ϵ��
extern void SerchContact(const Contact* p_con); //������ϵ��
extern void ModifyContact(Contact* p_con);  //�޸���ϵ��