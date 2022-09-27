#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//ͨѶ¼�˵�
void menu()
{
	printf("***********************************\n");
	printf("*******   1.add    2.delete *******\n");
	printf("*******   3.serch  4.modify *******\n");
	printf("*******   5.sort   6.print  *******\n");
	printf("************  0.exit  *************\n");
	printf("***********************************\n");

}

//��ʼ��ͨѶ¼
void InitContact(Contact* p_con)
{
	int i = 0;
	memset(p_con->data,0,sizeof(p_con->data));  //��ʼ��data
	p_con->index = 0;  //��ʼ��index
}

//������ϵ��
void AddContact(Contact* p_con)
{
	//PeoInfo TemPeoInfo = { 0 };
	if (p_con->index == MAX_DATA) {

		printf("ͨѶ¼����\n");
		return;
	}

	printf("����������:>\n");
	scanf("%s",p_con->data[p_con->index].name);
	printf("�������Ա�:>\n");
	scanf("%s", p_con->data[p_con->index].sex);
	printf("����������:>\n");
	scanf("%d", &p_con->data[p_con->index].age);
	printf("���������:>\n");
	scanf("%s", p_con->data[p_con->index].tele);
	printf("�������ַ:>\n");
	scanf("%s", p_con->data[p_con->index].addr);

	p_con->index++;
	printf("������ϵ�˳ɹ�\n");
}

//����������ͨѶ¼�н��в�ѯ
static int FindByName(Contact* p_con,char TemName[])  //TemName���ᱻ�������������С��ֻ��Ҫ��ȷ���ͺ�����
{
	for (int i = 0; i < p_con->index; i++) {
		//����ͨѶ¼���Ƿ��ж�Ӧ����ϵ��
		if (strcmp(TemName,p_con->data[i].name) == 0) {

			return i;
		}
	}
	return -1;
}

//��ӡ��ϵ��
void PrintContact(const Contact* p_con)
{
	
	for (int i = 0; i < p_con->index;i++) {

		printf("************************************************************************************\n");
		printf("%-15s\t%-15s\t%-15s\t%-15s\t%-15s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		printf("%-15s\t%-15s\t%-15d\t%-15s\t%-15s\n", p_con->data[i].name,
			p_con->data[i].sex,
			p_con->data[i].age,
			p_con->data[i].tele,
			p_con->data[i].addr);
	}
	printf("************************************************************************************\n");
}


//������ϵ��
void SerchContact(const Contact* p_con)
{
	char TemName[MAX_NAME] = { 0 };
	int TemIndex = 0;
	printf("������Ҫ���ҵ���Ա����:\n");
	scanf("%s", TemName);
	TemIndex = FindByName(p_con, TemName);
	if (TemIndex == -1) {

		printf("ͨѶ¼����%s\n", TemName);
	}
	else {

		printf("%-15s\t%-15s\t%-15s\t%-15s\t%-15s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		printf("%-15s\t%-15s\t%-15d\t%-15s\t%-15s\n", p_con->data[TemIndex].name,
			p_con->data[TemIndex].sex,
			p_con->data[TemIndex].age,
			p_con->data[TemIndex].tele,
			p_con->data[TemIndex].addr);
	}
}

//ɾ����ϵ��
void DelContact(Contact* p_con)
{
	if (p_con->index == 0) {

		printf("ͨѶ¼Ϊ�գ�����ɾ��\n");
		return;
	}
	char TemName[MAX_NAME] = { 0 };
	int TemIndex = 0;
	printf("������Ҫɾ����ϵ�˵�����:\n");
	scanf("%s", TemName);
	TemIndex = FindByName(p_con, TemName);
	if (TemIndex == -1) {

		printf("ͨѶ¼����%s\n", TemName);
		return;
	}
	else {

		for (int i = TemIndex; i < p_con->index - 1; i++) {

			p_con->data[i] = p_con->data[i + 1];
		}
		p_con->index--;
		printf("ɾ���ɹ�\n");
	}
}
//�޸���ϵ��
void ModifyContact(Contact* p_con) 
{
	char TemName[MAX_NAME] = {0};
	int TemIndex = 0;
	if(p_con->index == 0) {
		
		printf("ͨѶ¼Ϊ�գ��޷��޸�\n");
		return;
	}
	printf("������Ҫ�޸���ϵ�˵�����:\n");
	scanf("%s", TemName);
	TemIndex = FindByName(p_con,TemName);
	if (TemIndex == -1) {
	
		printf("ͨѶ¼����%s\n",TemName);
		return;
	}
	else {
	
		printf("�������޸ĺ������:>\n");
		scanf("%s", p_con->data[TemIndex].name);
		printf("�����޸ĺ�����Ա�:>\n");
		scanf("%s", p_con->data[TemIndex].sex);
		printf("�����޸ĺ��������:>\n");
		scanf("%d", &p_con->data[TemIndex].age);
		printf("�����޸ĺ�������:>\n");
		scanf("%s", p_con->data[TemIndex].tele);
		printf("�����޸ĺ�����ַ:>\n");
		scanf("%s", p_con->data[TemIndex].addr);

		printf("�޸���ϵ����Ϣ�ɹ�!\n");
	}
}