#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//�����ļ���������:
//ofstream:д����
//ifstream:������
//fstream:��д����

//д�ļ�:
//1.����ͷ�ļ�:#include <fstream>
//2.����������:ofstream ofs; 
//3.���ļ�:ofs.open("�ļ�·��",�򿪷�ʽ);
//ios::in �Զ��ķ�ʽ���ļ�
//ios::out ��д�ķ�ʽ���ļ�
//ios::ate ��ʼλ��Ϊ�ļ�ĩβ
//ios::app ׷�ӷ�ʽд�ļ�
//ios::trunc ����ļ�������ɾ���ٴ���
//ios::binary �����Ʒ�ʽ
//�ļ��򿪷�ʽ�������ʹ��,����|������,�����ö����Ʒ�ʽд�ļ�: ios::binary|ios::out
//4.д����:ofs<<"д�������";
//5.�ر��ļ�:ofs.close();
//void test1()
//{
//	ofstream ofs;
//	ofs.open("./test.txt", ios::trunc|ios::out);
//	ofs << "hello there" << endl;
//	ofs << "hello world" << endl;
//	ofs.close();
//	
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//���ļ�
//1.����ͷ�ļ�:#include <fstream>
//2.����������:ifstream ifs; 
//3.���ļ����ж��ļ��Ƿ�򿪳ɹ�:ifs.open("�ļ�·��",�򿪷�ʽ);
//4.������:���ֶ�ȡ��ʽ;
//5.�ر��ļ�:ifs.close();

//void test1()
//{
//	ifstream ifs;
//	ifs.open("./test.txt",ios::in);
//	if (!ifs.is_open()) 
// {
//	
//		perror("open file");
//		return;
//	}
//	��һ�ֶ�ȡ����:  //�����ո�ͻ��оͽ�����һ�ζ�ȡ  
//	char buf[1024] = { 0 };
//	while (ifs >> buf) 
//	{
//	
//		cout << buf << endl;
//	}
//
//	�ڶ��ֶ�ȡ����:  //�������н�����һ�ζ�ȡ
//	char buf[1024] = { 0 };
//	while (ifs.getline(buf,1024)) 
//	{
//	
//		cout << buf << endl;;
//	}
//
//	//�����ֶ�ȡ����  //ʹ��ȫ�ֵ�getline����
//	string buf;
//	while (getline(ifs, buf)) 
//	{
//	
//		cout << buf << endl;
//	}
//
//	//�����ֶ�ȡ����  //���Ƽ�
//	char c;  //int?
//	while ((c = ifs.get()) != EOF) 
//	{
//		cout << c;
//	}
//
//	ifs.close();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//������д�ļ�
//�����Ʒ�ʽд�ļ���Ҫ������������ú���write
//����ԭ��Ϊ:ostream& write(const char* buffer,int len)
//bufferָ���ڴ��е�һ�δ洢�ռ䣬lenΪ��д���ֽ���

//class Person
//{
//public:
//	char name[64];  //������д�ַ���ʱ��ò�Ҫ��string
//	int age;
//};
//
//void test1()
//{
//	ofstream ofs("person.txt", ios::out | ios::binary);   //ͨ�����캯��ָ���ļ���·���ͷ�ʽ
//	//ofs.open("person.txt",ios::out|ios::binary);
//	Person p = {"����",33};
//	ofs.write((const char*)&p,sizeof(Person));
//	ofs.close();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//�����ƶ��ļ�
//�����Ʒ�ʽд�ļ���Ҫ������������ú���read
//����ԭ��Ϊ:istream& read(char* buffer,int len)
//bufferָ���ڴ��е�һ�δ洢�ռ䣬lenΪ��д���ֽ���

//class Person
//{
//public:
//	char name[64];  //������д�ַ���ʱ��ò�Ҫ��string
//	int age;
//};
//
//void test1()
//{
//	ifstream ifs("person.txt", ios::in | ios::binary);   //ͨ�����캯��ָ���ļ���·���ͷ�ʽ
//	if (!ifs.is_open())
//	{
//		perror("open file");
//		return;
//	}
//	Person p;
//	cout << p.name << endl;
//	cout << p.age << endl;
//	cout << "------------------------------------" << endl;
//	ifs.read((char*)&p, sizeof(Person));
//	ifs.close();
//	cout << p.name << endl;
//	cout << p.age << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}