#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//ģ��
//ģ���Ŀ����Ϊ����߸����ԣ������Ͳ�����
//template <typename T>��template <class T>
//template:��������ģ��
//typename:���������ķ�����һ���������ͣ�������class����

//template<typename T>
//void SwapNumber(T& a, T& b)  //�������ݺ���ģ��
//{
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//void test1()
//{
//	int a = 10;
//	int b = 20;
//	SwapNumber(a,b);  //����ģ����÷�ʽ1:�Զ������Ƶ�
//	cout << "a = "<< a << endl << "b = " << b << endl;
//	
//	double f1 = 3.14;
//	double f2 = 6.28;
//	SwapNumber<double>(f1,f2);  //����ģ����÷�ʽ2:��ʾָ������
//	cout << "f1 = " << f1 << endl << "f2 = " << f2 << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//ע������
//template<typename T>
//void SwapNumber(T& a, T& b)  //�������ݺ���ģ��
//{
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//template<typename T>
//void func()
//{
//	cout << "for test" << endl;
//}
//void test1()
//{
//	int a = 10;
//	int b = 30;
//	double f = 3.14;
//	//SwapNumber(a, f);  //1.�Զ������Ƶ�������Ҫ�Ƶ���һ�µ���������T�ſ���ʹ��
//	cout << "a = " << a << endl << "b = " << b << endl;
//
//}
//void test2()
//{
//	//func();  //2.ģ�����Ҫȷ����T���������Ͳſ���ʹ��,��ʱ�޷�ʹ���Զ������Ƶ�
//	func<int>();  //������ʾָ������
//}
//
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}

//ģ�尸��:���������͵������������

//template<typename T>
//void SwapNumber(T& a, T& b)  //�������ݺ���ģ��
//{
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//template<typename T>
//void Sort(T& arr)  //��������ģ��  //����
//{
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		int max = i;
//		for (int j = i + 1; j < sizeof(arr) / sizeof(arr[0]); j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			SwapNumber(arr[max],arr[i]);
//		}
//	}
//
//}
//template<typename T>
//void Print(T& arr)  //�����ӡģ��  //������ʱ,sizeof(arr)Ϊ8,��Ϊ�����������׵�ַ
//{
//	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//void test1()
//{
//	char charArr[] = "ajfshgsj";
//	Sort(charArr);
//	Print(charArr);
//}
//void test2()
//{
//	int intArr[] = {0,2,1,5,6,3,8,2,5,6};
//	Sort(intArr);
//	Print(intArr);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//��ͨ�����뺯��ģ�������
//1.��ͨ��������ʱ���Է����Զ�����ת��(��ʽ����ת��)
//2.����ģ�����ʱ����������Զ������Ƶ������ᷢ���Զ�����ת��
//3.���������ʾָ�����͵ķ�ʽ�����Է����Զ�����ת��

//int Add1(int a, int b)
//{
//	return a + b;
//}
//
//template<typename T>
//int Add2(T a, T b)
//{
//	return a + b;
//}
//template<typename T>
//int Add3(T a, T b)
//{
//	return a + b;
//}
//void test1()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout << Add1(a, c) << endl;   //��ʽ��charת����int��������
//}
//void test2()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	//cout << Add2(a, c) << endl;   //�Զ������Ƶ������ᷢ���Զ�����ת��
//}
//void test3()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout << Add3<int>(a, c) << endl;   //��ʾָ�����͵ķ�ʽ�����Է����Զ�����ת��
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	return 0;
//}

//��ͨ�����ͺ���ģ��ĵ��ù���
//1.�����ͨ�����ͺ���ģ�嶼����ʵ�֣����ȵ�����ͨ����
//2.����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
//3.����ģ��Ҳ��������
//4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
//����ṩ�˺���ģ����þͲ�Ҫ���ṩ��ͨ�������������������

//void Print(int a ,int b)
//{
//	cout << "������ͨ����" << endl;
//}
//template<typename T>
//void Print(T a ,T b)
//{
//	cout << "���ú���ģ��" << endl;
//}
//template<typename T>
//void Print(T a , T b , T c)
//{
//	cout << "�������غ���ģ��" << endl;
//}
//void test1()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	char c1 = 'c';
//	char c2 = 'd';
//	Print(a,b);  //���ȵ�����ͨ����  //����ͨ����ֻ����δʵ�֣�����ᱨ�����������ȥ������ģ��
//	Print<>(a, b);  //ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
//	Print(a, b ,c);  //���غ���ģ��
//	Print(c1, c2);  //����ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
//}
//int main()
//{
//	test1();
//	return 0;
//}

//ʹ��ģ��ʱ����Щ�ض�������������Ҫͨ��ĳЩ���廯�ķ�ʽ������ʵ��
//class Person
//{
//public:
//	string name;
//	int age;
//	Person(string name,int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//};
//template<typename T>
//bool Compare(T& a ,T& b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
////���þ��廯Person�汾����ʵ�֣����廯�汾���ȵ���
//template<> bool Compare(Person& p1, Person& p2)
//{
//	if ((p1.name == p2.name)&&(p1.age == p2.age))
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//void test1()
//{
//	int a = 10;
//	int b = 20;
//	bool ret = Compare(a, b);
//	if (ret)
//	{
//		cout << "a==b" << endl;
//	}
//	else
//	{
//		cout << "a!=b" << endl;
//	}
//}
//void test2()
//{
//	Person p1("Sean",30);
//	Person p2("Sean",30);
//	bool ret = Compare(p1,p2);
//	if (ret)
//	{
//		cout << "p1==p2" << endl;
//	}
//	else
//	{
//		cout << "p1!=p2" << endl;
//	}
//}
//
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}

//��ģ��
//template<typename NameType ,typename AgeType>
//class Person
//{
//public:
//	NameType name;
//	AgeType age;
//
//	Person(NameType name, AgeType age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	void ShowPerson()
//	{
//		cout << "����:" << this->name << " ����:" << this->age << endl;
//	}
//};
//
//void test1()
//{
//	Person<string, int> p1("Pacino",60);
//	p1.ShowPerson();
//}
//int main()
//{
//	test1();
//	return 0;
//}

//��ģ��ͺ���ģ�������
//1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//2.��ģ����ģ������б��п�����Ĭ�ϲ���
//template<typename NameType, typename AgeType = int>
//class Person
//{
//public:
//	NameType name;
//	AgeType age;
//
//	Person(NameType name, AgeType age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	void ShowPerson()
//	{
//		cout << "����:" << this->name << " ����:" << this->age << endl;
//	}
//};
//
//void test1()
//{
//	string name = "Pacino";
//	int age = 60;
//	//Person p1(name, age);  //�Ƿ�:��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//	Person<string, int> p1(name, age);  //������ʾָ������
//	Person<string> p2("DeNiro", 60);  //��ģ����ģ������б��п�����Ĭ�ϲ���
//	p2.ShowPerson();
//}
//int main()
//{
//	test1();
//	return 0;
//}

//��ģ���г�Ա��������ʱ��
//��ģ���еĳ�Ա�����ڵ���ʱ��ȥ����

//class Person1
//{
//public:
//	void ShowPerson1()
//	{
//		cout << "Person1 show" << endl;
//	}
//};
//class Person2
//{
//public:
//	void ShowPerson2()
//	{
//		cout << "Person2 show" << endl;
//	}
//};
//
//template<typename T>
//class Myclass
//{
//public:
//	T obj;
//
//	//��ģ���еĳ�Ա�����ڵ���ʱ��ȥ��������ΪT������ֻ���ڵ���ʱ�ſ���ȷ��
//	void func1()
//	{
//		obj.ShowPerson1();
//	}
//	void func2()
//	{
//		obj.ShowPerson2();
//	}
//};
//
//void test1()
//{
//	Myclass<Person1> p1;
//	p1.func1();
//	//p1.func2();  //�Ƿ�����
//}
//int main()
//{
//	test1();
//	return 0;
//}class Person1
//{
//public:
//	void ShowPerson1()
//	{
//		cout << "Person1 show" << endl;
//	}
//};
//class Person2
//{
//public:
//	void ShowPerson2()
//	{
//		cout << "Person2 show" << endl;
//	}
//};
//
//template<typename T>
//class Myclass
//{
//public:
//	T obj;
//
//	//��ģ���еĳ�Ա�����ڵ���ʱ��ȥ��������ΪT������ֻ���ڵ���ʱ�ſ���ȷ��
//	void func1()
//	{
//		obj.ShowPerson1();
//	}
//	void func2()
//	{
//		obj.ShowPerson2();
//	}
//};
//
//void test1()
//{
//	Myclass<Person1> p1;
//	p1.func1();
//	//p1.func2();  //�Ƿ�����
//}
//int main()
//{
//	test1();
//	return 0;
//}

//��ģ������������Ĳ���
//��ģ��ʵ�����Ķ����������εķ�ʽһ��������:
//1.ָ�����������:�ֽ���ʾ�������������
//2.����ģ�廯:�������еĲ�����Ϊģ����д���
//3.������ģ�廯:�������������ģ�廯���д���

//template<typename NameType, typename AgeType>
//class Person
//{
//public:
//	NameType name;
//	AgeType age;
//
//	Person(NameType name, AgeType age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	void ShowPerson()
//	{
//		cout << "����:" << this->name << " ����:" << this->age << endl;
//	}
//};
////ָ����������(���)
//void PrintPerson1(Person<string, int>& p)
//{
//	p.ShowPerson();
//}
////����ģ�廯
//template<typename T1,typename T2>
//void PrintPerson2(Person<T1, T2>& p)
//{
//	p.ShowPerson();
//	cout << "T1������Ϊ:" << typeid(T1).name() << endl;  //�鿴�������Ƶ���T1����
//	cout << "T2������Ϊ:" << typeid(T2).name() << endl;
//}
////��������ģ�廯
//template<typename T>
//void PrintPerson3(T & p)
//{
//	p.ShowPerson();
//	cout << "T������Ϊ:" << typeid(T).name() << endl;
//}
//
//void test1()
//{
//	
//	Person<string, int> p("Pacino", 60);
//	PrintPerson1(p);
//}
//void test2()
//{
//
//	Person<string, int> p("DeNiro", 60);
//	PrintPerson2(p);
//}
//void test3()
//{
//
//	Person<string, int> p("Brando", 80);
//	PrintPerson3(p);
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	return 0;
//}

//��ģ����̳�
//������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ����������T������
//�����ָ�����������޷�����������ڴ�
//��������ָ����������T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ��

//template<typename T>
//class Base
//{
//public:
//	T m;
//};
//
//class Son1 :public Base<int>  //����ָ��������T�����ͣ�������ܼ̳�
//{
//
//};
//
//template<typename T1,typename T2>
//class Son2 :public Base<T1>  //��������ָ����������T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ��
//{
//public:
//	T2 obj;
//	Son2()
//	{
//		cout << "T1������Ϊ:" << typeid(T1).name() << endl;
//		cout << "T2������Ϊ:" << typeid(T2).name() << endl;
//	}
//};
//
//void test1()
//{
//	Son1 s1;
//}
//
//void test2()
//{
//	Son2<int,char> s2;
//}
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}

//��ģ���Ա��������ʵ��

//template<typename T1,typename T2>
//class Person
//{
//public:
//	T1 name;
//	T2 age;
//	Person(T1 name, T2 age);
//	void ShowPerson();
//};
//
////Person�๹�캯������ʵ��
//template<typename T1,typename T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	this->name = name;
//	this->age = age;
//}
//
////ShowPerson()����ʵ��
//template<typename T1, typename T2>
//void Person<T1, T2>::ShowPerson()
//{
//	cout << "����:" << this->name << " ����:" << this->age << endl;
//}
//
//void test1()
//{
//	Person<string, int> p("Pacino",60);
//	p.ShowPerson();
//}
//int main()
//{
//	test1();
//
//	return 0;
//}

//��ģ����ļ���д
//��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ��ᵼ�·��ļ���дʱ���Ӳ���
//�����ʽ:
//1.ֱ�Ӱ���.cpp�ļ�
//2.��������ʵ��д��ͬһ���ļ��У������ĺ�׺��Ϊ.hpp(.hppΪԼ�������ƣ�����ǿ��)

//#include "person.cpp"  //��ģ���еĳɺ����ڱ���׶β��ᱻ�������������.cpp�ļ�(�˷�������)
//#include "person.hpp"  //��������ʵ��д��ͬһ���ļ���
//
//void test1()
//{
//	Person<string, int> p("Pacino",60);
//	p.ShowPerson();
//}
//int main()
//{
//	test1();
//
//	return 0;
//}

//��ģ������Ԫ
//1.ȫ�ֺ�������ʵ�֣�ֱ��������������Ԫ����(����ʹ��)
//2.ȫ�ֺ�������ʵ�֣���Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���

////�ñ�����֪��Person��Ĵ���
//template<typename T1,typename T2>
//class Person;
//
////ȫ�ֺ�������ʵ��
//template<typename T1, typename T2>
//void PrintPerson2(Person<T1, T2> p)
//{
//	cout << "����ʵ��:" << endl;
//	cout << "����:" << p.name << " ����:" << p.age << endl;
//}
//
//template<typename NameType, typename AgeType>
//class Person
//{
//	//ȫ�ֺ�������ʵ��
//	template<typename T1,typename T2>
//	friend void PrintPerson1(Person<T1,T2> p)
//	{
//		cout << "����:" << p.name << " ����:" << p.age << endl;
//	}
//
//	template<typename T1, typename T2>
//	friend void PrintPerson2<>(Person<T1, T2> p);  //�ӿ�ģ������б�<>,�ú������������ͺͶ�������;�Ϊ����ģ��
//
//private:
//	NameType name;
//	AgeType age;
//
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//};
//
//void test1()
//{
//	Person<string, int> p("Pacino",60);
//	PrintPerson1(p);
//}
//
//void test2()
//{
//	Person<string, int> p("DeNiro", 60);
//	PrintPerson2(p);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//��ģ�尸��

//#include "MyArry.hpp"
//
//class Person
//{
//public:
//	string name;
//	int age;
//	Person()
//	{
//	  //�ṩĬ�Ϲ��캯�����ڴ���MyArry�࣬��TΪPerson��ʱ�����ڶ�������Person��Ŀռ䣬��ʱ���ø�Ĭ�Ϲ��캯��
//	}
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//};
//
//void test1()
//{
//	MyArry<int> p1(5);
//	MyArry<int> p2(p1);
//	MyArry<int> p3(100);
//	p3 = p1;
//}
//void test2()
//{
//	MyArry<int> p1(5);
//	for (int i = 0; i < 5; i++)
//	{
//		p1.AddBack(i);
//	}
//	p1.PrintArry();
//	cout << "p1������С:" <<p1.getCapacity() << endl;
//	cout << "p1 size��С:" <<p1.getSize() << endl;
//
//	MyArry<int> p2(p1);
//	p2.DeleteBack();
//	p2.PrintArry();
//	cout << "p2������С:" << p2.getCapacity() << endl;
//	cout << "p2 size��С:" << p2.getSize() << endl;
//}
//
//
//void test3()  //�����Զ�������
//{
//	
//	MyArry<Person> p(5);
//
//	Person p1("a", 18);
//	Person p2("b", 19);
//	Person p3("c", 19);
//	Person p4("d", 18);
//	Person p5("e", 19);
//
//	p.AddBack(p1);
//	p.AddBack(p2);
//	p.AddBack(p3);
//	p.AddBack(p4);
//	p.AddBack(p5);
//
//	p.PrintPerson();
//
//}
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}