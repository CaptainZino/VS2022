#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

//��̬��Ա
/*��̬��Ա��Ϊ��̬��Ա�����;�̬��Ա����:
��̬��Ա����:
1.���ж�����һ������
2.�ڱ���׶η����ڴ�
3.���������������ʼ��
��̬��Ա����:
1.���ж�����ͬһ������
2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����*/

//��̬��Ա����
//class Person
//{
//public:
//	static int a;
//private:
//	static int b;
//
//
//};
//int Person::a = 100;  //a�����ڽ���������������������г�ʼ��������a�޷�����
//int Person::b = 200;  //b��Ȼ��private�����ǿ���Ҳ�����ڴ˳�ʼ��
//void test1()
//{
//	Person p1;
//	cout << p1.a << endl;
//
//	Person p2;
//	p2.a = 200;
//	cout << p1.a << endl;  //���ж�����һ������,p2�޸���a��p1��aҲ���޸�
//}
//void test2()
//{
//	//��̬��Ա����������ĳһ���������ж�����һ������
//	//��˾�̬��Ա���������ַ��ʷ�ʽ:
//
//	//1.ͨ��������з���:
//	Person p;
//	cout << p.a << endl;
//	//2.ͨ���������з���(�Ǿ�̬��Ա��������):
//	cout << Person::a << endl;
//
//	//��̬��Ա����Ҳ�з���Ȩ�ޣ�bΪprivate�����ɷ���
//	//cout << Person::b << endl;  //�Ƿ�
//
//
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//��̬��Ա����

//class Person
//{
//public:
//	static int a;
//	int b;
//	static void func1()
//	{
//		a = 200;
//		//b = 200;  //��̬��Ա�������ܷ��ʷǾ�̬��Ա����
//		//ԭ��:���ھ�̬��Ա����Ϊ���ж��������Ǿ�̬��Ա�������������ж�����ģ����Ե�ͨ���������þ�̬��Ա�����޸ķǾ�̬��Ա����ʱ��\
//		��������ȷӦ���޸���һ���Ǿ�̬��Ա������Ҳ�������Ϊ:��̬��Ա������ʹ���ڲ���������������Ҳ���Ե��ã������������������ǲ��ܷ�\
//		�ʷǾ�̬��Ա������
//		func2();  //���ڿɷ���˽�о�̬��Ա����
//		cout << "���þ�̬��Ա����func" << endl;
//	}
//private:
//	static void func2()
//	{
//		cout << "����˽�о�̬��Ա����func" << endl;
//	}
//
//};
//int Person::a = 100;
//void test1()
//{
//	//��̬��Ա�����ķ��ʷ�ʽ:
//	//1.ͨ��������з���:
//	Person p;
//	p.func1();
//	//2.ͨ���������з���:
//	Person::func1();
//
//	//�����޷�����˽�о�̬��Ա����
//	//Person::func2();
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

/*******************************************/

//��Ա�����ͳ�Ա����ʱ�ֿ��洢��
//��C++����ĳ�Ա�����ͳ�Ա�����ֿ��洢
//ֻ�зǾ�̬��Ա������������Ķ�����

//class Person1
//{
//
//};
//class Person2
//{
//	int a;
//};
//class Person3
//{
//	//int a;
//	static int b;
//};
//int Person3::b = 0;
//class Person4
//{
//	//int a;
//	//static int b;
//	void func() 
//	{
//	
//	}
//};
//class Person5
//{
//	//int a;
//	//static int b;
//	static void func()
//	{
//
//	}
//};
//void test1()
//{
//	Person1 p1;
//	cout << sizeof(p1) << endl;  //����ռ�ÿռ�Ϊ1�ֽ�
//	//C++���������ÿ���ն������һ���ֽڵĿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
//	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
//
//	Person2 p2;
//	cout << sizeof(p2) << endl;  //�Ǿ�̬��Ա����������Ķ�����
//
//	Person3 p3;
//	cout << sizeof(p3) << endl;  //��̬��Ա������������Ķ�����
//
//	Person4 p4;
//	cout << sizeof(p4) << endl;  //�Ǿ�̬��Ա������������Ķ�����
//
//	Person5 p5;
//	cout << sizeof(p5) << endl;  //��̬��Ա������������Ķ�����
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

/*******************************************/
//thisָ��
//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//���βκͳ�Ա����ͬ��ʱ������ͨ��thisָ��������
//����ķǾ�̬��Ա�����з��ض�������ʹ��return *this
//class Person
//{
//public:
//	int age;
//	Person(int age)
//	{
//		this->age = age;  //���βκͳ�Ա����ͬ��ʱ������ͨ��thisָ��������  //thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//	}
//
//	Person& AddAge(Person &p)  //���õķ�ʽ���з��أ����ܷ���Person�����򷵻ص���һ������ֵ
//	{
//		this->age += p.age;
//		return *this;  //thisָ��Person�Ķ���  //����ķǾ�̬��Ա�����з��ض�����
//	}
//};
//
//void test1()
//{
//	Person p(18);  //�����вι��캯��
//	cout << p.age << endl;
//}
//void test2()
//{
//	Person p1(10);
//	Person p2(10);
//	p2.AddAge(p1).AddAge(p1).AddAge(p1);  //��ʽ���˼�룬ͬcout
//	cout << "p2������Ϊ:" << p2.age << endl;
//
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

/*******************************************/
//��ָ����ʳ�Ա����

//class Person
//{
//public:
//	int age;
//	void ShowClassName()
//	{
//		cout << "this is Person class" << endl;
//	}
//	void ShowPersonAge()
//	{
//		//�п�thisָ�룬��ֹͨ����ָ�����ʱ����
//		if (this == NULL) {
//			
//			return;
//		}
//		cout << "age = " << this->age <<endl;
//	}
//};
//
//void test1()
//{
//	Person* p = NULL;
//	p->ShowClassName();  //�Ϸ�����
//	p->ShowPersonAge();  //�Ƿ�����:����������͵���ShowPersonAge()ʱ�������this�Ǹ���ָ��,Ӧ��thisָ�����п�
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

/*******************************************/
//const�������Ա
//��Ա������const���γ�Ϊ������:
//1.�������������޸ĳ�Ա����
//2.��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�
//��������ǰ��const��Ϊ������:
//������ֻ�ܵ��ó�����

//class Person
//{
//public:
//	int a;
//	mutable int b;
//	void ShowPerson() const  //constʵ����������thisָ��
//	{
//		//a = 100;  //�������������޸ĳ�Ա����
//		//aʵ���ϱ�thisָ�����Σ���thisָ��ʵ������һ��ָ�볣��(ע������ָ�볣���ͳ���ָ��)����ָ�򲻿��޸�,��this��const���κ���ָ�������Ҳ�������޸�
//		b = 100;  //��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�
//	}
//	void func()
//	{
//		a = 100;
//	}
//
//};
//
//void test1()
//{
//	Person p;
//	p.ShowPerson();
//}
//
//void test2()
//{
//	const Person p;  //������
//	//p.a = 100;  //�������²����޸�
//	p.b = 200;  //b��mutable���Σ���������Ҳ���޸�
//
//	p.ShowPerson();
//	//p.func();  //������ֻ�ܵ��ó�����,��Ϊ�ǲ���ͨ��������p�޸�a�ģ�������Ե�����ͨ����,�����ͨ�������������ͨ������Ӹĵ�a��ֵ
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

/*******************************************/
//��Ԫ��
//��Ԫ��Ŀ������һ���������������һ�����е�˽�г�Ա
//��Ԫ�Ĺؼ���Ϊ:friend
//��Ԫ������ʵ��:
//1.ȫ�ֺ�������Ԫ
//2.������Ԫ
//��Ա��������Ԫ

////ȫ�ֺ�������Ԫ
//class Building
//{
//	//����GoodFried����Ϊ��Ԫ�࣬���Է���˽�г�Ա
//	friend void GoodFriend(Building& building);
//public:
//	string SittingRoom;
//private:
//	string BedRoom;
//public:
//	Building()
//	{
//		SittingRoom = "����";
//		BedRoom = "����";
//	}
//
//};
//
//void GoodFriend(Building& building)
//{
//	cout << building.SittingRoom << endl;
//	cout << building.BedRoom << endl;  //������GoodFriend����Ϊ��Ԫ�������޷�����˽������
//}
//
//void test1()
//{
//	Building building;
//	GoodFriend(building);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//������Ԫ
//class Building;  //Building������
//
//class GoodFriend
//{
//public:
//	Building* building;  //�ڶ�������ռ��Building�����ά��
//	GoodFriend(Building& building);
//	void Visit();
//	~GoodFriend();
//};
//
//class Building
//{
//	//����GoodFriendΪ��Ԫ��
//	friend class GoodFriend;
//public:
//	string SittingRoom;
//private:
//	string BedRoom;
//public:
//	Building();
//
//};
//
////GoodFriend�๹�캯��
//GoodFriend::GoodFriend(Building& building)
//{
//	//�������������
//	this->building = new Building;  //�ڶ���ʵ����Building���󣬵���Building���캯�����г�ʼ��
//	(this->building)->SittingRoom = building.SittingRoom;
//	(this->building)->BedRoom = building.BedRoom;
//}
//
//void GoodFriend::Visit()
//{
//	cout << building->SittingRoom << endl;
//	cout << building->BedRoom<< endl;
//}
////GoodFriend����������
//GoodFriend::~GoodFriend()
//{
//	delete building;
//}
//
////Building��Ĭ�Ϲ��캯��
//Building::Building()
//{
//	SittingRoom = "����";
//	BedRoom = "����";
//}
//
//void test1()
//{
//	Building building;
//	GoodFriend goodfriend(building);
//	goodfriend.Visit();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}


//��Ա��������Ԫ
//class Building;  //Building������
//
//class GoodFriend
//{
//public:
//	Building* building;  //�ڶ�������ռ��Building�����ά��
//	GoodFriend();
//	void Visit();
//	void Visit1();
//	~GoodFriend();
//};
//
//class Building
//{
//	//����GoodFriend���Ա����Ϊ��Ԫ����
//	friend void GoodFriend::Visit();
//	friend void GoodFriend::Visit1();
//public:
//	string SittingRoom;
//private:
//	string BedRoom;
//public:
//	Building();
//
//};
//
////GoodFriend�๹�캯��
//GoodFriend::GoodFriend()
//{
//	//�������������
//	this->building = new Building;  //�ڶ���ʵ����Building���󣬵���Building���캯�����г�ʼ��
//}
//
//void GoodFriend::Visit()
//{
//	cout << building->SittingRoom << endl;
//	cout << building->BedRoom<< endl;
//}
//void GoodFriend::Visit1()
//{
//	cout << building->SittingRoom << endl;
//	cout << building->BedRoom << endl;
//}
////GoodFriend����������
//GoodFriend::~GoodFriend()
//{
//	delete building;
//}
//
////Building��Ĭ�Ϲ��캯��
//Building::Building()
//{
//	SittingRoom = "����";
//	BedRoom = "����";
//}
//
//void test1()
//{
//	//Building building;
//	GoodFriend goodfriend;
//	goodfriend.Visit();
//	goodfriend.Visit1();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}


/*******************************************/
//���������

//�Ӻ����������
//class Person
//{
//public:
//	int a;
//	int b;
//
//	//Person operator+(Person & person)  //��Ա�������ؼӺ������
//	//{
//	//	Person temp;
//	//	temp.a = this->a + person.a;
//	//	temp.b = this->b + person.b;
//	//	return temp;
//	//}
//};
//
//Person operator+(Person& p1,Person& p2)  //ȫ�ֺ������ؼӺ������
//{
//	Person temp;
//	temp.a = p1.a + p2.a;
//	temp.b = p1.b + p2.b;
//	return temp;
//}
//
//Person operator+(Person& p1, int num)  //ȫ�ֺ������ؼӺ������  //�������������
//{
//	Person temp;
//	temp.a = p1.a + num;
//	temp.b = p1.b + num;
//	return temp;
//}
//
//void test1()
//{
//	Person p1;
//	p1.a = 10;
//	p1.b = 10;
//	Person p2;
//	p2.a = 10;
//	p2.b = 10;
//
//	Person p3;
//	p3 = p1 + p2;  //p3 = p1.operator+(p2);  //p3 = operator+(p1,p2);
//	cout << p3.a << "   " << p3.b << endl;
//}
//
//void test2()
//{
//	Person p1;
//	p1.a = 10;
//	p1.b = 10;
//	
//	//���������Ҳ���Է�����������
//	Person p3;
//	p3 = p1 + 10;
//	cout << p3.a << "   " << p3.b << endl;
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//ע:
//1.�����������ͱ��ʽ��������ǲ��ܸı��
//2.��Ҫ�������������

//int operator+(int a, int b)
//{
//	int c = a - b;
//}
//int main()
//{
//	int a = 10;
//	int b = 5;
//	int c = a + b;
//	cout << c << endl;
//	return 0;
//}

//�������������
//class Person
//{
//	//������������������Ԫ����ʵ������Զ�����������
//	friend ostream& operator<<(ostream& cout, Person& p);
//private:
//	int a;
//	int b;
//public:
//	Person()
//	{
//		this->a = 10;
//		this->b = 20;
//	}
//
//};
//
////���������һ�㲻ʹ�ó�Ա�����������أ���Ϊ�޷�ʵ��cout��<<��࣬p.operator<<(cout)��ʵ��Ϊ:p<<cout
//ostream& operator<<(ostream& cout,Person& p)  //coutȫ��ֻ����һ��������ͨ��ֵ�����ٿ���һ������������Ҫ�����ô���,�˴���cout�Ǹ�����������Ϊ��������
//{
//	cout << p.a << endl;
//	cout << p.b << endl;
//	return cout;  //��������������Ա�cout�����������(��ʽ���)
//}
//void test1()
//{
//	Person p;
//	//����operator<<()ʱ�����������<<��λ�ö�Ӧ��ϵ������cout��<<��ߣ�����cout������operator<<()�ĵ�һ��������pͬ��
//	cout << p << endl;  //operator<<(cout,p);
//	operator<<(cout, p);
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//�������������

//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//private:
//	int MyInt;
//public:
//	MyInteger()
//	{
//		MyInt = 0;
//	}
//	//����ǰ��++�����
//	MyInteger& operator++()
//	{
//		this->MyInt++;  //�ȼ�һ
//		return *this;  //����
//	}
//
//	//���غ���++�����
//	MyInteger operator++(int)  //�����ķ������Ͳ������ֺ������ص�����  //ռλ������������ǰ��++�ͺ���++
//	{
//		MyInteger temp = *this;
//		this->MyInt++;
//
//		return temp;  //���ؼ�֮ǰ��ֵ  //����temp��ֵ�������ã���tempΪ�ֲ����������ܷ���ջ����ַ
//
//	}
//
//};
//
////�������������
//ostream& operator<<(ostream& cout, MyInteger myint)
//{
//	cout << myint.MyInt << endl;
//	return cout;
//}
//void test1()
//{
//	MyInteger myint;
//	cout << ++myint << endl;
//
//	//operator++()Ӧ�������õ�ԭ��:��֤ÿ�ε��������ڶ�myint������в�����������ֵ����cout << myint << endl�Ľ��Ϊ1
//	//cout << ++(++myint) << endl;
//	//cout << myint << endl;
//}
//
//void test2()
//{
//	MyInteger myint;
//	cout << myint++ << endl;
//	cout << myint << endl;
//
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//��ֵ���������
//C++���������ٸ�һ��������ĸ�����
//1.Ĭ�Ϲ��캯��
//2.Ĭ����������
//3.�������캯��
//4.���ظ�ֵ������ĺ���:operator=(),���ڶ����Խ���ֵ����
//ע:�������������ָ�����������ֵ����ʱҲ�������ǳ��������

//class Person
//{
//public:
//	int* age;
//
//	Person(int age)
//	{
//		this->age = new int(age);
//	}
//	~Person()
//	{
//		delete age;
//		age = NULL;
//	}
//
//	//���ظ�ֵ���������ֹǳ���������Ķ����ڴ��ظ��ͷŵ�����
//	Person& operator=(Person& p)
//	{
//		this->age = new int(*p.age);
//		return *this;  //���ض�������
//	}
//
//};
//
//void test1()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	p2 = p1 = p3;
//	cout << "p1������Ϊ:" << *p1.age << endl;
//	cout << "p2������Ϊ:" << *p2.age << endl;
//	cout << "p3������Ϊ:" << *p3.age << endl;
//}
//
//int main()
//{
//	test1();
//
//	return 0;
//}

//��ϵ���������
//���ع�ϵ��������������Զ���Ķ�����бȽ�

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
//	//���ع�ϵ�����
//	bool operator==(Person& p)
//	{
//		if (this->age == p.age) {
//			
//			return true;
//		}
//		else {
//			
//			return false;
//		}
//	}
//
//};
//
//void test1()
//{
//	Person p1("������",30);
//	Person p2("������",35);
//	if (p1 == p2) {
//	
//		cout << "�����Ӻ�������һ����" << endl;
//	}
//	else {
//	
//		cout << "�����Ӻ���������һ����" << endl;
//	}
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//�����������������:()
//�������غ��ʹ�÷�ʽ�ǳ������ĵ��ã���˳�Ϊ�º���
//�º����޹̶�д������Ϊ���

//class MyPrint
//{
//public:
//
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//
//void test1()
//{
//
//	MyPrint print;
//	print("hello there1");
//
//	print.operator()("hello there2");
//
//	//������������
//	MyPrint()("hello there3");
//}
//
//int main()
//{
//	test1();
//	return 0;
//}