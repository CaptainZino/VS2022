#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//STL:Standard Template Library(��׼ģ���)
//STL�ӹ����Ϸ�Ϊ:����(container)���㷨(algorithm)�͵�����(iterator)
//�������㷨֮��ͨ�������������޷�����
//STL�������еĴ��붼������ģ������ߺ���ģ��

//STL�������:�������㷨�����������º�����������(�����)���ռ�������
//����:�������ݽṹ����vector��list��deque��set��map�ȣ������������
//�㷨:���ֳ��õ��㷨����sort��find��copy��for_each��
//������:�������������㷨֮��Ľ��ϼ�
//�º���:��Ϊ���ƺ���������Ϊ�㷨��ĳ�ֲ���
//������:һ�����������������º������ߵ������ӿڵĶ���
//�ռ�������:����ռ�����������

//����:����ʽ�����͹���ʽ����
//����ʽ����:ǿ��ֵ����������ʽ�����е�ÿ��Ԫ�ؾ��й̶���λ��
//����ʽ����:�������ṹ����Ԫ��֮��û���ϸ�������ϵ�˳���ϵ

//�㷨:�ʱ��㷨�ͷ��ʱ��㷨
//�ʱ��㷨:��������л����������Ԫ�ص����ݣ����翽�����滻��ɾ����
//���ʱ��㷨:��������в������������Ԫ�ص����ݣ�������ҡ�������������Ѱ�Ҽ�ֵ��

//������:�ṩһ�ַ�����ʹ֮�ܹ��������ĳ�����������ĸ���Ԫ�أ��������豩¶���������ڲ���ʾ��ʽ��ÿ�����������Լ�ר��\
�ĵ���������������ʹ�÷ǳ�������ָ��(��ʵ��Ϊ��ģ��)
//����������:����������������������ǰ���������˫���������������ʵ�����

//vector�����������
//#include <vector>  //����ͷ�ļ�
//#include <algorithm>  //��׼�㷨ͷ�ļ�
//
//void myPrint(int val)  //�������ݴ�ӡ�ص�����
//{
//	cout << val << endl;
//}
//void test1()
//{
//	vector<int> v1;  //����һ��vector���������Կ�����һ������
//	v1.push_back(10);  //�������в�������
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//	//ͨ�����������������е�����
//	vector<int>::iterator itBegin = v1.begin();  //��ʼ��������ָ�������е�һ��Ԫ�ص�λ��
//	vector<int>::iterator itEnd = v1.end();  //������������ָ�����������һ��Ԫ�ص���һ��λ��
//
//	//������ʽһ
//	/*while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}*/
//
//	//������ʽ��
//	/*for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << endl;
//	}*/
//
//	//������ʽ��:����STL�ṩ�ı����㷨
//	for_each(v1.begin(), v1.end(), myPrint);  //���������㷨
//
//
//}
//
//int main()
//{
//	test1();
//}

//vector����Զ�������
//#include <vector>
//#include <algorithm>
//
//class Person
//{
//public:
//	string name;
//	int age;
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//};
//
//void myPrint(Person p)  //Person���ӡ�ص�����
//{
//	cout << "����:" << p.name << " ����:" << p.age << endl;
//}
//void test1()
//{
//	vector<Person> v;
//	Person p1("a", 18);
//	Person p2("b", 19);
//	Person p3("c", 17);
//	Person p4("d", 18);
//	Person p5("e", 17);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "����:" << (*it).name << " ����:" << (*it).age << endl;
//		cout << "����:" << it->name << " ����:" << it->age << endl;
//	}
//
//	//for_each(v.begin(),v.end(),myPrint);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//vcetor����Զ������͵�ָ��
//#include <vector>
//#include <algorithm>
//
//class Person
//{
//public:
//	string name;
//	int age;
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//};
//
//void myPrint(Person* p)  //Person���ӡ�ص�����
//{
//	cout << "����:" << p->name << " ����:" << p->age << endl;
//}
//void test1()
//{
//	vector<Person*> v;
//	Person p1("a", 18);
//	Person p2("b", 19);
//	Person p3("c", 17);
//	Person p4("d", 18);
//	Person p5("e", 17);
//
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//for_each(v.begin(), v.end(),myPrint);
//
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "����:" << (*it)->name << " ����:" << (*it)->age << endl;
//	}
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//vector������Ƕ������
#include <vector>
#include <algorithm>

void myPrint(vector<int> v)  //�������ݴ�ӡ�ص�����
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
}
void test1()
{
	vector<vector<int>> v;

	vector<int> v1;
	vector<int> v2;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	v2.push_back(60);
	v2.push_back(70);
	v2.push_back(80);
	v2.push_back(90);
	v2.push_back(100);

	v.push_back(v1);
	v.push_back(v2);

	//for_each(v.begin(),v.end(),myPrint);  //�㷨����

	//*it�ȼ���<vector<int>>�е�����
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		for (vector<int>::iterator jt = (*it).begin(); jt != (*it).end(); jt++)
		{
			cout << *jt << endl;
		}
	}

}
int main()
{
	test1();
	return 0;
}