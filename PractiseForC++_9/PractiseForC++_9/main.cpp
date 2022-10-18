#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//随机数
//void test1()
//{
//	cout << rand() % 100 << endl;  //产生一个0~99的随机数
//}
//int main()
//{
//	srand((unsigned int)time(NULL));  //(unsigned int)time(NULL)为rand()的种子，即调用rand()产生随机数时的起始值
//	test1();
//	return 0;
//}


//函数对象(仿函数)
//重载了函数调用操作符的类，其对象称为函数对象
//函数对象使用重载的()时，行为类似函数调用，也成为仿函数
//仿函数的本质是一个类，不是一个函数


//函数对象在使用时，可以像普通函数那样调用，可以有参数，也可以有返回值
//函数对象超出普通函数的概念，函数对象可以有自己的状态，函数对象是一个类，类内部可以有自己的属性来记录自己的状态
//函数对象可以作为参数出传递

//class MyAdd
//{
//public:
//	int operator()(int x1,int x2)
//	{
//		return x1 + x2;
//	}
//};
//
//class MyPrint
//{
//public:
//	int count;  //记录函数调用次数
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void operator()(string test)
//	{
//		cout << test << endl;
//		this->count++;
//	}
//};
//void test1()
//{
//	MyAdd add;
//	cout << add.operator()(5,10) << endl;
//	cout << add(5, 10) << endl;  //函数对象在使用时,可以有参数，也可以有返回值
//}
//void test2()
//{
//	MyPrint print;
//	print("hello there");
//	print("hello there");
//	print("hello there");
//	cout << "函数调用次数:" << print.count << endl;  //函数对象可以有自己的状态
//}
//void doPrint(MyPrint& print,string str)
//{
//	print(str);
//}
//void test3()
//{
//	MyPrint print;
//	doPrint(print,"hello there");  //函数对象可以作为参数出传递
//}
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}

//谓词
//返回值为bool类型的仿函数称为谓词
//如果operator()接收一个参数，称为一元谓词
//如果operator()接收两个参数，称为二元谓词

//一元谓词
//#include <vector>
//#include <algorithm>
//
//class GreaterFive
//{
//public:
//	GreaterFive()
//	{}
//	bool operator()(int v)
//	{
//		return v > 5;
//	}
//};
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//查找容器中有没有大于5的数
//	//GreaterFive()为匿名函数对象  //创建匿名对象调用默认构造时需要加括号，非匿名的对象调用默认构造不加括号
//	cout << *(find_if(v.begin(), v.end(), GreaterFive())) << endl;  //find_if找到相应数据返回其迭代器，否则返回v.end()
//}
//int main()
//{
//	test1();
//	return 0;
//}

//二元谓词
//#include <vector>
//#include <algorithm>
//
//class Compare
//{
//public:
//	bool operator()(int v1,int v2) const
//	{
//		return v1 > v2;
//	}
//};
//void test1()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(30);
//	v1.push_back(20);
//	v1.push_back(50);
//	v1.push_back(40);
//	sort(v1.begin(),v1.end());
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	vector<int> v2;
//	v2.push_back(10);
//	v2.push_back(30);
//	v2.push_back(20);
//	v2.push_back(50);
//	v2.push_back(40);
//
//	sort(v2.begin(),v2.end(),Compare());  //此算法参数需要的是函数对象，而不是类型，需要与类中封装的sort进行区别
//
//	for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}


//STL中内建了一些函数对象:算数仿函数、关系仿函数、逻辑仿函数
//这些仿函数所产生的对象，用法和一般函数完全相同
//使用需包含头文件:#include <functional>

//内建函数对象—算数仿函数
//用于实现四则运算
//其中negate为一元运算，其余均为二元运算
//函数原型:
//template<typename T> T plus<T>  //加法仿函数
//template<typename T> T minus<T>  //加法仿函数
//template<typename T> T multiplies<T>  //乘法仿函数
//template<typename T> T divides<T>  //除法仿函数
//template<typename T> T modulus<T>  //取模仿函数
//template<typename T> T negate<T>  //取反仿函数

//#include <functional>
//
//void test1()
//{
//	negate<int> n;
//	cout << n(50) << endl;
//
//	plus<int> p;  //参数表中只需一个参数
//	cout << p(50,50) << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//关系仿函数
//实现关系对比
//函数原型:
//template<typename T> T equal_to<T>  //等于
//template<typename T> T not_equal_to<T>  //不等于
//template<typename T> T greater<T>  //大于
//template<typename T> T greater_equal<T>  //大于等于
//template<typename T> T less<T>  //小于
//template<typename T> T less_equal<T>  //小于等于

//#include <functional>
//#include <algorithm>
//#include <vector>
//
//void test1()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(50);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	sort(v.begin(),v.end(), greater<int>());  //通过内建函数对象指定排序规则
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}


//逻辑仿函数
//实现逻辑运算
//template<typename T> bool logical_and<T>  //逻辑与
//template<typename T> bool logical_or<T>  //逻辑或
//template<typename T> bool logical_not<T>  //逻辑非

//#include <functional>
//#include <algorithm>
//#include <vector>
//
//void test1()
//{
//	vector<bool> v;
//	v.push_back(true);
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	vector<bool> v2;
//	v2.resize(v.size());  //搬运的目标容器必须要提前开辟空间
//	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());  //搬运
//	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//
//}
//int main()
//{
//	test1();
//	return 0;
//}

//STL常用算法
//算法的主要头文件由<algorithm>、<functional>、<numeric>组成
//<algorithm>是所有STL头文件中最大的一个，范围涉及比较、交换、查找、遍历操作、复制、修改等
//<numeric>体积较小，只包括在序列上面进行简单数学运算的模板函数
//<functional>定义了一些模板类，用以声明函数对象

//常用遍历算法
//for_each  //遍历容器算法
//transform  //搬运容器的数据到另一个容器中

//for_each(iterator beg,iterator end,_func)
//beg为开始迭代器
//end为结束迭代器
//_func为函数或者函数对象

//#include <algorithm>
//#include <vector>
//
//void print1(int val)
//{
//	cout << val << " ";
//}
//class print2
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	for_each(v.begin(),v.end(), print1);
//	cout << endl;
//	for_each(v.begin(), v.end(), print2());
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//transform(iterator beg1,iterator end1,iterator beg2 ,_func)
//beg1:源容器开始迭代器
//end1:源容器结束迭代器
//beg2:目标容器开始迭代器
//_func:函数或者函数对象:指定搬运时要进行的运算


//#include <algorithm>
//#include <vector>
//
//class TransForm
//{
//public:
//	int operator()(int val)  //将源容器中的数据取出后作为参数传入该函数，作相应运算后再进行返回
//	{
//		return -val;
//	}
//};
//void print1(int val)
//{
//	cout << val << " ";
//}
//void test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	
//	vector<int> v2;
//	v2.resize(v1.size());  //目标容器必须要提前开辟空间
//	transform(v1.begin(),v1.end(),v2.begin(),TransForm());
//	for_each(v2.begin(),v2.end(), print1);
//	cout << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//常用查找算法:
//find  //查找元素
//find_if  //按条件查找元素
//adjacent_find  //查找相邻重复元素
//binary_search  //二分法查找
//count  //统计元素个数
//count_if  //按条件统计元素个数


//find(iterator beg,iterator end,value)
//查找指定元素，找到返回指定元素的迭代器，找不到返回结束迭代器
//beg:开始迭代器
//end:结束迭代器
//value:查找的元素

//#include <algorithm>
//#include <vector>
//
//
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
//	//重载==号，让find底层知道如何对比自定义数据类型
//	bool operator==(const Person& p)   //必须要加const和底层代码对应
//	{
//		if (this->name == p.name && this->age == p.age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//void test1()  //查找内置数据类型
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	vector<int>::iterator it = find(v1.begin(), v1.end(), 5);
//	if (it == v1.end())
//	{
//		cout << "没有找到数据" << endl;
//	}
//	else
//	{
//		cout << "查找数据为:" << *it << endl;
//	}
//}
//void test2()  //查找自定义数据类型
//{
//	vector<Person> v;
//	Person p1("aaa", 18);
//	Person p2("ccc", 17);
//	Person p3("ddd", 19);
//	Person p4("bbb", 19);
//	Person p5("eee", 22);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	vector<Person>::iterator it = find(v.begin(), v.end(), p3);
//	if(it == v.end())
//	{
//		cout << "没有找到数据" << endl;
//	}
//	else
//	{
//		cout << "查找数据为:" << it->name << " " << it->age << endl;
//	}
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}


//find_if(iterator beg,iterator end,_pred)
//按条件查找元素，找到返回相应迭代器，否则返回结束迭代器
//beg:开始迭代器
//end:结束迭代器
//_pred:函数或谓词

//#include <algorithm>
//#include <vector>
//
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
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
//class AgeOverTwenty
//{
//public:
//	bool operator()(const Person& p)
//	{
//		return p.age > 20;
//	}
//};
//void test1()  //查找内置数据类型
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	vector<int>::iterator it = find_if(v1.begin(), v1.end(), GreaterFive());  //查找容器中大于5的数
//	if (it == v1.end())
//	{
//		cout << "没有找到数据" << endl;
//	}
//	else
//	{
//		cout << "查找数据为:" << *it << endl;
//	}
//}
//void test2()  //查找自定义数据类型
//{
//	vector<Person> v;
//	Person p1("aaa", 18);
//	Person p2("ccc", 17);
//	Person p3("ddd", 19);
//	Person p4("bbb", 19);
//	Person p5("eee", 22);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	vector<Person>::iterator it = find_if(v.begin(), v.end(), AgeOverTwenty());
//	if (it == v.end())
//	{
//		cout << "没有找到数据" << endl;
//	}
//	else
//	{
//		cout << "查找数据为:" << it->name << " " << it->age << endl;
//	}
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//adjacent_find(iterator beg,iterator end)
//查找相邻重复元素，找到返回相邻元素中第一个元素的迭代器，否则返回结束迭代器
//beg:开始迭代器
//end:结束迭代器

//#include <algorithm>
//#include <vector>
//
//void test1()
//{
//	vector<int> v;
//	v.push_back(0);
//	v.push_back(3);
//	v.push_back(2);
//	v.push_back(2);
//	v.push_back(1);
//	v.push_back(5);
//	v.push_back(3);
//
//	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
//	if (it == v.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << *it << endl;
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}

//bool binary_search(iterator beg,iterator end,value)
//通过二分法查找指定元素，找到返回true，否则返回false
//无序序列中此算法不可用
//beg:开始迭代器
//end:结束迭代器
//value:查找的元素

//#include <algorithm>
//#include <vector>
//
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	bool it = binary_search(v.begin(), v.end(), 5);  //若为无序序列，查找结果随机
//	if (!it)
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "找到" << endl;
//	}
//
//}
//int main()
//{
//	test1();
//	return 0;
//}

//count(iterator beg,iterator end,value)
//统计元素出现次数
//beg:开始迭代器
//end:结束迭代器
//value:统计的元素

//#include <algorithm>
//#include <vector>
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
//	bool operator==(const Person& p)
//	{
//		if (this->name == p.name)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//void test1()  //统计内置类型
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(10);
//
//	int num = count(v.begin(),v.end(),10);
//	cout << "10出现的次数为:" << num << endl;
//
//}
//void test2()  //统计自定义类型
//{
//	vector<Person> v;
//	Person p1("aaa", 18);
//	Person p2("ccc", 17);
//	Person p3("ddd", 19);
//	Person p4("bbb", 19);
//	Person p5("eee", 22);
//	Person p6("ddd", 22);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	v.push_back(p6);
//
//	int num = count(v.begin(), v.end(), Person("ddd", 22));
//
//	cout << "名字为ddd的有" << num << "人" << endl;
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//count_if()
//按条件统计元素出现的次数
//beg:开始迭代器
//end:结束迭代器
//_pred:谓词

//#include <algorithm>
//#include <vector>
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
//class Greater10
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 10;
//	}
//};
//class AgeOver15
//{
//public:
//	bool operator()(const Person& p)
//	{
//		if (p.age >= 15)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//void test1()  //统计内置类型
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(10);
//
//	int num = count_if(v.begin(),v.end(), Greater10());
//	cout << "大于10的数出现的次数:" << num << endl;
//
//}
//void test2()  //统计自定义类型
//{
//	vector<Person> v;
//	Person p1("aaa", 18);
//	Person p2("ccc", 17);
//	Person p3("ddd", 19);
//	Person p4("bbb", 19);
//	Person p5("eee", 22);
//	Person p6("ddd", 22);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	v.push_back(p6);
//
//	int num = count_if(v.begin(), v.end(), AgeOver15());
//
//	cout << "年龄大于15的有" << num << "人" << endl;
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}


//常用排序算法:
//sort  //对容器内的元素进行排序
//random_shuffle  //洗牌，指定范围内的元素随机调整次序
//merge  //容器元素合并，并储存到另一个容器中
//reverse  //反转指定范围内的元素

//sort(iterator beg,iterator end,_pred);  //_pred选填，不填默认为升序
//beg:开始迭代器
//end:结束迭代器
//_pred:谓词

//#include <algorithm>
//#include <vector>
//
//void MyPrint(int val)
//{
//	cout << val << " ";
//}
//bool MySort(int v1,int v2)
//{
//	return v1 > v2;
//}
//void test1()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(60);
//
//	sort(v.begin(),v.end());
//	for_each(v.begin(), v.end(), MyPrint);
//	
//	cout << endl;
//
//	sort(v.begin(), v.end(), MySort);  //sort(v.begin(), v.end(), greater<int>());
//	for_each(v.begin(), v.end(), MyPrint);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//random_shuffle(iterator beg,iterator end)
//洗牌算法，指定范围内的元素随机调整次序
//beg:开始迭代器
//end:结束迭代器

//#include <algorithm>
//#include <vector>
//
//void MyPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	for_each(v.begin(), v.end(), MyPrint);
//	
//	cout << endl;
//
//	random_shuffle(v.begin(),v.end());  //通过random_shuffle算法随机调整v中元素次序
//	for_each(v.begin(), v.end(), MyPrint);
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));  //通过系统时间生成随机数种子 
//	test1();
//	return 0;
//}


//merge(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
//容器元素合并，并存储到另一个容器中
//两个合并的容器必须是有序的
//dest:目标容器开始迭代器

//#include <algorithm>
//#include <vector>
//
//void MyPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	vector<int> v2;
//	for (int i = 10; i < 20; i++)
//	{
//		v2.push_back(i);
//	}
//	
//	vector<int> v3;
//	v3.resize(v1.size()+v2.size());  //提前开辟空间
//	merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
//	for_each(v3.begin(), v3.end(), MyPrint);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}


//reverse(iterator beg,iterator end)
//反转指定范围元素

//#include <algorithm>
//#include <vector>
//
//void MyPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	reverse(v1.begin(),v1.end());
//	for_each(v1.begin(),v1.end(),MyPrint);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//常用拷贝和替换算法:
//copy  //容器内指定范围内的元素拷贝到另一容器中
//replace  //将容器内指定范围的旧元素改为新元素
//replace_if  //容器内指定范围且满足条件的元素替换为新元素
//swap  //互换两个容器的元素


//copy(iterator beg,iterator end,iterator dest)

//#include <algorithm>
//#include <vector>
//
//void MyPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	vector<int> v2;
//	v2.resize(v1.size());
//	copy(v1.begin(),v1.end(),v2.begin());
//	for_each(v2.begin(),v2.end(),MyPrint);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//replace(iterator beg,iterator end,oldvalue,newvalue)

//#include <algorithm>
//#include <vector>
//
//void MyPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	replace(v1.begin(),v1.end(),6,100);  //将v1.begin()到v1.end()范围内所有的6都替换成100
//	for_each(v1.begin(),v1.end(),MyPrint);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}


//replace_if(iterator beg,iterator end,_pred,newvalue)
//_pred:谓词

//#include <algorithm>
//#include <vector>
//
//void MyPrint(int val)
//{
//	cout << val << " ";
//}
//bool Greater4(int val)
//{
//	return val > 4;
//}
//
//void test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	replace_if(v1.begin(), v1.end(), Greater4, 100);  //将v1.begin()到v1.end()范围内所有大于4的元素都替换成100
//	for_each(v1.begin(), v1.end(), MyPrint);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//swap(container c1,container c2)
//交换的容器必须是同种类型

//#include <algorithm>
//#include <vector>
//
//void MyPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	vector<int> v2;
//	for (int i = 10; i < 20; i++)
//	{
//		v2.push_back(i);
//	}
//	cout << "互换前:" << endl;
//	for_each(v1.begin(), v1.end(), MyPrint);
//	cout << endl;
//	for_each(v2.begin(), v2.end(), MyPrint);
//	cout << endl;
//
//	swap(v1,v2);
//
//	cout << "互换前:" << endl;
//	for_each(v1.begin(), v1.end(), MyPrint);
//	cout << endl;
//	for_each(v2.begin(), v2.end(), MyPrint);
//	cout << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//常用算数生成算法
//算数生成算法属于小型算法，使用时要包含头文件#include <numeric>
//accumulate  //计算容器中元素累计总和
//fill  //向容器中添加元素

//accumulate(iterator beg,iterator end,value)
//value:起始累加值，一般给0

//#include <algorithm>
//#include <vector>
//#include <numeric>
//
//void MyPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 101; i++)
//	{
//		v1.push_back(i);
//	}
//	int total = accumulate(v1.begin(),v1.end(),0);
//	cout << total << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}


//fill(iterator beg,iterator end,value)
//向容器中填充元素
//value:填充值

//#include <algorithm>
//#include <vector>
//#include <numeric>
//
//void MyPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(0);
//	}
//	fill(v1.begin(),v1.end(),100);
//	for_each(v1.begin(),v1.end(),MyPrint);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}


//常用集合算法:
//set_intersection  //求两个容器的交集
//set_union  //求两个容器的并集
//set_difference  //求两个容器的差集

//set_intersection(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
//返回值为交集最后一个元素的迭代器
//两个集合必须均为有序序列

//#include <algorithm>
//#include <vector>
//#include <numeric>
//
//void MyPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	vector<int> v2;
//	for (int i = 5; i < 15; i++)
//	{
//		v2.push_back(i);
//	}
//	vector<int> v3;
//	v3.resize(v1.size() < v2.size() ? v1.size() : v2.size());  //目标容器的大小取两个容器中的较小值
//	vector<int>::iterator itEnd = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
//	for_each(v3.begin(), itEnd, MyPrint);  //提供返回的结束迭代器，避免打印默认填充的0
//}
//
//int main()
//{
//	test1();
//	return 0;
//}


//set_union(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
//返回值为并集最后一个元素的迭代器
//两个集合必须均为有序序列

//#include <algorithm>
//#include <vector>
//#include <numeric>
//
//void MyPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	vector<int> v2;
//	for (int i = 5; i < 15; i++)
//	{
//		v2.push_back(i);
//	}
//	vector<int> v3;
//	v3.resize(v1.size() + v2.size());  //目标容器的大小取两个容器大小的和
//	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	for_each(v3.begin(), itEnd, MyPrint);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//set_difference(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
//返回值为差集最后一个元素的迭代器
//两个集合必须均为有序序列

//#include <algorithm>
//#include <vector>
//#include <numeric>
//
//void MyPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	vector<int> v2;
//	for (int i = 5; i < 15; i++)
//	{
//		v2.push_back(i);
//	}
//	vector<int> v3;
//	v3.resize(v1.size());
//	//v1和v2的差集
//	vector<int>::iterator itEnd1 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	for_each(v3.begin(), itEnd1, MyPrint);
//
//	cout << endl;
//
//	vector<int> v4;
//	v4.resize(v2.size());
//	//v2和v1的差集
//	vector<int>::iterator itEnd2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v4.begin());
//	for_each(v4.begin(), itEnd2, MyPrint);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}