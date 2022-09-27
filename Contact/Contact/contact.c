#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//通讯录菜单
void menu()
{
	printf("***********************************\n");
	printf("*******   1.add    2.delete *******\n");
	printf("*******   3.serch  4.modify *******\n");
	printf("*******   5.sort   6.print  *******\n");
	printf("************  0.exit  *************\n");
	printf("***********************************\n");

}

//初始化通讯录
void InitContact(Contact* p_con)
{
	int i = 0;
	memset(p_con->data,0,sizeof(p_con->data));  //初始化data
	p_con->index = 0;  //初始化index
}

//新增联系人
void AddContact(Contact* p_con)
{
	//PeoInfo TemPeoInfo = { 0 };
	if (p_con->index == MAX_DATA) {

		printf("通讯录已满\n");
		return;
	}

	printf("请输入名字:>\n");
	scanf("%s",p_con->data[p_con->index].name);
	printf("请输入性别:>\n");
	scanf("%s", p_con->data[p_con->index].sex);
	printf("请输入年龄:>\n");
	scanf("%d", &p_con->data[p_con->index].age);
	printf("请输入号码:>\n");
	scanf("%s", p_con->data[p_con->index].tele);
	printf("请输入地址:>\n");
	scanf("%s", p_con->data[p_con->index].addr);

	p_con->index++;
	printf("新增联系人成功\n");
}

//根据名字在通讯录中进行查询
static int FindByName(Contact* p_con,char TemName[])  //TemName不会被创建，故无需大小，只需要明确类型和名称
{
	for (int i = 0; i < p_con->index; i++) {
		//查找通讯录中是否有对应的联系人
		if (strcmp(TemName,p_con->data[i].name) == 0) {

			return i;
		}
	}
	return -1;
}

//打印联系人
void PrintContact(const Contact* p_con)
{
	
	for (int i = 0; i < p_con->index;i++) {

		printf("************************************************************************************\n");
		printf("%-15s\t%-15s\t%-15s\t%-15s\t%-15s\n", "姓名", "性别", "年龄", "电话", "地址");
		printf("%-15s\t%-15s\t%-15d\t%-15s\t%-15s\n", p_con->data[i].name,
			p_con->data[i].sex,
			p_con->data[i].age,
			p_con->data[i].tele,
			p_con->data[i].addr);
	}
	printf("************************************************************************************\n");
}


//查找联系人
void SerchContact(const Contact* p_con)
{
	char TemName[MAX_NAME] = { 0 };
	int TemIndex = 0;
	printf("请输入要查找的人员名称:\n");
	scanf("%s", TemName);
	TemIndex = FindByName(p_con, TemName);
	if (TemIndex == -1) {

		printf("通讯录中无%s\n", TemName);
	}
	else {

		printf("%-15s\t%-15s\t%-15s\t%-15s\t%-15s\n", "姓名", "性别", "年龄", "电话", "地址");
		printf("%-15s\t%-15s\t%-15d\t%-15s\t%-15s\n", p_con->data[TemIndex].name,
			p_con->data[TemIndex].sex,
			p_con->data[TemIndex].age,
			p_con->data[TemIndex].tele,
			p_con->data[TemIndex].addr);
	}
}

//删除联系人
void DelContact(Contact* p_con)
{
	if (p_con->index == 0) {

		printf("通讯录为空，无需删除\n");
		return;
	}
	char TemName[MAX_NAME] = { 0 };
	int TemIndex = 0;
	printf("请输入要删除联系人的名称:\n");
	scanf("%s", TemName);
	TemIndex = FindByName(p_con, TemName);
	if (TemIndex == -1) {

		printf("通讯录中无%s\n", TemName);
		return;
	}
	else {

		for (int i = TemIndex; i < p_con->index - 1; i++) {

			p_con->data[i] = p_con->data[i + 1];
		}
		p_con->index--;
		printf("删除成功\n");
	}
}
//修改联系人
void ModifyContact(Contact* p_con) 
{
	char TemName[MAX_NAME] = {0};
	int TemIndex = 0;
	if(p_con->index == 0) {
		
		printf("通讯录为空，无法修改\n");
		return;
	}
	printf("请输入要修改联系人的姓名:\n");
	scanf("%s", TemName);
	TemIndex = FindByName(p_con,TemName);
	if (TemIndex == -1) {
	
		printf("通讯录中无%s\n",TemName);
		return;
	}
	else {
	
		printf("请输入修改后的名字:>\n");
		scanf("%s", p_con->data[TemIndex].name);
		printf("请输修改后的入性别:>\n");
		scanf("%s", p_con->data[TemIndex].sex);
		printf("请输修改后的入年龄:>\n");
		scanf("%d", &p_con->data[TemIndex].age);
		printf("请输修改后的入号码:>\n");
		scanf("%s", p_con->data[TemIndex].tele);
		printf("请输修改后的入地址:>\n");
		scanf("%s", p_con->data[TemIndex].addr);

		printf("修改联系人信息成功!\n");
	}
}