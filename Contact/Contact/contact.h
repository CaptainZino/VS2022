#pragma once
#include <stdio.h>
#include <string.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX_DATA 1000


//个人信息
typedef struct
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//输入选项
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

//通讯录
typedef struct
{
	PeoInfo data[MAX_DATA];  //保存人员信息
	int index;  //当前通讯录中有效信息的个数
}Contact;

//函数声明
extern void menu();  //通讯录菜单
extern void InitContact(Contact* p_con);  //初始化通讯录
extern void AddContact(Contact* p_con);  //新增联系人
extern void PrintContact(const Contact* p_con);  //打印联系人
extern void DelContact(Contact* p_con);  //删除联系人
extern void SerchContact(const Contact* p_con); //查找联系人
extern void ModifyContact(Contact* p_con);  //修改联系人