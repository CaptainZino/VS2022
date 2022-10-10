#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//STL:Standard Template Library(标准模板库)
//STL从广义上分为:容器(container)、算法(algorithm)和迭代器(iterator)
//容器和算法之间通过迭代器进行无缝链接
//STL几乎所有的代码都采用了模板类或者函数模板

//STL六大组件:容器、算法、迭代器、仿函数、适配器(配接器)、空间配置器
//容器:各种数据结构，如vector、list、deque、set、map等，用来存放数据
//算法:各种常用的算法，如sort、find、copy、for_each等
//迭代器:扮演了容器和算法之间的胶合剂
//仿函数:行为类似函数，可作为算法的某种策略
//适配器:一种用来修饰容器、仿函数或者迭代器接口的东西
//空间适配器:负责空间的配置与管理

//容器:序列式容器和关联式容器
//序列式容器:强调值的排序，序列式容器中的每个元素均有固定的位置
//关联式容器:二叉树结构，各元素之间没有严格的物理上的顺序关系

//算法:质变算法和非质变算法
//质变算法:运算过程中会更改区间内元素的内容，例如拷贝、替换、删除等
//非质变算法:运算过程中不会更改区间内元素的内容，例如查找、计数、遍历、寻找极值等

//迭代器:提供一种方法，使之能够依序访问某个容器所含的各个元素，而又无需暴露该容器的内部表示方式，每个容器都有自己专属\
的迭代器，迭代器的使用非常类似于指针(但实际为类模板)
//迭代器种类:输入迭代器、输出迭代器、前向迭代器、双向迭代器、随机访问迭代器

//vector存放内置数据
//#include <vector>  //容器头文件
//#include <algorithm>  //标准算法头文件
//
//void myPrint(int val)  //容器数据打印回调函数
//{
//	cout << val << endl;
//}
//void test1()
//{
//	vector<int> v1;  //创建一个vector容器，可以看作是一个数组
//	v1.push_back(10);  //像容器中插入数据
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//	//通过迭代器访问容器中的数据
//	vector<int>::iterator itBegin = v1.begin();  //起始迭代器，指向容器中第一个元素的位置
//	vector<int>::iterator itEnd = v1.end();  //结束迭代器，指向容器中最后一个元素的下一个位置
//
//	//遍历方式一
//	/*while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}*/
//
//	//遍历方式二
//	/*for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << endl;
//	}*/
//
//	//遍历方式三:利用STL提供的遍历算法
//	for_each(v1.begin(), v1.end(), myPrint);  //容器遍历算法
//
//
//}
//
//int main()
//{
//	test1();
//}

//vector存放自定义数据
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
//void myPrint(Person p)  //Person类打印回调函数
//{
//	cout << "姓名:" << p.name << " 年龄:" << p.age << endl;
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
//		//cout << "姓名:" << (*it).name << " 年龄:" << (*it).age << endl;
//		cout << "姓名:" << it->name << " 年龄:" << it->age << endl;
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

//vcetor存放自定义类型的指针
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
//void myPrint(Person* p)  //Person类打印回调函数
//{
//	cout << "姓名:" << p->name << " 年龄:" << p->age << endl;
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
//		cout << "姓名:" << (*it)->name << " 年龄:" << (*it)->age << endl;
//	}
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//vector容器中嵌套容器
#include <vector>
#include <algorithm>

void myPrint(vector<int> v)  //容器数据打印回调函数
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

	//for_each(v.begin(),v.end(),myPrint);  //算法遍历

	//*it等价于<vector<int>>中的内容
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