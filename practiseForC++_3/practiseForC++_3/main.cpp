#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//继承
//好处:减少重复代码
//语法:class 子类(派生类) : 继承方式 父类(基类)

//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "头部信息........." << endl;
//	}
//	void tail()
//	{
//		cout << "尾部信息........." << endl;
//	}
//	void left()
//	{
//		cout << "左侧信息........." << endl;
//	}
//
//};
//
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java信息........." << endl;
//	}
//
//};
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python信息........." << endl;
//	}
//
//};
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++信息........." << endl;
//	}
//
//};
//
//void test1()
//{
//	Java ja;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//继承方式:
//1.公共继承
//2.保护继承
//3.私有继承

//class Father
//{
//public:
//	int f_a;
//protected:
//	int f_b;
//private:
//	int f_c;
//};
//
//class Son1:public Father
//{
//public:
//
//	void func()
//	{
//		f_a = 100;  //公共方式继承，父类中的公共权限成员在子类中依然是公共权限
//		f_b = 100;  //公共方式继承，父类中的保护权限成员在子类中依然是保护权限
//		//f_c = 100;  //父类私有权限成员，子类无论以任何方式继承，均无法访问
//	}
//};
//
//class Son2 :protected Father
//{
//public:
//
//	void func()
//	{
//		f_a = 100;  //保护方式继承，父类中的公共权限成员在子类中是保护权限
//		f_b = 100;  //保护方式继承，父类中的保护权限成员在子类中是保护权限
//		//f_c = 100;  //父类私有权限成员，子类无论以任何方式继承，均无法访问
//	}
//};
//
//class Son3 :private Father
//{
//public:
//
//	void func()
//	{
//		f_a = 100;  //私有方式继承，父类中的公共权限成员在子类中是私有权限
//		f_b = 100;  //私有方式继承，父类中的保护权限成员在子类中是私有权限
//		//f_c = 100;  //父类私有权限成员，子类无论以任何方式继承，均无法访问
//	}
//};
//
//class GrandSon:public Son3
//{
//	void func()
//	{
//		//f_a = 300;  //父类私有
//	}
//};
//void test1()
//{
//	Son1 son1;
//	son1.f_a = 200;
//	//son1.f_b = 200;  //Son1类保护成员
//}
//
//void test2()
//{
//	Son2 son2;
//	//son2.f_a = 200;  //Son2类保护成员
//	//son2.f_b = 200;  //Son2类保护成员
//}
//
//void test3()
//{
//	Son3 son3;
//	//son3.f_a = 200;  //Son2类私有成员
//	//son3.f_b = 200;  //Son2类私有成员
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	return 0;
//}

//继承中的对象模型
//从父类继承过来的成员，哪些属于子类对象中？

//class Base
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};
//
//class son :public Base
//{
//public:
//	int d;
//};
//
//void test1()
//{
//	cout << sizeof(son) << endl;  //16字节  //父类中所有的非静态成员都会被子类继承下去
//	//父类中的私有属性成员是被编译器隐藏了，因此访问不到，但是依然会被继承
//}
//int main()
//{
//	test1();
//	return 0;
//}

//继承中构造和析构顺序
//继承中先调用父类的构造函数再调用子类的构造函数，析构的调用顺序和构造函数相反
//class Base
//{
//public:
//	Base()
//	{
//		cout << "调用父类构造函数" << endl;
//	}
//	~Base()
//	{
//		cout << "调用父类析构函数" << endl;
//	}
//};
//class Son:public Base
//{
//public:
//	Son()
//	{
//		cout << "调用子类构造函数" << endl;
//	}
//	~Son()
//	{
//		cout << "调用子类析构函数" << endl;
//	}
//};
//void test1()
//{
//	Son s;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//继承中同名成员处理
//class Base
//{
//public:
//	int a;
//	Base()
//	{
//		a = 100;
//	}
//	void func()
//	{
//		cout << "父类func" << endl;
//	}
//	void func(int)
//	{
//		cout << "父类带参func" << endl;
//	}
//};
//class Son :public Base
//{
//public:
//	int a;
//	Son()
//	{
//		a = 200;
//	}
//	void func()
//	{
//		cout << "子类func" << endl;
//	}
//};
//void test1()
//{
//	Son s;
//	cout << "子类:"<<s.a << endl;  //父类和子类成员重名，直接访问，访问的是子类的成员
//	cout << "父类:"<<s.Base::a << endl;  //父类和子类成员重名,访问父类成员需要加作用域
//}
//void test2()
//{
//	Son s;
//	s.func();  //调用子类func()
//	s.Base::func();  //调用父类func()
//	//s.func(0);  //非法调用  //如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中的所有同名成员
//	s.Base::func(0);  //合法调用
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//继承中同名静态成员处理
//静态成员出现同名和非静态成员出现同名的处理方式一致

//class Base
//{
//public:
//	static int a;
//	static void func()
//	{
//		cout << "调用父类func" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "调用父类有参func" << endl;
//	}
//};
//int Base::a = 10;
//class Son:public Base
//{
//public:
//	static int a;
//	static void func()
//	{
//		cout << "调用子类func" << endl;
//	}
//};
//int Son::a = 20;
//void test1()
//{
//	Son s;
//	//通过对象访问
//	cout << "子类:"<<s.a << endl;
//	cout << "父类:" << s.Base::a << endl;
//
//	//通过类名访问
//	cout << "子类:" << Son::a << endl;
//	cout << "父类:" << Son::Base::a << endl;  //第一个::代表通过类名的方式访问;第二个::表示访问父类作用域下的成员
//}
//
//void test2()
//{
//	Son s;
//	//通过对象访问
//	s.func();  //调用子类func()
//	s.Base::func();  //调用子类func()
//
//	//通过类名访问
//	Son::func();  //调用子类func()
//	Son::Base::func();  //调用子类func()
//	//Son::func(0);  //非法调用，理由见非静态成员变量同名
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//多继承
//C++允许一个类继承多个类
//多继承中若父类中有同名成员出现，需要加作用域区分
//class Base1
//{
//public:
//	int a;
//	Base1()
//	{
//		a = 10;
//	}
//};
//class Base2
//{
//public:
//	int a;
//	Base2()
//	{
//		a = 20;
//	}
//};
//class Son :public Base1, public Base2
//{
//public:
//	int c;
//	int d;
//	Son()
//	{
//		c = 30;
//		d = 40;
//	}
//};
//void test1()
//{
//	Son s;
//	cout << sizeof(s) << endl;
//	cout << "Base1:" << s.Base1::a << endl;
//	cout << "Base2:" << s.Base2::a << endl;
//
//}
//int main()
//{
//	test1();
//	return 0;
//}

//菱形继承:两个子类同时继承同一个父类，同时又有一个类同时继承了这两个子类
//继承两个子类的那个类会继承两份来自父类的数据

//class Animal
//{
//public:
//	int age;
//};
////通过虚继承解决菱形继承问题
////此时Animal称为虚基类
////Sheep和Ostrich从Animal中继承的实际是一个虚基类表指针(vbptr)，该指针指向一个虚基类表，虚基类表中存放的是到父类的偏移量
//class Sheep :virtual public Animal  //虚继承
//{
//
//};
//class Ostrich :virtual public Animal
//{
//
//};
//class Alpaca:public Sheep,public Ostrich
//{
//
//};
//void test1()
//{
//	Alpaca st;
//	st.Sheep::age = 18;
//	st.Ostrich::age = 28;
//	//菱形继承时，两个父类拥有相同的数据，需要加上作用域进行区分
//	cout << st.Sheep::age << endl;
//	cout << st.Ostrich::age << endl;
//	cout << st.age << endl;  //虚继承后只有一份数据，可以直接通过子类访问，不会出现二义性
//}
//int main()
//{
//	test1();
//	return 0;
//}

