#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

/***** new��delete *****/
//int main()
//{
//
//	//cout << "hello there\n"<<endl;
//	int* p = new int(10);
//	cout << *p << endl;
//	delete p;
//	int* p1 = new int[10];
//	memset(p1,0,40);
//	cout << *(p1 + 5) << endl;
//	delete[] p1;  //�ͷ�����
//	return 0;
//}


/***** ���� *****/

//void Swap(int &a,int &b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;	
//}
//
//int& test1()
//{
//	int a = 10;
//	return a;
//
//}
//
//int& test2()
//{
//	static int a = 10;
//	return a;
//
//}
//
//void ShowValue(const int& val)
//{
//	cout << val << endl;
//}
//int main()
//{
//	//���õĶ���
//	//int a = 10;
//	//int& b = a;  //��������  //���ñ���Ҫ��ʼ�����ҳ�ʼ���󲻿ɸı�
//	//cout << b << endl;
//
//	//b = 20;  //ͨ��Ӧ�ò����ڴ�
//	//cout << a << endl;
//
//	//���ô���
//	/*int a = 10;
//	int b = 20;
//
//	Swap(a,b);
//	cout << a <<endl<< b << endl;*/
//
//	//��������������ֵ
//	//1.��Ҫ���ؾֲ�����������
//	/*int& ref1 = test1();
//	cout << ref1 << endl;*/
//
//	//2.�����ķ���ֵ������Ϊ��ֵʹ��
//
//	/*int& ref2 = test2();
//	cout << ref2 << endl;
//	test2() = 1000;
//	cout << ref2 << endl;*/
//
//	//���õı�����һ��ָ�볣������ת�������ɱ�����ִ��
//	//int a = 10;
//	//int& b = a;
//	//int* const p = &a;  //p��b�ı�����һ����
//
//	//��������
//	//int a = 10;
//	//int& ref = 10;  //���ñ���Ҫ��һ��Ϸ��ĵ�ַ�ռ�
//	//const int& ref = 10;  //����const֮�󣬱������Ὣ�����޸�Ϊ:int temp = 10; const int& ref = temp;
//	//ref = 20;  //refֻ��
//
//	//�������������β�,��ֹ�����
//	//int a = 10;
//	//ShowValue(a);
//
//	return 0;
//}

/***** ������Ĭ�ϲ��� *****/
//int func(int a = 10, int b = 20, int c = 30);
//int func(int a, int b, int c)
//{
//	return a + b + c;
//}
//int main()
//{
//	int a = func();
//	int b = func(1,2,3);  //���˲�����ʹ����������������ʹ��Ĭ��ֵ
//	cout << a << endl;
//	cout << b << endl;
//
//	//ע������:\
//	1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô��λ�ú���Ĳ�����������Ĭ��ֵ\
//	2.������������ʵ��ֻ����һ����Ĭ�ϲ���
//
//	return 0;
//}

/***** ������ռλ���� *****/
//void Print1(int a,int/*ռλ����*/)
//{
//
//	cout << a << endl;
//}
//void Print2(int a, int = 0)  //ռλ����������Ĭ��ֵ
//{
//
//	cout << a << endl;
//}
//int main()
//{
//	Print1(10,1);
//	Print2(10);
//	return 0;
//}

/***** �������� *****/
//void func1(int& a)
//{
//	cout<<"���ú���func1(int& a)"<<endl;
//}
//void func1(const int& a)
//{
//	cout << "���ú���func1(const int& a)" << endl;
//}
//void func2(int a,int b = 10)
//{
//	cout << "���ú���func2(int a)" << endl;
//}
//void func2(int a)
//{
//	cout << "���ú���func2(int a)" << endl;
//}
//int main()
//{
//	////������Ϊ���ص�����
//	//int a = 10;
//	//const int b = 10;
//	//func1(a);  //���õ�һ��func1
//	//func1(10);  //���õڶ���func1
//	//func1(b);  //���õڶ���func1
//
//	//������������Ĭ�ϲ���
//	//int a = 10;
//	//func2(a);  //��ʱ��������func2�������﷨������ֶ����ԣ��ʻᱨ��
//
//	return 0;
//}

/***** ��Ͷ���:��װ *****/

//#define PI 3.14
//class Circle
//{
//public:
//	double m_r;
//	double CalPerimeter()
//	{
//		return 2 * m_r * PI;
//	}
//};
//
//int main()
//{
//	Circle c1;
//	c1.m_r = 10;
//	cout<<"Բ���ܳ�Ϊ:"<<c1.CalPerimeter()<<endl;
//	return 0;
//}

/*********************************************/
//ѧ����
//class Student
//{
//public:
//	//����:  //��Ա���ԡ���Ա����
//	string Name;
//	int ID;
//
//	//��Ϊ:  //��Ա��������Ա������
//	void Show()
//	{
//		cout << "����:" << Name << endl;
//		cout << "ѧ��:" << ID << endl;
//	}
//	void SetName(string s_name)
//	{
//		Name = s_name;
//	}
//	void SetID(int i)
//	{
//		
//		ID = i;
//	}
//
//};
//
//int main()
//{
//	Student s1;
//	s1.SetName("����");
//	s1.SetID(10);
//	s1.Show();
//
//	return 0;
//}

/*********************************************/
//����Ȩ��
//����Ȩ�ޣ�public����Ա ���ڿɷ���,����Ҳ���Է���
//����Ȩ�ޣ�protected����Ա ���ڿɷ���,���ⲻ���Է��ʣ�������Է��ʸ��������
//˽��Ȩ�ޣ�private����Ա ���ڿɷ���,���ⲻ���Է��ʣ����಻���Է��ʸ��������

//class Person
//{
//public:
//	string Name;
//protected:
//	string Sex;
//private:
//	int Age;
//public:
//	void Set()
//	{
//		Name = "����";
//		Sex = "male";
//		Age = 25;
//	}
//};
//
//int main()
//{
//	Person p1;
//	p1.Name = "����";
//	//p1.Sex = "female";  //���ⲻ�ɷ���
//	//p1.Age = 24;  //���ⲻ�ɷ���
//	return 0;
//}

/*********************************************/
//struct��class������
//struct��Ĭ��Ȩ��Ϊ���У�class��Ĭ��Ȩ��Ϊ˽��

//class C1
//{
//	
//	int a;
//};
//struct C2  //c++�нṹ������԰�������
//{
//
//	int b;
//};
//int main()
//{
//	C1 c1;
//	C2 c2;
//	//c1.a = 10;  //aĬ��Ϊ˽��
//	c2.b = 10;
//	return 0;
//}

/*********************************************/
//��Ա����˽�л���
//1.���Կ��ƶ�д��Ȩ��
//2.����д���Լ�����ݵ���Ч��

//class Person
//{
//private:
//	string Name;
//	string Sex;
//	int Age;
//public:
//	void SetName(string s_Name)
//	{
//	
//		Name = s_Name;
//	}
//	void SetAge(int s_Age)
//	{
//		if ((s_Age<=100) && (s_Age>=0)) {
//		
//			Age = s_Age;
//		}
//		else {
//		
//			cout << "�������ݷǷ�" << endl;
//			Age = 0;
//		}
//	
//	}
//	string GetName()
//	{
//	
//		return Name;
//	}
//	string GetSex()
//	{
//		Sex = "��";
//		return Sex;
//	}
//	int GetAge()
//	{
//		//Age = 28;
//		return Age;
//	}
//};
//
//int main()
//{
//	Person p;
//	p.SetName("��ȫ��");
//	p.SetAge(160);
//	cout << "����:" << p.GetName() << endl;
//	cout << "����:" << p.GetSex() << endl;
//	cout << "����:" << p.GetAge() << endl;
//
//
//	return 0;
//}

/*********************************************/
//��װ����
//1.������

//class Cube
//{
//private:
//	int m_L;
//	int m_W;
//	int m_H;
//
//public:
//	
//	//��ȡ��
//	int GetL()
//	{
//		return m_L;
//	}
//	//��ȡ��
//	int GetW()
//	{
//		return m_W;
//	}
//	//��ȡ��
//	int GetH()
//	{
//		return m_H;
//	}
//	//���ó�
//	void SetL(int l)
//	{
//		m_L = l;
//	}
//	//���ÿ�
//	void SetW(int w)
//	{
//		m_W = w;
//	}
//	//���ø�
//	void SetH(int h)
//	{
//		m_H = h;
//	}
//	//�������������
//	int CalS()
//	{
//		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
//	}
//	//�������������
//	int CalV()
//	{
//		return m_L * m_W * m_H;
//	}
//	//�Ƚ������������Ƿ���ͬ
//	bool isSameByClass(Cube &c)  
//	{
//		if ((m_L == c.GetL()) && (m_W == c.GetW()) && (m_H == c.GetH())) {
//
//			return true;
//		}
//		else {
//
//			return false;
//		}
//		
//	}
//
//};
//
//bool isSame(Cube& c1, Cube& c2)  //ͨ�����ô���  //ȫ�ֺ������Ƚ������������Ƿ���ͬ
//{
//	if ((c1.GetL()==c2.GetL())&& (c1.GetW() == c2.GetW())&& (c1.GetH() == c2.GetH())) {
//	
//		return true;
//	}
//	else {
//	
//		return false;
//	}
//
//}
//
//int main()
//{
//	//ʵ��������c1
//	Cube c1;
//	c1.SetL(10);
//	c1.SetW(20);
//	c1.SetH(30);
//	cout << "���Ϊ:" << c1.CalS() << endl << "���Ϊ:" << c1.CalV() << endl;
//
//	//ʵ��������c2
//	Cube c2;
//	c2.SetL(10);
//	c2.SetW(20);
//	c2.SetH(30);
//
//	bool ret1 = isSame(c1, c2);
//	if (ret1) {
//	
//		cout << "c1��c2���" << endl;
//	}
//	else {
//	
//		cout << "c1��c2�����" << endl;
//	}
//
//	//�޸�c2�ĳ�Ϊ20
//	c2.SetL(20);
//	bool ret2 = c1.isSameByClass(c2);
//	if (ret2) {
//
//		cout << "c1��c2���" << endl;
//	}
//	else {
//
//		cout << "c1��c2�����" << endl;
//	}
//
//
//	return 0;
//}

/*********************************************/
//2.���Բ�Ĺ�ϵ
//�˰���ͨ�����ļ�������ʾ
//#include "point.h"
//#include "circle.h"
//
////�жϵ��Բ�Ĺ�ϵ
//void IsPointInCircle(Circle &c,Point &p)
//{
//	int dis_x = (p.GetX() - c.GetPoint().GetX()) * (p.GetX() - c.GetPoint().GetX());
//	int dis_y = (p.GetY() - c.GetPoint().GetY()) * (p.GetY() - c.GetPoint().GetY());
//	if ((dis_x+dis_y) == (c.GetR())* (c.GetR())) {
//	
//		cout << "����Բ��" << endl;
//	}
//	else if ((dis_x + dis_y) < (c.GetR()) * (c.GetR())) {
//	
//		cout << "����Բ��" << endl;
//	}
//	else {
//	
//		cout << "����Բ��" << endl;
//	}
//}
//
//int main()
//{
//	//ʵ������
//	Point p;
//	p.SetX(10);
//	p.SetY(0);
//
//	//ʵ����Բ
//	Circle c;
//	c.SetR(10);
//	c.SetPoint(0,0);
//
//	//�Ƚϵ��Բ�Ĺ�ϵ
//	IsPointInCircle(c,p);
//
//	return 0;
//}

/*********************************************/
//���캯������������
//���캯�����ڳ�ʼ�����������������������
//����ĳ�ʼ�����������Ǳ�����ǿ��Ҫ��ִ�е�
//�������д������û���ṩ�������������������������ṩ
//�������ṩ�Ĺ��캯�������������ǿ�ʵ��

//���캯��:����(){} \
1.���캯��û�з���ֵ��Ҳ����Ҫдvoid\
2.��������������ͬ\
3.���캯�������в��������Կ�������\
4.���캯�������Ա���Ϊpublic�������޷�ʵ��������\
5.������ڵ��ö���ʱ�Զ����ù��캯���������ֶ����ã���ֻ����һ��

//��������:~����(){} \
1.���캯��û�з���ֵ��Ҳ����Ҫдvoid\
2.������Ϊ����ǰ��~\
3.���캯���������в��������Բ���������\
4.�������������Ա���Ϊpublic�������޷�ʵ��������\
5.������ڶ�������ǰ�Զ��������������������ֶ����ã���ֻ����һ��

//class Person
//{
//public:
//	Person()
//	{
//		cout << "���ù��캯��" << endl;
//	}
//
//	Person(int a)   //���캯����������
//	{
//	
//	}
//
//	~Person()
//	{
//		cout << "������������" << endl;
//	}
//
//};
//
//void test()
//{
//	Person p;
//}
//int main()
//{
//	test();  //test�е�p��������Ȼ�����٣��ʻ�ͬʱ���ù��캯������������
//	Person p1;  
//	system("pause"); //�������е��˴���p1��û�����٣���ֻ���ù��캯��������س�����main����returnǰ�����p1����������
//	return 0;
//}

/*********************************************/
//���캯���ķ���:\
1.��������:�вι�����޲ι���\
2.�����ͷ�:��ͨ����Ϳ�������

//class Person
//{
//private:
//	int Age;
//public:
//	//�޲ι���(Ĭ�Ϲ���)
//	Person()
//	{
//		cout << "�����޲ι��캯��" << endl;
//	}
//
//	//�вι���
//	Person(int a)   //���캯����������
//	{
//		Age = a;
//		cout << "�����вι��캯��" << endl;
//	}
//
//	//�������캯��
//	Person(const Person &p)  //����ֱ��д�� Person p
//	{
//		Age = p.Age;
//		cout << "�����п������캯��" << endl;
//	}
//	~Person()
//	{
//		cout << "������������" << endl;
//	}
//
//	void ShowAge()
//	{
//		cout << Age << endl;
//	}
//
//};

/*********************************************/
//���캯���ĵ��÷�ʽ:���ŷ�����ʾ������ʽת����

//void test1()  //1.���ŷ�
//{
//	Person p1;  //Ĭ�Ϲ��캯������  //����Ĭ�Ϲ��첻Ҫ�����ţ�����ᱻ��������Ϊ�Ǻ������������������ڴ�������
//	Person p2(10);  //�����вι��캯��
//	Person p3(p2);  //���ÿ������캯��
//	p2.ShowAge();
//	p3.ShowAge();
//}
//
//void test2()  //2.��ʾ��
//{
//	Person p1 = Person();  //Ĭ�Ϲ��캯������
//	Person p2 = Person(10);  //�����вι��캯��  
//	Person p3 = Person(p2);  //���ÿ������캯��
//
//	Person(10);  //Person(10)Ϊ�������󣬵�ǰ��ִ�н�����ϵͳ������������������
//	cout << "��֤�����������ʱ��" << endl;
//
//	//��Ҫ���ÿ������캯������ʼ����������
//	//Person(p3);  //����������Ϊ���д���Ϊ: Person p3;��ʱ���֮ǰ�����p3�ظ�
//}
//
//void test3()  //3.��ʽת����
//{
//	Person p1 = 10;  //�����вι��캯�� //�������Ὣ���д���ת����:Person p1 = Person(10);
//	Person p2 = p1;  //���ÿ������캯��
//
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}

/*********************************************/
//�������캯���ĵ���ʱ��:\
1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���\
2.ֵ���ݵķ�ʽ��������ֵ\
3.��ֵ��ʽ���ؾֲ�����

//class Person
//{
//private:
//	int Age;
//public:
//	Person()
//	{
//	
//		cout<<"�����޲ι���"<<endl;
//	}
//	Person(int a)
//	{
//		Age = a;
//		cout << "�����вι���" << endl;
//	}
//	Person(const Person& p)
//	{
//		Age = p.Age;
//		cout << "���ÿ������캯��" << endl;
//	}
//
//	~Person()
//	{
//		cout << "������������" << endl;
//	}
//
//};
//
//void test1()  //ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//{
//
//	Person p1(10);
//	Person p2(p1);
//}
//
//void DoWork(Person p)
//{
//
//}
//void test2()  //ֵ���ݵķ�ʽ��������ֵ
//{
//	Person p1;  //����Ĭ�Ϲ��캯��
//	DoWork(p1);  
//	//ֵ���ݻ´����ʱ������������DoWork()ʱ�´��һ��Person p����ʱ��p1���������ȼ���Person p = p1��������ʽת����\
//	���ù��캯���Ĺ��򣬿�֪��ʱ����ÿ������캯��
//}
//
//Person DoWork2()
//{
//	Person p1;   //����Ĭ�Ϲ��캯��
//	cout << &p1 << endl;
//	return p1;
//}
//void test3()  //��ֵ��ʽ���ؾֲ�����
//{
//	Person p = DoWork2();  
//	//��ֵ��ʽ���ؾֲ�����ʱ��DoWork�������ص���һ�������Ķ��������DoWork�����д�����p1,������ϵֵ���ݽ���˼��
//	cout << &p << endl;
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}

/*********************************************/
//���캯�����ù���\
1.Ĭ������£�c++�ı��������ٻ��һ������������������ֱ���Ĭ�Ϲ��캯����Ĭ������������Ĭ�Ͽ������캯��������ǰ����Ϊ��ʵ��\
�������캯��Ϊֵ����\
2.����û������й��캯����c++�����������ṩĬ�Ϲ��캯�������ǻ��ṩ�������캯��\
3.����û������˿������캯����c++�����ṩ�κι��캯��

//class Person
//{
//public:
//	int Age;
//public:
//	Person()
//	{
//		cout << "����Ĭ�Ϲ��캯��" << endl;
//	}
//	Person(int a)
//	{
//		Age = a;
//		cout << "�����вι��캯��" << endl;
//	}
//	Person(const Person &p)
//	{
//		Age = p.Age;
//		cout << "���ÿ������캯��" << endl;
//	}
//	~Person()
//	{
//		cout << "������������" << endl;
//	}
//
//};
//
////1.Ĭ������£�c++�ı��������ٻ��һ������������������ֱ���Ĭ�Ϲ��캯����Ĭ������������Ĭ�Ͽ������캯��������ǰ����Ϊ��ʵ��\
//�������캯��Ϊֵ����
//void test1()  //ע�͵��������캯������
//{
//
//	Person p1;
//	p1.Age = 18;
//	Person p2(p1);
//	cout << "p2������Ϊ:" << p2.Age << endl;
//}
//
////����û������й��캯����c++�����������ṩĬ�Ϲ��캯�������ǻ��ṩ�������캯��
//void test2()  //ע�͵�Ĭ�Ϲ��캯������
//{
//
//	Person p1;
//	Person p2(18);
//	Person p3(p2);
//	cout << "p3������Ϊ:" << p3.Age << endl;
//}
//
////����û������˿������캯����c++�����ṩ�κι��캯��
//void test3()  //ע�͵�Ĭ�Ϻ��вι��캯������
//{
//
//	Person p1;
//	Person p2(18);
//}
//
//int main()
//{
//
//	//test1();
//	//test2();
//	//test3();
//	return 0;
//}

/*********************************************/
//�����ǳ����\
1.ǳ����:�򵥵ĸ�ֵ��������\
2.���:�ڶ�����������ռ䣬���п�������

//ǳ����
//class Person
//{
//public:
//	int age;
//	int* height;
//
//	Person()
//	{
//		cout << "����Ĭ�Ϲ��캯��" << endl;
//	}
//	Person(int a,int h)
//	{
//		age = a;
//		height = new int(h);
//		cout << "�����вι��캯��" << endl;
//	}
//	~Person()
//	{
//		if (height != NULL) {
//			
//			delete height;
//			height = NULL;
//		}
//		cout << "������������" << endl;
//	}
//
//};
//
//void test1()
//{
//	Person p1(18,160);
//	Person p2(p1);  //ͨ���������ṩ�Ŀ������캯������ǳ����
//	//Person�е�heightָ�����ǳ������p1��p2�ֱ���������������ᵼ�¶�ͬһ���ַ�ռ�����ظ��ͷ�
//	cout << "p1������Ϊ:" << p1.age<<"    "<< "���Ϊ:" << *p1.height << endl; 
//	cout << "p1������Ϊ:" << p2.age << "    " << "���Ϊ:" << *p2.height << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//���
//���������Ҫ�ڶ������п��٣�Ӧ�Լ��ṩ�������캯������ֹǳ��������������
//class Person
//{
//public:
//	int age;
//	int* height;
//
//	Person()
//	{
//		cout << "����Ĭ�Ϲ��캯��" << endl;
//	}
//	Person(int a, int h)
//	{
//		age = a;
//		height = new int(h);
//		cout << "�����вι��캯��" << endl;
//	}
//	Person(const Person& p)
//	{
//		age = p.age;
//		height = new int(*p.height);  //�������ֹͬһ���ַ�ռ䱻�ظ��ͷ�
//		cout << "���ÿ������캯��" << endl;
//	}
//	~Person()
//	{
//		if (height != NULL) {
//
//			delete height;
//			height = NULL;
//		}
//		cout << "������������" << endl;
//	}
//
//};
//
//void test1()
//{
//	Person p1(18, 160);
//	Person p2(p1); 
//	cout << "p1������Ϊ:" << p1.age << "    " << "���Ϊ:" << *p1.height << endl;
//	cout << "p1������Ϊ:" << p2.age << "    " << "���Ϊ:" << *p2.height << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//��ʼ���б�
//�﷨:���캯��():����1(ֵ1),����2(ֵ2)...{}

//class Person
//{
//public:
//	int a;
//	int b;
//	int c;
//
//	Person() :a(1), b(2), c(3)  //��ʼ���б�
//	{
//		
//	}
//	Person(int a,int b,int c) :a(a), b(b), c(c)  //��ʼ���б�
//	{
//
//	}
//
//};
//
//void test1()
//{
//	Person p1;
//	Person p2(4, 5, 6);
//	cout << "a:" << p1.a << endl << "b:" << p1.b << endl << "c:" << p1.c << endl;
//	cout << "a:" << p2.a << endl << "b:" << p2.b << endl << "c:" << p2.c << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//�������Ϊ���Ա
//����������Ϊ����ĳ�Ա������ʱ�ȹ���������ٹ�������
//����������Ϊ����ĳ�Ա������ʱ���ͷ��������ͷ������
//class A
//{
//public:
//	A()
//	{
//		cout << "����A�Ĺ��캯��" << endl;
//	}
//
//	~A()
//	{
//		cout << "����A����������" << endl;
//	}
//};
//
//class B
//{
//public:
//	A a;
//	B()
//	{
//		cout << "����B�Ĺ��캯��" << endl;
//	}
//
//	~B()
//	{
//		cout << "����B����������" << endl;
//	}
//	
//};
//
//void test1()
//{
//	B b;
//}
//int main()
//{
//
//	test1();
//}