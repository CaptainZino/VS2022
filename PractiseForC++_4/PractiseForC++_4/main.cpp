#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//多态(多种形态)
//静态多态:函数重载和运算符重载，复用函数名
//动态多态:派生类和虚函数实现运行时多态
//静态多态和动态的区别:
//1.静态多态的函数地址早绑定-编译阶段确定函数地址
//2.动态多态的函数地址晚绑定-运行阶段确定函数地址

//class Animal
//{
//public:
//	virtual void Speak()  //
//	{
//		cout << "anmial speak" << endl;
//	}
//};
//class Cat :public Animal
//{
//public:
//	virtual void Speak()  //子类中重写的父类的虚函数，前面可加virtual，也可以不加
//	{
//		cout << "cat speak" << endl;
//	}
//};
//class Dog :public Animal
//{
//public:
//	void Speak()
//	{
//		cout << "dog speak" << endl;
//	}
//};
////地址早绑定，在编译阶段决定函数地址
////若要调用Cat类的Speak()函数，那么DoSpeak函数的地址就不能早绑定，需要在运行阶段绑定
//void DoSpeak(Animal& animal)
//{
//	animal.Speak();
//}
//void test1()
//{
//	Cat cat;
//	Dog dog;
//	DoSpeak(cat);  //父类的引用调用子类的对象不需要强制转换  //等价于:Anmial& anmial = cat
//	DoSpeak(dog);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//动态多态满足条件:
//1.有继承关系
//2.子类要重写父类中的虚函数(重写不同于重载:重写的函数返回值类型，函数名和参数列表要完全相同)

//动态多态的使用:
//通过父类的指针或引用指向子类的对象

//多态的底层原理:

//class Animal
//{
//public:
//	virtual void Speak()  //
//	{
//		cout << "anmial speak" << endl;
//	}
//};
//class Cat :public Animal
//{
//public:
//	virtual void Speak()
//	{
//		cout << "cat speak" << endl;
//	}
//};
//class Dog :public Animal
//{
//public:
//	void Speak()
//	{
//		cout << "dog speak" << endl;
//	}
//};
//
//void DoSpeak(Animal& animal)
//{
//	animal.Speak();
//}
//void test1()
//{
//	Cat cat;
//	Dog dog;
//	DoSpeak(cat);
//	DoSpeak(dog);
//}
//void test2()
//{
//	cout << sizeof(Animal) << endl;  
//	//Anmial中有一个虚函数表指针(vfptr)，指向虚函数表(vftable)，表内部记录着一个虚函数的地址:&Anmial::speak
//	cout << sizeof(Cat) << endl;
//	//Cat类内部若不重写speak函数，则Cat类中也有一个虚函数表指针，其指向的虚函数表中的内容为:&Anmial::speak
//	//若Cat类内部重写了speak函数，子类中的虚函数表指针指向的虚函数表中的内容会替换成子类中重写的函数的地址:&Cat::speak\
//	父类中的虚函数表中的内容不会该表，当父类的指针或引用指向子类的对象时，发生多态
//	cout << sizeof(Dog) << endl;
//}
//
//int main()
//{
//	test1();
//	test2();
//
//	return 0;
//}

//多态案例-计算器类

//普通写法:
//class Calculator
//{
//public:
//	int	num1;  //操作数1
//	int num2;  //操作数2
//
//	int GetResult(string oper)
//	{
//		if (oper == "+") {
//		
//			return num1 + num2;
//		}
//		else if(oper == "-"){
//		
//			return num1 - num2;
//		}
//		else if (oper == "*") {
//
//			return num1 * num2;
//		}
//		//开闭原则:对拓展进行开放，对修改进行关闭
//	}
//};
//
//void test1()
//{
//	Calculator cal;
//	cal.num1 = 10;
//	cal.num2 = 20;
//	cout << cal.GetResult("+") << endl;
//	cout << cal.GetResult("-") << endl;
//	cout << cal.GetResult("*") << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//多态实现:
//好处:
//1.组织结构清晰
//2.可读性强
//3.有利于前期和后期的维护
//class BaseCalculator
//{
//public:
//	int num1;
//	int num2;
//	virtual int GetResult()
//	{
//		return 0;
//	}
//};
//
//class AddCal:public BaseCalculator
//{
//	int GetResult()
//	{
//		return num1 + num2;
//	}
//};
//class SubCal :public BaseCalculator
//{
//	int GetResult()
//	{
//		return num1 - num2;
//	}
//};
//class MulCal :public BaseCalculator
//{
//	int GetResult()
//	{
//		return num1 * num2;
//	}
//};
//
//void test1()
//{
//	//多态使用条件:父类的指针或者引用指向子类的对象
//	BaseCalculator* pcal = new AddCal;
//	pcal->num1 = 10;
//	pcal->num2 = 20;
//	cout << "num1+num2=" << pcal->GetResult() << endl;
//	delete pcal;  //释放堆区内存
//
//	//一个父类指针指向多个子类
//	pcal = new SubCal;
//	pcal->num1 = 10;
//	pcal->num2 = 20;
//	cout << "num1-num2=" << pcal->GetResult() << endl;
//	delete pcal;
//
//	pcal = new MulCal;
//	pcal->num1 = 10;
//	pcal->num2 = 20;
//	cout << "num1*num2=" << pcal->GetResult() << endl;
//	delete pcal;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//纯虚函数和抽象类
//纯虚函数:在多态中，通常父类中虚函数的实现是毫无意义的，主要都是调用子类中重写的内容，因此可将虚函数改写为纯虚函数
//纯虚函数语法:virtual 返回值类型 函数名 (参数列表) = 0;
//当类中有了纯虚函数，这个类称为抽象类
//抽象类特点:1.无法实例化对象 2.子类必须重写抽象类中的纯虚函数，否则也属于抽象类

//class BaseCalculator
//{
//public:
//	int num1;
//	int num2;
//	virtual int GetResult() = 0;  //纯虚函数
//};
//
//class AddCal:public BaseCalculator
//{
//	int GetResult()  //子类必须重写类中的纯虚函数，否则无法实例化对象
//	{
//		return num1 + num2;
//	}
//};
//class SubCal :public BaseCalculator
//{
//	int GetResult()
//	{
//		return num1 - num2;
//	}
//};
//class MulCal :public BaseCalculator
//{
//	int GetResult()
//	{
//		return num1 * num2;
//	}
//};
//
//void test1()
//{
//	//BaseCalculator cal;  //抽象类，无法实例化对象
//
//	//多态使用条件:父类的指针或者引用指向子类的对象
//	BaseCalculator* pcal = new AddCal;
//	pcal->num1 = 10;
//	pcal->num2 = 20;
//	cout << "num1+num2=" << pcal->GetResult() << endl;
//	delete pcal;  //释放堆区内存
//
//	pcal = new SubCal;
//	pcal->num1 = 10;
//	pcal->num2 = 20;
//	cout << "num1-num2=" << pcal->GetResult() << endl;
//	delete pcal;
//
//	pcal = new MulCal;
//	pcal->num1 = 10;
//	pcal->num2 = 20;
//	cout << "num1*num2=" << pcal->GetResult() << endl;
//	delete pcal;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//多态案例二
//class Base
//{
//public:
//	virtual void Brew() = 0;
//	virtual void AddIngredients() = 0;
//	void Boil()
//	{
//		cout << "boiling water" << endl;
//	}
//	
//	void PourInCup()
//	{
//		cout << "pour into cup" << endl;
//	}
//	void MakeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		AddIngredients();
//	}
//};
//class Coffee :public Base
//{
//public:
//	void Brew()
//	{
//		cout << "brew coffee" << endl;
//	}
//	void AddIngredients()
//	{
//		cout << "add suger and milk" << endl;
//	}
//
//};
//class Tea :public Base
//{
//public:
//	void Brew()
//	{
//		cout << "brew Tea" << endl;
//	}
//	void AddIngredients()
//	{
//		cout << "add leamon" << endl;
//	}
//
//};
//void DoWork(Base* base)
//{
//	base->MakeDrink();
//	delete base;
//}
//void test1()
//{
//	Base* p = new Coffee;
//	p->MakeDrink();
//	delete p;
//
//	cout << "-------------------------------" << endl;
//
//	p = new Tea;
//	p->MakeDrink();
//	delete p;
//
//	cout << "-------------------------------" << endl;
//
//	DoWork(new Coffee);  //Base* base = new Coffee
//
//	cout << "-------------------------------" << endl;
//
//	DoWork(new Tea);
//}
//int main()
//{
//	test1();
//	return 0;
//}

//虚析构和纯虚析构
//多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//解决方式:将父类中的析构函数改为虚析构或纯虚析构
//虚析构和纯虚析构的共性:
//1.可以解决父类指针释放子类对象
//2.都需要有具体的函数实现
//虚析构和纯虚析构的区别:
//如果是纯虚析构，该类属于抽象类，无法实例化对象
//虚析构语法:virtual ~类名(){}
//纯虚析构语法:virtual ~类名() = 0;  类名::~类名(){}

//class Anmial
//{
//public:
//	virtual void speak() = 0;
//	Anmial()
//	{
//		cout << "调用Anmial类构造函数" << endl;
//	}
//	virtual ~Anmial() = 0;  //纯虚析构声明  //需要在全局函数中实现  //有了此纯虚析构，Anmial类为抽象类，无法实例化对象
//	//virtual ~Anmial()  //虚析构  //如果子类中没有堆区数据，可以不写为虚析构或纯虚析构
//	//{
//	//	cout << "调用Anmial类析构函数" << endl;
//	//}
//};
//class Cat :public Anmial
//{
//public:
//	string* name;
//	void speak()
//	{
//		cout << *name<<" cat speak" << endl;
//	}
//	Cat(string name)
//	{
//		cout << "调用Cat类构造函数" << endl;
//		this->name = new string(name);
//	}
//	~Cat()
//	{
//		if (name != NULL) {
//
//			cout << "调用Cat类析构函数" << endl;
//			delete name;
//			name = NULL;
//		}
//	}
//	
//};
//Anmial::~Anmial()  //父类纯虚析构函数实现
//{
//	cout << "调用Anmial类纯虚析构函数" << endl;
//}
//void test1()
//{
//	Anmial* anmial = new Cat("Tom");
//	anmial->speak();
//	//如果父类的析构函数不是虚析构，父类指针在析构的时候，不会调用子类中的析构函数，导致子类中如果有堆区属性，会出现内存泄露
//	delete anmial;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//多态案例三

//class CPU
//{
//public:
//	virtual void Calculate() = 0;
//};
//class Graphics
//{
//public:
//	virtual void Display() = 0;
//};
//class Memory
//{
//public:
//	virtual void Install() = 0;
//};
//class Computer
//{
//private:
//	CPU* p_cpu;
//	Graphics* p_graphics;
//	Memory* p_memory;
//public:
//	Computer(CPU* cpu,Graphics* graphics,Memory* mempry)
//	{
//		p_cpu = cpu;
//		p_graphics = graphics;
//		p_memory = mempry;
//	}
//	void DoWork()
//	{
//		p_cpu->Calculate();
//		p_graphics->Display();
//		p_memory->Install();
//	}
//	~Computer()  //释放三个零件在堆区开辟的空间
//	{
//		if (p_cpu != NULL) {
//		
//			delete p_cpu;
//			p_cpu = NULL;
//		}
//		if (p_graphics != NULL) {
//
//			delete p_graphics;
//			p_graphics = NULL;
//		}
//		if (p_memory != NULL) {
//
//			delete p_memory;
//			p_memory = NULL;
//		}
//
//	}
//};
//class IntelCPU:public CPU
//{
//	void Calculate()
//	{
//		cout << "intel CPU calculate" << endl;
//	}
//
//};
//class IntelGraphics :public Graphics
//{
//	void Display()
//	{
//		cout << "intel Graphics display" << endl;
//	}
//
//};
//class IntelMemory :public Memory
//{
//	void Install()
//	{
//		cout << "intel Memory install" << endl;
//	}
//
//};
//class LenovoCPU :public CPU
//{
//	void Calculate()
//	{
//		cout << "Lenovo CPU calculate" << endl;
//	}
//
//};
//class LenovoGraphics :public Graphics
//{
//	void Display()
//	{
//		cout << "Lenovo Graphics display" << endl;
//	}
//
//};
//class LenovoMemory :public Memory
//{
//	void Install()
//	{
//		cout << "Lenovo Memory install" << endl;
//	}
//
//};
//void test1()
//{
//	//第一台电脑
//	Computer* computer1 = new Computer(new IntelCPU, new IntelGraphics, new IntelMemory);
//	computer1->DoWork();
//	delete computer1;
//
//	cout << "-------------------------" << endl;
//
//	//第二台电脑
//	Computer* computer2 = new Computer(new LenovoCPU, new LenovoGraphics, new LenovoMemory);
//	computer2->DoWork();
//	delete computer2;
//}
//int main()
//{
//	test1();
//	return 0;
//}