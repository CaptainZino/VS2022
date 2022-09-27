#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

/***** new和delete *****/
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
//	delete[] p1;  //释放数组
//	return 0;
//}


/***** 引用 *****/

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
//	//引用的定义
//	//int a = 10;
//	//int& b = a;  //创建引用  //引用必须要初始化，且初始化后不可改变
//	//cout << b << endl;
//
//	//b = 20;  //通过应用操作内存
//	//cout << a << endl;
//
//	//引用传递
//	/*int a = 10;
//	int b = 20;
//
//	Swap(a,b);
//	cout << a <<endl<< b << endl;*/
//
//	//引用作函数返回值
//	//1.不要返回局部变量的引用
//	/*int& ref1 = test1();
//	cout << ref1 << endl;*/
//
//	//2.函数的返回值可以作为左值使用
//
//	/*int& ref2 = test2();
//	cout << ref2 << endl;
//	test2() = 1000;
//	cout << ref2 << endl;*/
//
//	//引用的本质是一个指针常量，其转化过程由编译器执行
//	//int a = 10;
//	//int& b = a;
//	//int* const p = &a;  //p和b的本质是一样的
//
//	//常量引用
//	//int a = 10;
//	//int& ref = 10;  //引用必须要引一块合法的地址空间
//	//const int& ref = 10;  //加上const之后，编译器会将代码修改为:int temp = 10; const int& ref = temp;
//	//ref = 20;  //ref只读
//
//	//常量引用修饰形参,防止误操作
//	//int a = 10;
//	//ShowValue(a);
//
//	return 0;
//}

/***** 函数的默认参数 *****/
//int func(int a = 10, int b = 20, int c = 30);
//int func(int a, int b, int c)
//{
//	return a + b + c;
//}
//int main()
//{
//	int a = func();
//	int b = func(1,2,3);  //传了参数则使用所传参数，否则使用默认值
//	cout << a << endl;
//	cout << b << endl;
//
//	//注意事项:\
//	1.如果某个位置已经有了默认参数，那么此位置后面的参数都必须有默认值\
//	2.函数的声明和实现只能有一者有默认参数
//
//	return 0;
//}

/***** 函数的占位参数 *****/
//void Print1(int a,int/*占位参数*/)
//{
//
//	cout << a << endl;
//}
//void Print2(int a, int = 0)  //占位参数可以有默认值
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

/***** 函数重载 *****/
//void func1(int& a)
//{
//	cout<<"调用函数func1(int& a)"<<endl;
//}
//void func1(const int& a)
//{
//	cout << "调用函数func1(const int& a)" << endl;
//}
//void func2(int a,int b = 10)
//{
//	cout << "调用函数func2(int a)" << endl;
//}
//void func2(int a)
//{
//	cout << "调用函数func2(int a)" << endl;
//}
//int main()
//{
//	////引用作为重载的条件
//	//int a = 10;
//	//const int b = 10;
//	//func1(a);  //调用第一个func1
//	//func1(10);  //调用第二个func1
//	//func1(b);  //调用第二个func1
//
//	//函数重载碰到默认参数
//	//int a = 10;
//	//func2(a);  //此时调用两个func2都符合语法，会出现二义性，故会报错
//
//	return 0;
//}

/***** 类和对象:封装 *****/

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
//	cout<<"圆的周长为:"<<c1.CalPerimeter()<<endl;
//	return 0;
//}

/*********************************************/
//学生类
//class Student
//{
//public:
//	//属性:  //成员属性、成员变量
//	string Name;
//	int ID;
//
//	//行为:  //成员函数、成员方法、
//	void Show()
//	{
//		cout << "姓名:" << Name << endl;
//		cout << "学号:" << ID << endl;
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
//	s1.SetName("张三");
//	s1.SetID(10);
//	s1.Show();
//
//	return 0;
//}

/*********************************************/
//访问权限
//公共权限：public：成员 类内可访问,类外也可以访问
//保护权限：protected：成员 类内可访问,类外不可以访问，子类可以访问父类的类容
//私有权限：private：成员 类内可访问,类外不可以访问，子类不可以访问父类的内容

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
//		Name = "张三";
//		Sex = "male";
//		Age = 25;
//	}
//};
//
//int main()
//{
//	Person p1;
//	p1.Name = "李四";
//	//p1.Sex = "female";  //类外不可访问
//	//p1.Age = 24;  //类外不可访问
//	return 0;
//}

/*********************************************/
//struct和class的区别：
//struct的默认权限为共有，class的默认权限为私有

//class C1
//{
//	
//	int a;
//};
//struct C2  //c++中结构体里可以包含函数
//{
//
//	int b;
//};
//int main()
//{
//	C1 c1;
//	C2 c2;
//	//c1.a = 10;  //a默认为私有
//	c2.b = 10;
//	return 0;
//}

/*********************************************/
//成员属性私有化：
//1.可以控制读写的权限
//2.对于写可以检测数据的有效性

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
//			cout << "输入数据非法" << endl;
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
//		Sex = "男";
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
//	p.SetName("张全蛋");
//	p.SetAge(160);
//	cout << "姓名:" << p.GetName() << endl;
//	cout << "姓名:" << p.GetSex() << endl;
//	cout << "年龄:" << p.GetAge() << endl;
//
//
//	return 0;
//}

/*********************************************/
//封装案列
//1.立方体

//class Cube
//{
//private:
//	int m_L;
//	int m_W;
//	int m_H;
//
//public:
//	
//	//获取长
//	int GetL()
//	{
//		return m_L;
//	}
//	//获取宽
//	int GetW()
//	{
//		return m_W;
//	}
//	//获取高
//	int GetH()
//	{
//		return m_H;
//	}
//	//设置长
//	void SetL(int l)
//	{
//		m_L = l;
//	}
//	//设置宽
//	void SetW(int w)
//	{
//		m_W = w;
//	}
//	//设置高
//	void SetH(int h)
//	{
//		m_H = h;
//	}
//	//计算立方体面积
//	int CalS()
//	{
//		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
//	}
//	//计算立方体体积
//	int CalV()
//	{
//		return m_L * m_W * m_H;
//	}
//	//比较两个立方体是否相同
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
//bool isSame(Cube& c1, Cube& c2)  //通过引用传递  //全局函数，比较两个立方体是否相同
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
//	//实例化对象c1
//	Cube c1;
//	c1.SetL(10);
//	c1.SetW(20);
//	c1.SetH(30);
//	cout << "面积为:" << c1.CalS() << endl << "体积为:" << c1.CalV() << endl;
//
//	//实例化对象c2
//	Cube c2;
//	c2.SetL(10);
//	c2.SetW(20);
//	c2.SetH(30);
//
//	bool ret1 = isSame(c1, c2);
//	if (ret1) {
//	
//		cout << "c1和c2相等" << endl;
//	}
//	else {
//	
//		cout << "c1和c2不相等" << endl;
//	}
//
//	//修改c2的长为20
//	c2.SetL(20);
//	bool ret2 = c1.isSameByClass(c2);
//	if (ret2) {
//
//		cout << "c1和c2相等" << endl;
//	}
//	else {
//
//		cout << "c1和c2不相等" << endl;
//	}
//
//
//	return 0;
//}

/*********************************************/
//2.点和圆的关系
//此案例通过多文件进行演示
//#include "point.h"
//#include "circle.h"
//
////判断点和圆的关系
//void IsPointInCircle(Circle &c,Point &p)
//{
//	int dis_x = (p.GetX() - c.GetPoint().GetX()) * (p.GetX() - c.GetPoint().GetX());
//	int dis_y = (p.GetY() - c.GetPoint().GetY()) * (p.GetY() - c.GetPoint().GetY());
//	if ((dis_x+dis_y) == (c.GetR())* (c.GetR())) {
//	
//		cout << "点在圆上" << endl;
//	}
//	else if ((dis_x + dis_y) < (c.GetR()) * (c.GetR())) {
//	
//		cout << "点在圆内" << endl;
//	}
//	else {
//	
//		cout << "点在圆外" << endl;
//	}
//}
//
//int main()
//{
//	//实例化点
//	Point p;
//	p.SetX(10);
//	p.SetY(0);
//
//	//实例化圆
//	Circle c;
//	c.SetR(10);
//	c.SetPoint(0,0);
//
//	//比较点和圆的关系
//	IsPointInCircle(c,p);
//
//	return 0;
//}

/*********************************************/
//构造函数和析构函数
//构造函数用于初始化，析构函数用于清理对象
//对象的初始化和清理工作是编译器强制要求执行的
//如果我们写的类里没有提供构造和析构函数，则编译器会提供
//编译器提供的构造函数和析构函数是空实现

//构造函数:类名(){} \
1.构造函数没有返回值，也不需要写void\
2.函数名与类名相同\
3.构造函数可以有参数，所以可以重载\
4.构造函数的属性必须为public，否则无法实例化对象\
5.程序会在调用对象时自动调用构造函数，无需手动调用，且只调用一次

//析构函数:~类名(){} \
1.构造函数没有返回值，也不需要写void\
2.函数名为类名前加~\
3.构造函数不可以有参数，所以不可以重载\
4.析构函数的属性必须为public，否则无法实例化对象\
5.程序会在对象销毁前自动调用析构函数，无需手动调用，且只调用一次

//class Person
//{
//public:
//	Person()
//	{
//		cout << "调用构造函数" << endl;
//	}
//
//	Person(int a)   //构造函数可以重载
//	{
//	
//	}
//
//	~Person()
//	{
//		cout << "调用析构函数" << endl;
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
//	test();  //test中的p被创建，然后被销毁，故会同时调用构造函数和析构函数
//	Person p1;  
//	system("pause"); //代码运行到此处，p1还没被销毁，故只调用构造函数，点击回车后，在main函数return前会调用p1的析构函数
//	return 0;
//}

/*********************************************/
//构造函数的分类:\
1.按参数分:有参构造和无参构造\
2.按类型分:普通构造和拷贝构造

//class Person
//{
//private:
//	int Age;
//public:
//	//无参构造(默认构造)
//	Person()
//	{
//		cout << "调用无参构造函数" << endl;
//	}
//
//	//有参构造
//	Person(int a)   //构造函数可以重载
//	{
//		Age = a;
//		cout << "调用有参构造函数" << endl;
//	}
//
//	//拷贝构造函数
//	Person(const Person &p)  //不能直接写成 Person p
//	{
//		Age = p.Age;
//		cout << "调用有拷贝构造函数" << endl;
//	}
//	~Person()
//	{
//		cout << "调用析构函数" << endl;
//	}
//
//	void ShowAge()
//	{
//		cout << Age << endl;
//	}
//
//};

/*********************************************/
//构造函数的调用方式:括号法、显示法和隐式转换法

//void test1()  //1.括号法
//{
//	Person p1;  //默认构造函数调用  //调用默认构造不要加括号，否则会被编译器认为是函数的声明，而不是在创建对象
//	Person p2(10);  //调用有参构造函数
//	Person p3(p2);  //调用拷贝构造函数
//	p2.ShowAge();
//	p3.ShowAge();
//}
//
//void test2()  //2.显示法
//{
//	Person p1 = Person();  //默认构造函数调用
//	Person p2 = Person(10);  //调用有参构造函数  
//	Person p3 = Person(p2);  //调用拷贝构造函数
//
//	Person(10);  //Person(10)为匿名对象，当前行执行结束后，系统会立即回收匿名对象
//	cout << "验证匿名对象回收时间" << endl;
//
//	//不要利用拷贝构造函数来初始化匿名对象
//	//Person(p3);  //编译器会认为此行代码为: Person p3;此时会和之前定义的p3重复
//}
//
//void test3()  //3.隐式转换法
//{
//	Person p1 = 10;  //调用有参构造函数 //编译器会将此行代码转换成:Person p1 = Person(10);
//	Person p2 = p1;  //调用拷贝构造函数
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
//拷贝构造函数的调用时机:\
1.使用一个已经创建完毕的对象来初始化一个新对象\
2.值传递的方式给函数传值\
3.以值方式返回局部对象

//class Person
//{
//private:
//	int Age;
//public:
//	Person()
//	{
//	
//		cout<<"调用无参构造"<<endl;
//	}
//	Person(int a)
//	{
//		Age = a;
//		cout << "调用有参构造" << endl;
//	}
//	Person(const Person& p)
//	{
//		Age = p.Age;
//		cout << "调用拷贝构造函数" << endl;
//	}
//
//	~Person()
//	{
//		cout << "调用析构函数" << endl;
//	}
//
//};
//
//void test1()  //使用一个已经创建完毕的对象来初始化一个新对象
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
//void test2()  //值传递的方式给函数传值
//{
//	Person p1;  //调用默认构造函数
//	DoWork(p1);  
//	//值传递会拷贝临时副本，当调用DoWork()时会拷贝一个Person p，此时将p1传给它，等价于Person p = p1，根据隐式转化法\
//	调用构造函数的规则，可知此时会调用拷贝构造函数
//}
//
//Person DoWork2()
//{
//	Person p1;   //调用默认构造函数
//	cout << &p1 << endl;
//	return p1;
//}
//void test3()  //以值方式返回局部对象
//{
//	Person p = DoWork2();  
//	//以值方式返回局部对象时，DoWork函数返回的是一个拷贝的对象而不是DoWork函数中创建的p1,可以联系值传递进行思考
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
//构造函数调用规则\
1.默认情况下，c++的编译器至少会给一个类添加三个函数，分别是默认构造函数、默认析构函数和默认拷贝构造函数，其中前两者为空实现\
拷贝构造函数为值拷贝\
2.如果用户定义有构造函数，c++编译器不再提供默认构造函数，但是会提供拷贝构造函数\
3.如果用户定义了拷贝构造函数，c++将不提供任何构造函数

//class Person
//{
//public:
//	int Age;
//public:
//	Person()
//	{
//		cout << "调用默认构造函数" << endl;
//	}
//	Person(int a)
//	{
//		Age = a;
//		cout << "调用有参构造函数" << endl;
//	}
//	Person(const Person &p)
//	{
//		Age = p.Age;
//		cout << "调用拷贝构造函数" << endl;
//	}
//	~Person()
//	{
//		cout << "调用析构函数" << endl;
//	}
//
//};
//
////1.默认情况下，c++的编译器至少会给一个类添加三个函数，分别是默认构造函数、默认析构函数和默认拷贝构造函数，其中前两者为空实现\
//拷贝构造函数为值拷贝
//void test1()  //注释掉拷贝构造函数运行
//{
//
//	Person p1;
//	p1.Age = 18;
//	Person p2(p1);
//	cout << "p2的年龄为:" << p2.Age << endl;
//}
//
////如果用户定义有构造函数，c++编译器不再提供默认构造函数，但是会提供拷贝构造函数
//void test2()  //注释掉默认构造函数运行
//{
//
//	Person p1;
//	Person p2(18);
//	Person p3(p2);
//	cout << "p3的年龄为:" << p3.Age << endl;
//}
//
////如果用户定义了拷贝构造函数，c++将不提供任何构造函数
//void test3()  //注释掉默认和有参构造函数运行
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
//深拷贝与浅拷贝\
1.浅拷贝:简单的赋值拷贝操作\
2.深拷贝:在堆区重新申请空间，进行拷贝操作

//浅拷贝
//class Person
//{
//public:
//	int age;
//	int* height;
//
//	Person()
//	{
//		cout << "调用默认构造函数" << endl;
//	}
//	Person(int a,int h)
//	{
//		age = a;
//		height = new int(h);
//		cout << "调用有参构造函数" << endl;
//	}
//	~Person()
//	{
//		if (height != NULL) {
//			
//			delete height;
//			height = NULL;
//		}
//		cout << "调用析构函数" << endl;
//	}
//
//};
//
//void test1()
//{
//	Person p1(18,160);
//	Person p2(p1);  //通过编译器提供的拷贝构造函数进行浅拷贝
//	//Person中的height指针进行浅拷贝后，p1、p2分别调用析构函数，会导致对同一块地址空间进行重复释放
//	cout << "p1的年龄为:" << p1.age<<"    "<< "身高为:" << *p1.height << endl; 
//	cout << "p1的年龄为:" << p2.age << "    " << "身高为:" << *p2.height << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//深拷贝
//如果属性需要在堆区进行开辟，应自己提供拷贝构造函数，防止浅拷贝带来的问题
//class Person
//{
//public:
//	int age;
//	int* height;
//
//	Person()
//	{
//		cout << "调用默认构造函数" << endl;
//	}
//	Person(int a, int h)
//	{
//		age = a;
//		height = new int(h);
//		cout << "调用有参构造函数" << endl;
//	}
//	Person(const Person& p)
//	{
//		age = p.age;
//		height = new int(*p.height);  //深拷贝，防止同一块地址空间被重复释放
//		cout << "调用拷贝构造函数" << endl;
//	}
//	~Person()
//	{
//		if (height != NULL) {
//
//			delete height;
//			height = NULL;
//		}
//		cout << "调用析构函数" << endl;
//	}
//
//};
//
//void test1()
//{
//	Person p1(18, 160);
//	Person p2(p1); 
//	cout << "p1的年龄为:" << p1.age << "    " << "身高为:" << *p1.height << endl;
//	cout << "p1的年龄为:" << p2.age << "    " << "身高为:" << *p2.height << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//初始化列表
//语法:构造函数():属性1(值1),属性2(值2)...{}

//class Person
//{
//public:
//	int a;
//	int b;
//	int c;
//
//	Person() :a(1), b(2), c(3)  //初始化列表
//	{
//		
//	}
//	Person(int a,int b,int c) :a(a), b(b), c(c)  //初始化列表
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

//类对象作为类成员
//当其他类作为本类的成员，构造时先构造类对象，再构造自身
//当其他类作为本类的成员，析构时先释放自身，再释放类对象
//class A
//{
//public:
//	A()
//	{
//		cout << "调用A的构造函数" << endl;
//	}
//
//	~A()
//	{
//		cout << "调用A的析构函数" << endl;
//	}
//};
//
//class B
//{
//public:
//	A a;
//	B()
//	{
//		cout << "调用B的构造函数" << endl;
//	}
//
//	~B()
//	{
//		cout << "调用B的析构函数" << endl;
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