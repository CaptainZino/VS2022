#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

//静态成员
/*静态成员分为静态成员变量和静态成员函数:
静态成员变量:
1.所有对象共享一份数据
2.在编译阶段分配内存
3.类内声明，类外初始化
静态成员函数:
1.所有对象共享同一个函数
2.静态成员函数只能访问静态成员变量*/

//静态成员变量
//class Person
//{
//public:
//	static int a;
//private:
//	static int b;
//
//
//};
//int Person::a = 100;  //a在类内进行声明，必须在内外进行初始化，否则a无法访问
//int Person::b = 200;  //b虽然是private，但是可以也必须在此初始化
//void test1()
//{
//	Person p1;
//	cout << p1.a << endl;
//
//	Person p2;
//	p2.a = 200;
//	cout << p1.a << endl;  //所有对象共享一份数据,p2修改了a，p1的a也会修改
//}
//void test2()
//{
//	//静态成员变量不属于某一个对象，所有对象共享一份数据
//	//因此静态成员变量有两种访问方式:
//
//	//1.通过对象进行访问:
//	Person p;
//	cout << p.a << endl;
//	//2.通过类名进行访问(非静态成员变量不行):
//	cout << Person::a << endl;
//
//	//静态成员变量也有访问权限，b为private，不可访问
//	//cout << Person::b << endl;  //非法
//
//
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//静态成员函数

//class Person
//{
//public:
//	static int a;
//	int b;
//	static void func1()
//	{
//		a = 200;
//		//b = 200;  //静态成员函数不能访问非静态成员变量
//		//原因:由于静态成员函数为所有对象共享，而非静态成员变量并不是所有对象共享的，所以当通过类名调用静态成员函数修改非静态成员变量时，\
//		并不能明确应该修改哪一个非静态成员变量。也可以理解为:静态成员函数即使是在不创建对象的情况下也可以调用，但是若不创建对象，是不能访\
//		问非静态成员变量的
//		func2();  //类内可访问私有静态成员函数
//		cout << "调用静态成员函数func" << endl;
//	}
//private:
//	static void func2()
//	{
//		cout << "调用私有静态成员函数func" << endl;
//	}
//
//};
//int Person::a = 100;
//void test1()
//{
//	//静态成员函数的访问方式:
//	//1.通过对象进行访问:
//	Person p;
//	p.func1();
//	//2.通过类名进行访问:
//	Person::func1();
//
//	//类外无法访问私有静态成员函数
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

//成员变量和成员函数时分开存储的
//在C++中类的成员变量和成员函数分开存储
//只有非静态成员变量才属于类的对象上

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
//	cout << sizeof(p1) << endl;  //空类占用空间为1字节
//	//C++编译器会给每个空对象分配一个字节的空间，是为了区分空对象占内存的位置
//	//每个空对象也应该有一个独一无二的内存地址
//
//	Person2 p2;
//	cout << sizeof(p2) << endl;  //非静态成员变量属于类的对象上
//
//	Person3 p3;
//	cout << sizeof(p3) << endl;  //静态成员变量不属于类的对象上
//
//	Person4 p4;
//	cout << sizeof(p4) << endl;  //非静态成员函数不属于类的对象上
//
//	Person5 p5;
//	cout << sizeof(p5) << endl;  //静态成员函数不属于类的对象上
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

/*******************************************/
//this指针
//this指针指向被调用的成员函数所属的对象
//当形参和成员变量同名时，可以通过this指针来区分
//在类的非静态成员函数中返回对象本身，可使用return *this
//class Person
//{
//public:
//	int age;
//	Person(int age)
//	{
//		this->age = age;  //当形参和成员变量同名时，可以通过this指针来区分  //this指针指向被调用的成员函数所属的对象
//	}
//
//	Person& AddAge(Person &p)  //引用的方式进行返回，不能返回Person，否则返回的是一个拷贝值
//	{
//		this->age += p.age;
//		return *this;  //this指向Person的对象  //在类的非静态成员函数中返回对象本身
//	}
//};
//
//void test1()
//{
//	Person p(18);  //调用有参构造函数
//	cout << p.age << endl;
//}
//void test2()
//{
//	Person p1(10);
//	Person p2(10);
//	p2.AddAge(p1).AddAge(p1).AddAge(p1);  //链式编程思想，同cout
//	cout << "p2的年龄为:" << p2.age << endl;
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
//空指针访问成员函数

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
//		//判空this指针，防止通过空指针调用时出错
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
//	p->ShowClassName();  //合法访问
//	p->ShowPersonAge();  //非法访问:不创建对象就调用ShowPersonAge()时，里面的this是个空指针,应对this指针作判空
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

/*******************************************/
//const修饰类成员
//成员函数后被const修饰称为常函数:
//1.常函数不可以修改成员属性
//2.成员属性声明时加关键字mutable后，在常函数中依然可以修改
//声明对象前加const称为常对象:
//常对象只能调用常函数

//class Person
//{
//public:
//	int a;
//	mutable int b;
//	void ShowPerson() const  //const实际用于修饰this指针
//	{
//		//a = 100;  //常函数不可以修改成员属性
//		//a实际上被this指针修饰，而this指针实际上是一个指针常量(注意区分指针常量和常量指针)，其指向不可修改,当this被const修饰后，其指向的内容也将不可修改
//		b = 100;  //成员属性声明时加关键字mutable后，在常函数中依然可以修改
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
//	const Person p;  //常对象
//	//p.a = 100;  //常对象下不可修改
//	p.b = 200;  //b被mutable修饰，常对象下也可修改
//
//	p.ShowPerson();
//	//p.func();  //常对象只能调用常函数,因为是不能通过常对象p修改a的，如果可以调用普通函数,则可以通过常对象调用普通函数间接改掉a的值
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

/*******************************************/
//友元：
//友元的目的是让一个函数或者类访问一个类中的私有成员
//友元的关键字为:friend
//友元的三种实现:
//1.全局函数作友元
//2.类作友元
//成员函数作友元

////全局函数作友元
//class Building
//{
//	//声明GoodFried函数为友元类，可以访问私有成员
//	friend void GoodFriend(Building& building);
//public:
//	string SittingRoom;
//private:
//	string BedRoom;
//public:
//	Building()
//	{
//		SittingRoom = "客厅";
//		BedRoom = "卧室";
//	}
//
//};
//
//void GoodFriend(Building& building)
//{
//	cout << building.SittingRoom << endl;
//	cout << building.BedRoom << endl;  //不声明GoodFriend函数为友元函数，无法访问私有属性
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

//类作友元
//class Building;  //Building类声明
//
//class GoodFriend
//{
//public:
//	Building* building;  //在堆上申请空间对Building类进行维护
//	GoodFriend(Building& building);
//	void Visit();
//	~GoodFriend();
//};
//
//class Building
//{
//	//声明GoodFriend为友元类
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
////GoodFriend类构造函数
//GoodFriend::GoodFriend(Building& building)
//{
//	//创建建筑物对象
//	this->building = new Building;  //在堆上实例化Building对象，调用Building构造函数进行初始化
//	(this->building)->SittingRoom = building.SittingRoom;
//	(this->building)->BedRoom = building.BedRoom;
//}
//
//void GoodFriend::Visit()
//{
//	cout << building->SittingRoom << endl;
//	cout << building->BedRoom<< endl;
//}
////GoodFriend类析构函数
//GoodFriend::~GoodFriend()
//{
//	delete building;
//}
//
////Building类默认构造函数
//Building::Building()
//{
//	SittingRoom = "客厅";
//	BedRoom = "卧室";
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


//成员函数作友元
//class Building;  //Building类声明
//
//class GoodFriend
//{
//public:
//	Building* building;  //在堆上申请空间对Building类进行维护
//	GoodFriend();
//	void Visit();
//	void Visit1();
//	~GoodFriend();
//};
//
//class Building
//{
//	//声明GoodFriend类成员函数为友元函数
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
////GoodFriend类构造函数
//GoodFriend::GoodFriend()
//{
//	//创建建筑物对象
//	this->building = new Building;  //在堆上实例化Building对象，调用Building构造函数进行初始化
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
////GoodFriend类析构函数
//GoodFriend::~GoodFriend()
//{
//	delete building;
//}
//
////Building类默认构造函数
//Building::Building()
//{
//	SittingRoom = "客厅";
//	BedRoom = "卧室";
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
//运算符重载

//加号运算符重载
//class Person
//{
//public:
//	int a;
//	int b;
//
//	//Person operator+(Person & person)  //成员函数重载加号运算符
//	//{
//	//	Person temp;
//	//	temp.a = this->a + person.a;
//	//	temp.b = this->b + person.b;
//	//	return temp;
//	//}
//};
//
//Person operator+(Person& p1,Person& p2)  //全局函数重载加号运算符
//{
//	Person temp;
//	temp.a = p1.a + p2.a;
//	temp.b = p1.b + p2.b;
//	return temp;
//}
//
//Person operator+(Person& p1, int num)  //全局函数重载加号运算符  //重载运算符重载
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
//	//运算符重载也可以发生函数重载
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

//注:
//1.内置数据类型表达式的运算符是不能改变的
//2.不要滥用运算符重载

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

//左移运算符重载
//class Person
//{
//	//重载左移运算符配合友元可以实现输出自定义数据类型
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
////左移运算符一般不使用成员函数进行重载，因为无法实现cout在<<左侧，p.operator<<(cout)的实现为:p<<cout
//ostream& operator<<(ostream& cout,Person& p)  //cout全局只能有一个，不能通过值传递再拷贝一个出来，必须要用引用传递,此处的cout是个别名，可以为任意名称
//{
//	cout << p.a << endl;
//	cout << p.b << endl;
//	return cout;  //返回输出流对象，以便cout可以连续输出(链式编程)
//}
//void test1()
//{
//	Person p;
//	//调用operator<<()时，会检查参数和<<的位置对应关系，由于cout在<<左边，所以cout必须是operator<<()的第一个参数，p同理
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

//递增运算符重载

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
//	//重载前置++运算符
//	MyInteger& operator++()
//	{
//		this->MyInt++;  //先加一
//		return *this;  //返回
//	}
//
//	//重载后置++运算符
//	MyInteger operator++(int)  //函数的返回类型不是区分函数重载的条件  //占位参数用于区分前置++和后置++
//	{
//		MyInteger temp = *this;
//		this->MyInt++;
//
//		return temp;  //返回加之前的值  //返回temp的值而非引用，因temp为局部变量，不能返回栈区地址
//
//	}
//
//};
//
////重载左移运算符
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
//	//operator++()应返回引用的原因:保证每次递增都是在对myint自身进行操作，若返回值，则cout << myint << endl的结果为1
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

//赋值运算符重载
//C++编译器至少给一个类添加四个函数
//1.默认构造函数
//2.默认析构函数
//3.拷贝构造函数
//4.重载赋值运算符的函数:operator=(),用于对属性进行值拷贝
//注:如果类中有属性指向堆区，作赋值操作时也会出现深浅拷贝问题

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
//	//重载赋值运算符，防止浅拷贝带来的堆区内存重复释放的问题
//	Person& operator=(Person& p)
//	{
//		this->age = new int(*p.age);
//		return *this;  //返回对象自身
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
//	cout << "p1的年龄为:" << *p1.age << endl;
//	cout << "p2的年龄为:" << *p2.age << endl;
//	cout << "p3的年龄为:" << *p3.age << endl;
//}
//
//int main()
//{
//	test1();
//
//	return 0;
//}

//关系运算符重载
//重载关系运算符，让两个自定义的对象进行比较

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
//	//重载关系运算符
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
//	Person p1("王麻子",30);
//	Person p2("赵铁柱",35);
//	if (p1 == p2) {
//	
//		cout << "王麻子和赵铁柱一样大" << endl;
//	}
//	else {
//	
//		cout << "王麻子和赵铁柱不一样大" << endl;
//	}
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//函数调用运算符重载:()
//由于重载后的使用方式非常像函数的调用，因此称为仿函数
//仿函数无固定写法，较为灵活

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
//	//匿名函数对象
//	MyPrint()("hello there3");
//}
//
//int main()
//{
//	test1();
//	return 0;
//}