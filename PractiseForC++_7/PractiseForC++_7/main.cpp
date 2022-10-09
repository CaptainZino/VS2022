#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//模板
//模板的目的是为了提高复用性，将类型参数化
//template <typename T>或template <class T>
//template:声明创建模板
//typename:表明其后面的符号是一种数据类型，可以用class代替

//template<typename T>
//void SwapNumber(T& a, T& b)  //交换数据函数模板
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
//	SwapNumber(a,b);  //函数模板调用方式1:自动类型推导
//	cout << "a = "<< a << endl << "b = " << b << endl;
//	
//	double f1 = 3.14;
//	double f2 = 6.28;
//	SwapNumber<double>(f1,f2);  //函数模板调用方式2:显示指定类型
//	cout << "f1 = " << f1 << endl << "f2 = " << f2 << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//注意事项
//template<typename T>
//void SwapNumber(T& a, T& b)  //交换数据函数模板
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
//	//SwapNumber(a, f);  //1.自动类型推导，必须要推导出一致的数据类型T才可以使用
//	cout << "a = " << a << endl << "b = " << b << endl;
//
//}
//void test2()
//{
//	//func();  //2.模板必须要确定出T的数据类型才可以使用,此时无法使用自动类型推导
//	func<int>();  //可以显示指定类型
//}
//
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}

//模板案例:对任意类型的数组进行排序

//template<typename T>
//void SwapNumber(T& a, T& b)  //交换数据函数模板
//{
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//template<typename T>
//void Sort(T& arr)  //数组排序模板  //降序
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
//void Print(T& arr)  //数组打印模板  //非引用时,sizeof(arr)为8,因为传过来的是首地址
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

//普通函数与函数模板的区别
//1.普通函数调用时可以发生自动类型转换(隐式类型转换)
//2.函数模板调用时，如果利用自动类型推导，不会发生自动类型转换
//3.如果利用显示指定类型的方式，可以发生自动类型转化

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
//	cout << Add1(a, c) << endl;   //隐式将char转换成int进行运算
//}
//void test2()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	//cout << Add2(a, c) << endl;   //自动类型推导，不会发生自动类型转换
//}
//void test3()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout << Add3<int>(a, c) << endl;   //显示指定类型的方式，可以发生自动类型转化
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	return 0;
//}

//普通函数和函数模板的调用规则
//1.如果普通函数和函数模板都可以实现，优先调用普通函数
//2.可以通过空模板参数列表来强制调用函数模板
//3.函数模板也可以重载
//4.如果函数模板可以产生更好的匹配，优先调用函数模板
//如果提供了函数模，最好就不要再提供普通函数，避免产生二义性

//void Print(int a ,int b)
//{
//	cout << "调用普通函数" << endl;
//}
//template<typename T>
//void Print(T a ,T b)
//{
//	cout << "调用函数模板" << endl;
//}
//template<typename T>
//void Print(T a , T b , T c)
//{
//	cout << "调用重载函数模板" << endl;
//}
//void test1()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	char c1 = 'c';
//	char c2 = 'd';
//	Print(a,b);  //优先调用普通函数  //若普通函数只定义未实现，程序会报错，并不会因此去调函数模板
//	Print<>(a, b);  //通过空模板参数列表强制调用函数模板
//	Print(a, b ,c);  //重载函数模板
//	Print(c1, c2);  //函数模板可以产生更好的匹配，优先调用函数模板
//}
//int main()
//{
//	test1();
//	return 0;
//}

//使用模板时，有些特定的数据类型需要通过某些具体化的方式做特殊实现
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
////利用具体化Person版本进行实现，具体化版本优先调用
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

//类模板
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
//		cout << "姓名:" << this->name << " 年龄:" << this->age << endl;
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

//类模板和函数模板的区别
//1.类模板没有自动类型推导的使用方式
//2.类模板在模板参数列表中可以有默认参数
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
//		cout << "姓名:" << this->name << " 年龄:" << this->age << endl;
//	}
//};
//
//void test1()
//{
//	string name = "Pacino";
//	int age = 60;
//	//Person p1(name, age);  //非法:类模板没有自动类型推导的使用方式
//	Person<string, int> p1(name, age);  //必须显示指定类型
//	Person<string> p2("DeNiro", 60);  //类模板在模板参数列表中可以有默认参数
//	p2.ShowPerson();
//}
//int main()
//{
//	test1();
//	return 0;
//}

//类模板中成员函数创建时机
//类模板中的成员函数在调用时才去创建

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
//	//类模板中的成员函数在调用时才去创建，因为T的类型只有在调用时才可以确定
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
//	//p1.func2();  //非法调用
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
//	//类模板中的成员函数在调用时才去创建，因为T的类型只有在调用时才可以确定
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
//	//p1.func2();  //非法调用
//}
//int main()
//{
//	test1();
//	return 0;
//}

//类模板对象作函数的参数
//类模板实例化的对象，向函数传参的方式一共有三种:
//1.指定传入的类型:字节显示对象的数据类型
//2.参数模板化:将对象中的参数变为模板进行传递
//3.整个类模板化:将这个对象类型模板化进行传递

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
//		cout << "姓名:" << this->name << " 年龄:" << this->age << endl;
//	}
//};
////指定传入类型(最常用)
//void PrintPerson1(Person<string, int>& p)
//{
//	p.ShowPerson();
//}
////参数模板化
//template<typename T1,typename T2>
//void PrintPerson2(Person<T1, T2>& p)
//{
//	p.ShowPerson();
//	cout << "T1的类型为:" << typeid(T1).name() << endl;  //查看编译器推导的T1类型
//	cout << "T2的类型为:" << typeid(T2).name() << endl;
//}
////将整个类模板化
//template<typename T>
//void PrintPerson3(T & p)
//{
//	p.ShowPerson();
//	cout << "T的类型为:" << typeid(T).name() << endl;
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

//类模板与继承
//当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
//如果不指定，编译器无法给子类分配内存
//如果想灵活指定出父类中T的类型，子类也需要变为类模板

//template<typename T>
//class Base
//{
//public:
//	T m;
//};
//
//class Son1 :public Base<int>  //必须指定父类中T的类型，子类才能继承
//{
//
//};
//
//template<typename T1,typename T2>
//class Son2 :public Base<T1>  //如果想灵活指定出父类中T的类型，子类也需要变为类模板
//{
//public:
//	T2 obj;
//	Son2()
//	{
//		cout << "T1的类型为:" << typeid(T1).name() << endl;
//		cout << "T2的类型为:" << typeid(T2).name() << endl;
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

//类模板成员函数类外实现

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
////Person类构造函数类外实现
//template<typename T1,typename T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	this->name = name;
//	this->age = age;
//}
//
////ShowPerson()类外实现
//template<typename T1, typename T2>
//void Person<T1, T2>::ShowPerson()
//{
//	cout << "姓名:" << this->name << " 年龄:" << this->age << endl;
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

//类模板分文件编写
//类模板中成员函数创建时机是在调用阶段，会导致分文件编写时链接不到
//解决方式:
//1.直接包含.cpp文件
//2.将声明和实现写到同一个文件中，并更改后缀名为.hpp(.hpp为约定的名称，并非强制)

//#include "person.cpp"  //类模板中的成函数在编译阶段不会被创建，故需包含.cpp文件(此法不常用)
//#include "person.hpp"  //将声明和实现写到同一个文件中
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

//类模板与友元
//1.全局函数类内实现，直接在类内声明友元即可(建议使用)
//2.全局函数类外实现，需要提前让编译器知道全局函数的存在

////让编译器知道Person类的存在
//template<typename T1,typename T2>
//class Person;
//
////全局函数类外实现
//template<typename T1, typename T2>
//void PrintPerson2(Person<T1, T2> p)
//{
//	cout << "类外实现:" << endl;
//	cout << "姓名:" << p.name << " 年龄:" << p.age << endl;
//}
//
//template<typename NameType, typename AgeType>
//class Person
//{
//	//全局函数类内实现
//	template<typename T1,typename T2>
//	friend void PrintPerson1(Person<T1,T2> p)
//	{
//		cout << "姓名:" << p.name << " 年龄:" << p.age << endl;
//	}
//
//	template<typename T1, typename T2>
//	friend void PrintPerson2<>(Person<T1, T2> p);  //加空模板参数列表<>,让函数声明的类型和定义的类型均为函数模板
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

//类模板案例

//#include "MyArry.hpp"
//
//class Person
//{
//public:
//	string name;
//	int age;
//	Person()
//	{
//	  //提供默认构造函数，在创建MyArry类，当T为Person类时，会在堆上申请Person类的空间，此时调用该默认构造函数
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
//	cout << "p1容量大小:" <<p1.getCapacity() << endl;
//	cout << "p1 size大小:" <<p1.getSize() << endl;
//
//	MyArry<int> p2(p1);
//	p2.DeleteBack();
//	p2.PrintArry();
//	cout << "p2容量大小:" << p2.getCapacity() << endl;
//	cout << "p2 size大小:" << p2.getSize() << endl;
//}
//
//
//void test3()  //测试自定义类型
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