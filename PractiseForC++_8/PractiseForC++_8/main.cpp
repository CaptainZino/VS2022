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
//	v1.push_back(10);  //向容器中插入数据
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
//#include <vector>
//#include <algorithm>
//
//void myPrint(vector<int> v)  //容器数据打印回调函数
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//}
//void test1()
//{
//	vector<vector<int>> v;
//
//	vector<int> v1;
//	vector<int> v2;
//
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	v2.push_back(60);
//	v2.push_back(70);
//	v2.push_back(80);
//	v2.push_back(90);
//	v2.push_back(100);
//
//	v.push_back(v1);
//	v.push_back(v2);
//
//	//for_each(v.begin(),v.end(),myPrint);  //算法遍历
//
//	//*it等价于<vector<int>>中的内容
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		for (vector<int>::iterator jt = (*it).begin(); jt != (*it).end(); jt++)
//		{
//			cout << *jt << endl;
//		}
//	}
//
//}
//int main()
//{
//	test1();
//	return 0;
//}

//string容器
//string的本质是一个类，类的内部封装了char*,管理这个字符串，string是一个char*类型的容器
//string管理char*所分配的内存，不用担心赋值越界和取值越界，由类内部进行负责
//string构造函数:
//string();  //默认构造，创建一个空字符串
//string(const char* s);  //有参构造，使用字符串s进行初始化
//string(int n,char c);  //有参构造，使用n个字符c进行初始化
//string(const string& str);  //拷贝构造，使用string对象str初始化

//void test1()
//{
//	const char* s = "hello there";
//	string s1;  //默认构造
//
//	string s2(s);  //有参构造
//	cout << s2 << endl;
//
//	string s3(s2);  //拷贝构造
//	cout << s3 << endl;
//
//	string s4(10,'a');  //有参构造
//	cout << s4 << endl;
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//string赋值
//赋值函数原型:
//string& operator=(const char* s);
//string& operator=(const string& s);
//string& operator=(const char c);
//string& assign(const char* s);
//string& assign(const char* s, int n);  //把字符串s的前n个字符赋给string
//string& assign(const string& s);
//string& assign(int n, char c);

//void test1()
//{
//	string str1;
//	str1 = "hello there";  //string& operator=(const char* s);
//	cout << "str1=" << str1 << endl;
//
//	string str2;
//	str2 = str1;  //string& operator=(const string& s);
//	cout << "str2=" << str2 << endl;
//
//	string str3;
//	str3 = 'a';  //string& operator=(const char c);
//	cout << "str3=" << str3 << endl;
//
//	string str4;
//	str4.assign("hello there");  //string& assign(const char* s);
//	cout << "str4=" << str4 << endl;
//
//	string str5;
//	str5.assign("abcdefg",5);  //string& assign(const char* s, int n);
//	cout << "str5=" << str5 << endl;
//
//	string str6;
//	str6.assign(str4);  //string& assign(const string& s);
//	cout << "str6=" << str6 << endl;
//
//	string str7;
//	str7.assign(5,'a');  //string& assign(int n, char c);
//	cout << "str7=" << str7 << endl;
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//字符串拼接
//拼接函数原型
//string& operator+=(const char* str);
//string& operator+=(const char c);
//string& operator+=(const string& str);
//string& append(const char* s);
//string& append(const char* s,int n);  //将字符串s的前n个字符拼接到当前字符串的末尾
//string& append(const string& s);
//string& append(const string& s,int pos,int n);  //将字符串s中从pos开始的n个字符拼接到当前字符串的末尾

//void test1()
//{
//	string str1 = "hello";
//
//	str1 += "there";  //string& operator+=(const char* str);
//	cout << "str1=" << str1 << endl;
//
//	string str2 = "hello";
//	str1 += 'a';  //string& operator+=(const char c);
//	cout << "str2=" << str2 << endl;
//
//	string str3 = "hello";
//	str3 += str2;  //string& operator+=(const string& str);
//	cout << "str3=" << str3 << endl;
//
//	string str4 = "hello";
//	str4.append("there");  //string& append(const char* s);
//	cout << "str4=" << str4 << endl;
//
//	string str5 = "hello";
//	str5.append("there",2);  //string& append(const char* s,int n);
//	cout << "str5=" << str5 << endl;
//
//	string str6 = "hello";
//	str6.append(str5);  //string& append(const string& s);
//	cout << "str6=" << str6 << endl;
//
//	string str7 = "hello";
//	str7.append("abcedfg",3,2);  //string& append(const string& s,int pos,int n);
//	cout << "str7=" << str7 << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//字符串查找和替换
//函数原型:
//int find(const string& str,int pos = 0) const;  //从pos开始查找str第一次出现的位置
//int find(const char* s,int pos = 0) const;  //从pos开始查找s第一次出现的位置
//int find(const char* s,int pos, int n) const;  //从pos开始查找s的前n个字符第一次出现的位置
//int find(const char c,int pos = 0) const;  //从pos开始查找字符c第一次出现的位置
//int rfind(const string& str,int pos = npos) const;  //从pos开始查找str最后一次出现的位置
//int rfind(const char* s,int pos = npos) const;  //从pos开始查找s最后一次出现的位置
//int rfind(const char* s,int pos, int n) const;  //从pos开始查找s的前n个字符最后一次出现的位置
//int rfind(const char c,int pos = 0) const;  //从pos开始查找字符c最后一次出现的位置
//string& replace(int pos,int n,const string& str);  //将从pos开始的n个字符替换为str
//string& replace(int pos,int n,const char* s);  //将从pos开始的n个字符替换为s

//void test1()
//{
//	string str1 = "abcdefghijklmn";
//	string s = "hijk";
//	cout << "hijk的位置:" << str1.find(s) << endl;  //pos为默认参数，可以不传  //查找失败返回-1
//	//int find(const string& str,int pos = 0) const;
//
//	string str2 = "abcdefghijklmn";
//	cout << "hijk的位置:" << str2.find("hijk", 0) << endl;  //int find(const char* s, int pos = 0) const;
//
//	string str3 = "abcdefghijklmn";
//	cout << "de的位置:" << str3.find("defg", 0,2) << endl;  //int find(const char* s,int pos, int n) const;
//
//	string str4 = "abcdefghijklmn";
//	cout << "f的位置:" << str4.find('f', 0) << endl;  //int find(const char c,int pos = 0) const;
//
//	string str5 = "abcdefghijklmn";
//	string s1 = "lmn";
//	cout << "lmn的最后一次位置:" << str5.rfind(s1, 14) << endl;  //int rfind(const string& str,int pos = npos) const;
//	cout << "lmn的最后一次位置:" << str5.rfind(s1) << endl;  //pos为默认参数，可以不传
//	//rfind默认从字符串末尾开始查找
//
//	//...
//
//	string str6 = "hello there";
//	string s2 = "word";
//	str6.replace(6,5,s2);  //string& replace(int pos,int n,const string& str);
//	cout << "str6=" << str6 << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//字符串比较
//函数原型:
//int compare(const string& s) const;
//int compare(const char* s) const;

//void test1()
//{
//	string str1 = "hello there";
//	string str2(str1);
//	string str3 = "hello word";
//	cout << "str1和str2比较:" << str1.compare(str2) << endl;  //比较每个字符的asscall码值，相同返回0
//	cout << "str1和str3比较:" << str1.compare(str3) << endl;  //str1比str3小返回-1
//	cout << "str3和str1比较:" << str3.compare(str1) << endl;  //str3比str1大返回1
//
//}
//int main()
//{
//	test1();
//	return 0;
//}

//字符存取
//函数原型:
//char& operator[](int n);  //通过[]取字符
//char& at(int n);  //通过at方法取字符

//void test1()
//{
//	string str = "hello there";
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i];
//	}
//	cout << endl;
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i);
//	}
//	cout << endl;
//
//	str[6] = 'w';
//	str.at(7) = 'o';
//	cout << str << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//字符串插入和删除
//函数原型:
//string& insert(int pos,const char* s);
//string& insert(int pos,const string& str);
//string& insert(int pos,int n, char c);  //在指定位置插入n个字符c
//string& erase(int pos,int n = npos);  //从pos开始删除n个字符

//void test1()
//{
//	string str = "hello ";
//	str.insert(6,"there");
//	cout << str << endl;
//
//	str.erase(0,6);
//	cout << str << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//字串获取
//函数原型:
//string substr(int pos = 0,int n = npos) const  //获取从pos开始的n个字符组成的字符串

//void test1()
//{
//	string str = "hello there";
//	cout << str.substr(6, 5) << endl;
//}
//void test2()
//{
//	string str = "zhuliangxiong@163.com";
//	int pos = str.find('@');
//	cout << "username:" << str.substr(0,pos);
//}
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}

//vector容器
//vector容器和数组类似，也称为单端数组
//vector容器和数组的区别:数组是静态空间，而vector容器可以动态扩展
//动态扩展并不是在原空间之后续接新空间，而是找一块更大的空间，然后将原数据拷贝至新空间并同时释放原空间
//vector容器的迭代器是支持随机访问的迭代器

//vector容器构造函数
//函数原型:
//vector<T> v;  //采用模板实现类实现，默认构造函数
//vector(v.begin(),v.end());  //将v[begin(),end())区间中的元素拷贝给本身
//vector(n,elem);  //将n个elem拷贝给本身,有参构造
//vector(const vector& vec);  //拷贝构造

//#include <vector>
//
//void VPrint(vector<int> v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	vector<int> v1;  //默认构造
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	VPrint(v1);
//
//	vector<int> v2(v1.begin(),v1.end());  //vector(v.begin(),v.end());
//	VPrint(v2);
//
//	vector<int> v3(10, 100);  //vector(n,elem);
//	VPrint(v3);
//
//	vector<int> v4(v3);  //vector(const vector& vec);
//	VPrint(v4);
//}
//int main()
//{
//	test1();
//	return 0;
//}

//vector容器赋值
//函数原型:
//vector& operator=(const vector& vec);
//assign(begin,end);  //将[begin,end)区间的数据拷贝赋值给本身
//assign(n,elem);  //将n个elem拷贝赋值给本身

//#include <vector>
//
//void VPrint(vector<int> v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	VPrint(v1);
//
//	vector<int> v2;
//	v2 = v1;  //vector& operator=(const vector& vec);
//	VPrint(v2);
//
//	vector<int> v3;
//	v3.assign(v1.begin(),v1.end());
//	VPrint(v3);
//
//	vector<int> v4;
//	v4.assign(10,100);
//	VPrint(v4);
//}
//int main()
//{
//	test1();
//	return 0;


//vector容器的容量和大小
//函数原型:
//empty();  //判断容器是否为空
//capacity();  //获取容器的容量
//size();  //获取容器中元素的个数
//resize(int num);  //重新指定容器的长度为num，若容器变长，则以默认值填充新位置\
若容器变短，则末尾超出容器长度的元素被删除，但容器的容量大小不变
//resize(int num,elem);  //重新指定容器的长度为num，若容器变长，则以elem值填充新位置\
若容器变短，则末尾超出容器长度的元素被删除，但容器的容量大小不变

//#include <vector>
//
//void VPrint(vector<int> v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	if (!v1.empty())
//	{
//		cout << "v1的容量为" << v1.capacity() << endl;
//		cout << "v1的元素个数为" << v1.size() << endl;
//		VPrint(v1);
//	}
//	else
//	{
//		cout << "v1为空" << endl;
//	}
//
//	v1.resize(15);
//	cout << "调整后v1的容量为" << v1.capacity() << endl;
//	cout << "调整后v1的元素个数为" << v1.size() << endl;
//	VPrint(v1);  //默认用零填充
//
//	v1.resize(20,100);
//	cout << "调整后v1的容量为" << v1.capacity() << endl;
//	cout << "调整后v1的元素个数为" << v1.size() << endl;
//	VPrint(v1);
//
//	v1.resize(5);
//	cout << "调整后v1的容量为" << v1.capacity() << endl;
//	cout << "调整后v1的元素个数为" << v1.size() << endl;
//	VPrint(v1);  //容量变小则删掉多余元素
//}
//int main()
//{
//	test1();
//	return 0;
//}

//vector容器插入和删除
//函数原型:
//push_back(ele);  //在容器末尾插入元素ele
//pop_back();  //删除最后一个元素
//insert(const_iterator pos,ele);  //迭代器pos指向的位置插入元素ele
//insert(const_iterator pos,int count,ele);  //迭代器pos指向的位置插入count个元素ele
//erase(const_iterator pos);  //删除迭代器pos指向的元素
//erase(const_iterator start,const_iterator end);  //删除迭代器start到end之间的元素
//clear();  //删除容器中的所有元素

//#include <vector>
//
//void VPrint(vector<int> v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	VPrint(v1);
//
//	v1.pop_back();  //push_back(ele);
//	VPrint(v1);
//
//	v1.insert(v1.begin()+5,100);  //insert(const_iterator pos,ele); 
//	VPrint(v1);
//
//	v1.insert(v1.begin() + 5, 5,100);  //insert(const_iterator pos,int count,ele);
//	VPrint(v1);
//
//	v1.erase(v1.begin() + 5, v1.begin() + 11);  //erase(const_iterator start,const_iterator end);
//	VPrint(v1);
//
//	v1.clear();  //clear();  //等价于v1.erase(v1.begin(), v1.end());
//	VPrint(v1);
//}
//int main()
//{
//	test1();
//	return 0;
//}

//vector容器数据存取
//函数原型:
//at(int idx);  //获取索引号idx所指向的数据
//operator[];
//front();  //返回容器中的第一个数据元素
//back();  //返回容器中的最后一个数据元素

//#include <vector>
//
//void VPrint(vector<int> v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	VPrint(v1);
//
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//
//	cout << v1.front() << endl;
//	cout << v1.back() << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//vector互换容器
//函数原型:
//swap(vec);  //将容器vec于自身容器中的元素互换

//#include <vector>
//
//void VPrint(vector<int> v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	VPrint(v1);
//
//	vector<int> v2;
//	for (int i = 10; i < 20; i++)
//	{
//		v2.push_back(i);
//	}
//	VPrint(v2);
//
//	v1.swap(v2);
//
//	cout << "互换后:" << endl;
//	VPrint(v1);
//	VPrint(v2);
//
//}
//
//void test2()
//{
//	//使用swap收缩内存空间
//	vector<int> v;
//	for (int i = 0; i < 10000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v的容量为:" << v.capacity() << endl;
//	cout << "v的元素个数为:" << v.size() << endl;
//
//	v.resize(3);
//	cout << "v的容量为:" << v.capacity() << endl;
//	cout << "v的元素个数为:" << v.size() << endl;
//
//	vector<int>(v).swap(v);  //使用swap收缩内存空间
//	//vector<int>(v):通过拷贝构造函数创建一个匿名对象，匿名对象的容量为v的实际使用的大小
//	//将匿名对象与v进行互换
//	//匿名对象会在当前行结束后回收
//	cout << "v的容量为:" << v.capacity() << endl;
//	cout << "v的元素个数为:" << v.size() << endl;
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//vector容器预留空间
//函数原型:
//reserve(int len);  //容器预留len个元素长度，预留位置不初始化，元素不可访问

//#include <vector>
//
//void test1()
//{
//	vector<int> v;
//	int num = 0;  //统计内存开辟次数
//	int* p = NULL;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//
//		if (p != &v[0])
//		{
//			p = &v[0];
//			num++;
//		}
//	}
//	cout << "内存开辟次数:" << num << endl;
//	//v.reserve(1000);
//}
//void test2()
//{
//	vector<int> v;
//	v.reserve(100000);  //预留空间  //减少内存开辟次数
//	int num = 0;  //统计内存开辟次数
//	int* p = NULL;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//
//		if (p != &v[0])
//		{
//			p = &v[0];
//			num++;
//		}
//	}
//	cout << "内存开辟次数:" << num << endl;
//}
//int main()
//{
//	test1();  //未预留空间
//	test2();  //已预留空间
//	return 0;
//}

//deque容器
//双端数组:可以对头端和尾端进行插入删除操作
//deque和vector的区别:
//vector对于头部的插入删除效率较低，数据量越大，效率越低
//deque对头部的插入和删除速度比vector快
//vector访问元素时的速度会比deque快，这和两者的内部实现有关
//deque工作原理:
//deque内部有一个中控器，中控器中维护每段缓冲区的内容，缓冲区中存放着真实的数据
//中控器维护的是每个缓冲区的地址，使得使用deque时像一片连续的内存空间
//deque的迭代器也支持随机访问

//deque的构造函数
//函数原型:
//deque<T> deqT;  //默认构造
//deque(begin,end);  //将[begin,end)区间中的元素拷贝给本身  //有参构造
//deque(n,elem);  //将n个elem拷贝给自身  //有参构造
//deque(const deque& deq);  //拷贝构造

//#include <deque>
//
//void DequePrint(const deque<int> deq)
//{
//	for (deque<int>::const_iterator it = deq.begin(); it != deq.end(); it++)  //使用只读迭代器
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	deque<int> deq1;
//	for (int i = 0; i < 10; i++)
//	{
//		deq1.push_front(i);
//	}
//	DequePrint(deq1);
//
//	deque<int> deq2(deq1.begin(),deq1.end());
//	DequePrint(deq2);
//
//	deque<int> deq3(10, 100);
//	DequePrint(deq3);
//
//	deque<int> deq4(deq3);
//	DequePrint(deq4);
//	
//}
//int main()
//{
//	test1();
//	return 0;
//}

//deque容器的赋值操作
//参考vector

//deque容器大小操作
//参考vector
//区别:deque容器无法获取容量大小，因为本身没有容量的概念，可以无限扩充

//deque容器插入和删除
//参考vector
//区别:deque可以从头部进行插入和删除

//deque容器数据存取
//参考vector

//deque容器排序操作
//函数原型:
//sort(iterator beg,iterator end);  //对beg和end区间内的元素进行排序

//#include <deque>
//#include <algorithm>
//
//void test1()
//{
//	deque<int> deq;
//	deq.push_back(5);
//	deq.push_back(1);
//	deq.push_back(3);
//	deq.push_back(6);
//	deq.push_back(8);
//	
//	for (int i = 0; i < deq.size(); i++)
//	{
//		cout << deq.at(i) << " ";
//	}
//	cout << endl;
//
//	sort(deq.begin(),deq.end());  //对deq容器内元素进行升序排序  //支持随机访问的迭代器的容器，都可以用此算法进行排序
//
//	for (int i = 0; i < deq.size(); i++)
//	{
//		cout << deq.at(i) << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//stack容器
//stack是一种先进后出的数据结构，它只有一个出口
//栈中只有顶端的元素才可以被外界使用，因此栈不允许有遍历行为
//入栈:push
//出栈:pop
//stack常用接口函数原型:
//stack<T> stack;  //默认构造
//stack(const stack& stk);  //拷贝构造
//stack& operator=(const stack& stk);  //赋值
//push(elem);  //向栈顶添加元素elem
//pop();  //从栈顶移除一个元素
//top();  //返回栈顶元素
//empty();  //判断堆栈容器是否为空
//size();  //返回栈的大小

//#include <stack>
//void test1()
//{
//	stack<int> stk;
//	for (int i = 0; i < 10; i++)
//	{
//		stk.push(i);
//	}
//	cout << "栈的大小:" << stk.size() << endl;
//	while (!stk.empty())  //栈顶不为空就进行出栈操作
//	{
//		cout << stk.top() << " ";
//		stk.pop();
//	}
//	cout << endl;
//	cout << "栈的大小:" << stk.size() << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//queue容器
//queue是一种先进先出的数据结构，它有两个出口
//队列容器允许从一端新增元素，从另一端移除元素
//队列中只有队头和队尾才可以被外界使用，因此队列不允许有遍历行为
//队列中进数据-入队-push
//队列中出数据-出队-pop
//queue容器常用接口函数原型:
//queue<T> que;  //默认构造函数
//queue(const queue& que);  //拷贝构造函数
//queue& operator=(const queue& que);  //赋值函数
//push(elem);  //在队尾添加元素elem
//pop();  //从队头移除第一个元素
//back();  //返回最后一个元素
//front();  //返回第一个元素
//empty();  //判断队列是否为空
//size();  //返回队列的大小

//#include <queue>
//
//void test1()
//{
//	queue<int> que;
//	for (int i = 0; i < 10; i++)
//	{
//		que.push(i);
//	}
//	cout << que.size() << endl;
//	while (!que.empty())
//	{
//		cout << que.front() << " ";
//		que.pop();
//	}
//	cout << endl;
//	cout << que.size() << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//list容器
//list是一种物理存储单元上非连续的存储结构，数据元素的逻辑顺序是通过链表中的指针链接实现的
//链表是由一些列的结点构成的
//结点的组成:一个是存储元素的数据域，另一个是存储下一个结点地址的指针域
//STL中的链表是一个双向循环链表:指针域中有两个指针，一个指向下一个结点，一个指向上一个结点，最后一个结点指针域中指向\
下一个结点的指针中存放的是第一个结点的地址，第一个结点指针域中存放上一个结点的指针中存放的是最后一个结点的地址
//链表的存储方式并不是连续的内存空间，因此链表list的迭代器只支持前移和后移，属于双向迭代器
//list优点:1.采取动态存储分配，不会造成内存浪费和溢出
// 2.链表执行插入和删除十分方便，修改指针即可，不需要移动大量元素
//缺点:list容器遍历速度没有数组快，且占用空间比数组大
//和vector相比list有一个重要的性质:插入操作和删除操作都不会造成原有list迭代器的失效，这在vector是不成立的
//list和vector是最常被使用的容器，两者各有优缺点


//list容器构造函数:
//list<T> list;  //默认构造
//list(beg,end);  //有参构造:将[beg,end)区间内的元素拷贝给本身
//list(n,elem);  //有参构造:将n个elem拷贝给本身
//list(const list& lst);  //拷贝构造

//#include <list>
//
//void printList(const list<int>& lst)
//{
//	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	list<int> lst1;  //list<T> list;
//	for (int i = 0; i < 10; i++)
//	{
//		lst1.push_back(i);
//	}
//
//	//遍历容器
//	printList(lst1);
//
//	list<int> lst2(lst1.begin(), lst1.end());  //list(beg,end);
//	printList(lst2);
//
//	list<int> lst3(10,100);  //list(n,elem);
//	printList(lst3);
//
//	list<int> lst4(lst2);  //list(const list& lst);
//	printList(lst4);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//list容器的赋值和交换
//函数原型:
//assign(beg,end);  //将[beg,end)区间内的数据拷贝给本身
//assign(n,elem);  //将n个elem拷贝给本身
//list& operator=(const list& lst);
//swap(lst);  //将lst与本身元素进行交换

//#include <list>
//
//void printList(const list<int>& lst)
//{
//	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	list<int> lst1;
//	for (int i = 0; i < 10; i++)
//	{
//		lst1.push_back(i);
//	}
//
//	list<int> lst2;
//	lst2.assign(lst1.begin(),lst1.end());  //assign(beg,end);
//	printList(lst2);
//
//	list<int> lst3;
//	lst3.assign(10,100);  //assign(n,elem);
//	printList(lst3);
//
//	list<int> lst4;
//	lst4 = lst2;
//	printList(lst4);  //list& operator=(const list& lst);
//
//	lst3.swap(lst4);  //swap(lst);
//	printList(lst3);
//	printList(lst4);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//list容器大小操作
//函数原型:
//size();  //返回容器中元素个数
//empty();  //判断容器是否为空
//resize(int num);  //重新指定容器的长度为num，若容器变长，则以默认值填充新位置\
若容器变短，则末尾超出容器长度的元素被删除，但容器的容量大小不变
//resize(int num,elem);  //重新指定容器的长度为num，若容器变长，则以elem值填充新位置\
若容器变短，则末尾超出容器长度的元素被删除，但容器的容量大小不变

//#include <list>
//
//void printList(const list<int>& lst)
//{
//	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	list<int> lst1;
//	
//	for (int i = 0; i < 10; i++)
//	{
//		lst1.push_back(i);
//	}
//
//	if (!lst1.empty())
//	{
//		printList(lst1);
//	}
//	cout << "lst1的元素个数为:" << lst1.size() << endl;
//
//	lst1.resize(20);
//	cout << "lst1的元素个数为:" << lst1.size() << endl;
//	printList(lst1);
//
//	lst1.resize(30,100);
//	cout << "lst1的元素个数为:" << lst1.size() << endl;
//	printList(lst1);
//
//	lst1.resize(5);
//	cout << "lst1的元素个数为:" << lst1.size() << endl;
//	printList(lst1);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//list容器的插入和删除
//函数原型:
//push_back(elem);  //在容器尾部插入元素elem
//pop_back();  //删除容器的最后一个元素
//push_front(elem);  //在容器头部插入一个元素
//pop_front();  //在容器头部删除一个元素
//insert(pos,elem);  //在pos位置插入elem元素的拷贝，返回新数据的位置
//insert(pos,n,elem);  //在pos位置插入n个elem元素，无返回值
//insert(pos,beg,end);  //在pos位置插入[beg,end)区间的数据，无返回值
//clear();  //移除容器中的所有元素
//erase(beg,end);  //删除[beg,end)区间的数据，并返回下一个数据的位置
//erase(pos);  //删除pos位置的数据，返回下一个数据的位置
//remove(elem);  //删除容器中所有与elem值匹配的元素

//#include <list>
//
//void printList(const list<int>& lst)
//{
//	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	list<int> lst1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		lst1.push_back(i);
//	}
//	printList(lst1);
//
//	list<int> lst2;
//	for (int i = 0; i < 10; i++)
//	{
//		lst2.push_front(i);
//	}
//	printList(lst2);
//
//	lst1.pop_back();
//	lst1.pop_front();
//	printList(lst1);
//
//	list<int>::iterator it = lst1.begin();
//	lst1.insert(it, 0);
//	printList(lst1);
//
//	it = lst1.begin();
//	lst1.erase(++it);
//	printList(lst1);
//
//	lst1.push_back(100);
//	lst1.push_back(100);
//	lst1.push_back(100);
//	printList(lst1);
//	lst1.remove(100);
//	printList(lst1);
//
//	lst1.clear();
//	printList(lst1);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//list容器数据存取
//函数原型:
//front();  //返回第一个元素
//back();  //返回最后一个元素

//#include <list>
//
//void printList(const list<int>& lst)
//{
//	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	list<int> lst1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		lst1.push_back(i);
//	}
//	
//	//list不支持通过[]和at()对元素进行访问
//	//原因是list本质是链表，不是用连续线性空间存储数据，迭代器也是不支持随机访问的
//
//	cout << "第一个元素:" << lst1.front() << endl;
//	cout << "最后一个元素:" << lst1.back() << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}


//list容器反转和排序
//函数原型:
//reverse();  //反转链表
//sort();  //链表排序

//#include <list>
//#include <algorithm>
//
//void printList(const list<int>& lst)
//{
//	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//bool myCompare(int v1,int v2)  //降序回调
//{
//	return v1 > v2;
//}
//void test1()
//{
//	list<int> lst1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		lst1.push_back(i);
//	}
//	
//	printList(lst1);
//
//	lst1.reverse();
//	printList(lst1);
//
//	lst1.sort();  //升序
//	printList(lst1);
//
//	//降序可以采取升序再反转的方法，也可以采用以下写法:
//	lst1.sort(myCompare);  //降序
//	printList(lst1);
//
//	//所有不支持随机访问迭代器的容器都不能使用标准算法
//	//不支持随机访问迭代器的容器，内部会提供一些相应的算法
//	//sort(lst1.begin(), lst1.end());
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//list容器排序案例

//#include <list>
//#include <algorithm>
//
//class Person
//{
//public:
//	string name;
//	int age;
//	int height;
//	Person(string name, int age, int height)
//	{
//		this->name = name;
//		this->age = age;
//		this->height = height;
//	}
//};
//void printList(const list<Person>& lst)
//{
//	for (list<Person>::const_iterator it = lst.begin(); it != lst.end(); it++)
//	{
//		cout << "姓名:" << (*it).name << " 年龄:" << (*it).age << " 身高:" << (*it).height << endl;
//		//cout << endl;
//	}
//	cout << endl;
//}
//
//bool comparePerson(Person& p1,Person&p2)  //Person类比较规则回调函数
//{
//	if (p1.age == p2.age)
//	{
//		return p1.height > p2.height;
//	}
//	else
//	{
//		return p1.age < p2.age;
//	}
//}
//
//void test1()
//{
//	list<Person> personList;
//
//	Person p1("张三",22,187);
//	Person p2("李四", 21, 168);
//	Person p3("王麻子", 25, 182);
//	Person p4("范德彪", 22, 176);
//	Person p5("赵四", 19, 171);
//
//	personList.push_back(p1);
//	personList.push_back(p2);
//	personList.push_back(p3);
//	personList.push_back(p4);
//	personList.push_back(p5);
//
//	cout << "排序前:" << endl;
//	printList(personList);
//
//	cout << "-------------------------------------" << endl;
//	cout << "排序后:" << endl;
//	personList.sort(comparePerson);  //自定义类型数据使用排序函数必须指定排序规则
//	printList(personList);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//set/multiset容器
//所有元素都会在插入时自动被排序
//set/multiset容器属于关联式容器，底层结构使用二叉树实现
//set和multiset的区别:前者不允许容器中有重复的元素，后者允许

//set构造和赋值:
//构造函数原型:
//set<T> st;  //默认构造
//set(const set& st);  //拷贝构造
//赋值函数原型:
//set& operator=(const set& st);

//#include <set>  //set和multiset的头文件均为set
//
//void printSet(const set<int>& st)
//{
//	for (set<int>::iterator it = st.begin(); it != st.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	set<int> st;
//	st.insert(10);
//	st.insert(30);
//	st.insert(40);
//	st.insert(20);
//	st.insert(50);
//	st.insert(50);  //无法插入重复元素
//	printSet(st);  //自动升序排序
//
//	set<int> st2 = st;
//	printSet(st2);
//
//	set<int> st3;
//	st3 = st;
//	printSet(st3);
//}
//int main()
//{
//	test1();
//	return 0;
//}

//set容器的大小和交换
//函数原型:
//size();  //返回容器中元素的个数
//empty();  //判断容器是否为空
//swap(st);  //将st中元素和自身进行交换

//#include <set>
//
//void printSet(const set<int>& st)
//{
//	for (set<int>::iterator it = st.begin(); it != st.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	set<int> st1;
//	st1.insert(10);
//	st1.insert(30);
//	st1.insert(40);
//	st1.insert(20);
//	st1.insert(50);
//	if (!st1.empty())
//	{
//		printSet(st1);
//	}
//
//	set<int> st2;
//	st2.insert(60);
//	st2.insert(80);
//	st2.insert(70);
//	st2.insert(100);
//	st2.insert(90);
//	printSet(st2);
//	cout << "st2中元素的个数为:" << st2.size() << endl;
//
//	st1.swap(st2);
//	printSet(st1);
//	printSet(st2);
//}
//int main()
//{
//	test1();
//	return 0;
//}

//set容器的插入和删除
//函数原型:
//inset(elem);  //在容器中插入元素elem
//clear();  //清空容器
//erase(pos);  //删除pos位置的元素，返回下一个元素的迭代器
//erase(beg,end);  //删除[beg,end)区间的所有元素，返回下一个元素的迭代器
//erase(elem);  //删除容器中值为elem的元素

//set容器查找和统计
//函数原型:
//find(key);  //查找key是否存在，若存在，返回该元素的迭代器，若不存在，返回set.end();
//count(key);  //统计key的元素个数  //返回值为0或1

//#include <set>
//
//void printSet(const set<int>& st)
//{
//	for (set<int>::iterator it = st.begin(); it != st.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	set<int> st;
//	st.insert(10);
//	st.insert(30);
//	st.insert(40);
//	st.insert(20);
//	st.insert(50);
//	
//	set<int>::iterator it = st.find(100);
//	if (it != st.end())  //查找到元素
//	{
//		cout << *it << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//
//	cout << "50的个数:" << st.count(50) << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//set和multiset的区别
//set不可以插入重复的数据，而multiset可以
//set插入数据的同时会返回插入的结果，表示插入是否成功\
set容器的插入时的返回值为一个对组(即成对出现的数据):pair<iterator,bool>，前者为插入数据的迭代器，后者为插入结果
//multiset不会检测数据，因此可以插入重复数据，multiset插入数据时返回的是所插数据的迭代器，不是对组

//#include <set>
//
//void printSet(const multiset<int>& st)
//{
//	for (set<int>::iterator it = st.begin(); it != st.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	multiset<int> mst;
//	mst.insert(20);
//	mst.insert(10);
//	mst.insert(40);
//	mst.insert(30);
//	mst.insert(20);
//
//	printSet(mst);
//
//	set<int> st;
//	pair<set<int>::iterator,bool> isInset = st.insert(10);
//	if (isInset.second)
//	{
//		cout << "插入数据成功" << endl;
//	}
//	else
//	{
//		cout << "插入数据失败" << endl;
//	}
//
//	isInset = st.insert(10);
//	if (isInset.second)
//	{
//		cout << "插入数据成功" << endl;
//	}
//	else
//	{
//		cout << "插入数据失败" << endl;
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}

//pair队组的创建
//成对出现的数据，利用队组可以返回两个数据
//函数原型:
//pair<type,type> p(value1,value2);  //默认构造
//pair<type,type> p = make_pair(value1,value2);

//pair<string,int> test1()
//{
//	pair<string, int> p("范德彪",45);
//	return p;
//}
//pair<string, int> test2()
//{
//	pair<string, int> p = make_pair("马大帅",55);
//	return p;
//}
//void test3()
//{
//	cout << "姓名:" << test1().first << " 年龄:" << test1().second << endl;
//	cout << "姓名:" << test2().first << " 年龄:" << test2().second << endl;
//}
//int main()
//{
//	test3();
//	return 0;
//}

//set容器的排序
//set容器排序默认为升序

//通过仿函数改变set容器的排序规则

////set中存放内置数据类型
//#include <set>
//
//class Compare
//{
//public:
//	bool operator()(int v1, int v2) const  //仿函数
//	{
//		return v1 > v2;
//	}
//};
//
//void printSet(const set<int>& st)
//{
//	for (set<int>::const_iterator it = st.begin(); it != st.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void printSet(const set<int,Compare>& st)
//{
//	for (set<int,Compare>::const_iterator it = st.begin(); it != st.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	set<int> st1;
//	st1.insert(50);
//	st1.insert(40);
//	st1.insert(20);
//	st1.insert(30);
//	st1.insert(10);
//	printSet(st1);
//
//	//指定set容器的排序规则
//	set<int,Compare> st2;  //<>中填入的是参数类型，故第二个参数不能使用函数名，而Compare是一个类，属于自定义类型
//	st2.insert(50);
//	st2.insert(40);
//	st2.insert(20);
//	st2.insert(30);
//	st2.insert(10);
//	printSet(st2);
//
//}
//int main()
//{
//	test1();
//	return 0;
//}

//set中存放自定义数据类型
//#include <set>
//
//class Person
//{
//public:
//	string name;
//	int age;
//	int height;
//	Person(string name,int age,int height)
//	{
//		this->name = name;
//		this->age = age;
//		this->height = height;
//	}
//	
//};
//
//class Compare
//{
//
//public:
//	bool operator()(Person v1, Person v2) const  //仿函数
//	{
//		if (v1.age == v2.age)
//		{
//			return v1.height > v1.height;
//		}
//		else
//		{
//			return v1.age < v2.age;
//		}
//	}
//};
//
//void printSet(const set<Person, Compare>& st)
//{
//	for (set<Person, Compare>::const_iterator it = st.begin(); it != st.end(); it++)
//	{
//		cout << "姓名:" << (*it).name << " 年龄:" << (*it).age << " 身高:" << (*it).height << endl;
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	//自定义的数据类型一般都要指定排序规则，否则编译器不知到该怎么进行排序
//	set<Person, Compare> personSet;
//	Person p1 = { "范德彪",45,175 };  //隐式转换法调用有参构造
//	Person p2 = Person("马大帅",55,170);  //显示法调用有参构造
//	Person p3("张三",25,185);
//	Person p4("李四", 25, 199);  //年龄和p3重复，插入失败
//	Person p5("王麻子", 45, 176);  //年龄和p1重复，插入失败
//
//	personSet.insert(p1);
//	personSet.insert(p2);
//	personSet.insert(p3);
//	personSet.insert(p4);
//	personSet.insert(p5);
//
//	printSet(personSet);
//
//
//}
//int main()
//{
//	test1();
//	return 0;
//}

//map/multimap容器
//map中所有元素都是pair
//pair中第一个元素为key(键值)，起到索引作用(类似于身份证号)，第二个元素为value(实值)
//所有元素都会根据键值自动排序
//map/multimap属于关联式容器，底层结构使用二叉树实现
//优点:可以根据键值快速找到value值
//map和multimap的区别:
//map中不允许有重复的key值元素(value值允许)而multimap允许

//map构造和赋值
//构造函数原型:
//map<T1，T2> mp;  //默认构造
//map(const map& mp);  //拷贝构造
//赋值函数原型:
//map& operator=(const map& mp);

//#include <map>
//
//void printMap(const map<int,int>& mp)
//{
//	for (map<int, int>::const_iterator it = mp.begin(); it != mp.end(); it++)
//	{
//		cout << "key值:" << it->first << " value值:" << it->second << endl;
//	}
//	cout << endl;
//}
//void test1()
//{
//	map<int, int> mp;
//	mp.insert(pair<int,int>(001,10));  //通过匿名对组进行数据插入
//	mp.insert(pair<int, int>(003, 30));
//	mp.insert(pair<int, int>(002, 20));
//	mp.insert(pair<int, int>(005, 50));
//	mp.insert(pair<int, int>(004, 40));
//	printMap(mp);
//
//	map<int, int> mp2(mp);
//	printMap(mp2);
//}
//int main()
//{
//	test1();
//	return 0;
//}

//map容器大小和交换
//函数原型:
//size();  //返回容器中元素的个数
//empty();  //判断容器是否为空
//swap(st);  //将st中的元素和自身进行交换

//map容器的插入和删除
//函数原型:
//insert(elem);  //在容器中插入元素  //一共四种插入方法
//clear();  //清除所有元素
//erase(pos);  //删除pos迭代器所指向的元素并返回下一个元素的迭代器
//erase(beg,end);  //删除区间[beg,end)的所有元素，并返回下一个元素的迭代器
//erase(key);  //删除容器中键值为key的元素

//#include <map>
//
//void printMap(const map<int,int>& mp)
//{
//	for (map<int, int>::const_iterator it = mp.begin(); it != mp.end(); it++)
//	{
//		cout << "key值:" << it->first << " value值:" << it->second << endl;
//	}
//	cout << endl;
//}
//void test1()
//{
//	map<int, int> mp;
//	mp.insert(pair<int,int>(001,10));  //第一种插入方法
//	mp.insert(make_pair(002,20));  //第二种插入方法
//	mp.insert(map<int,int>::value_type(003, 30));  //第三种插入方法
//	mp[004] = 40;  //第四种插入方法  //不建议使用此种方法进行插入，但可以使用此种方法访问相应键值的value值
//	cout << mp[005] << endl;  //如果键值有误，第四种插入方法会自动创建一个相应键值且value值为0的键值对
//	cout << mp[004] << endl;  //访问键值为004的value的值
//	printMap(mp);
//
//	mp.erase(mp.begin());
//	printMap(mp);
//
//	mp.erase(005);
//	printMap(mp);
//}
//int main()
//{
//	test1();
//	return 0;
//}

//map容器查找和统计
//函数原型:
//find(key);  //查找key值是否存在，若存在，返回该键值元素的迭代器，若不存在，返回map.end()
//count(key);  //统计键值为key的元素的个数

//map容器排序
//map容器默认从小到大排序


//#include <map>
//
//class Compare
//{
//public:
//	bool operator()(int v1, int v2) const
//	{
//		return v1 > v2;
//	}
//};
//
//void printMap(const map<int,int, Compare>& mp)
//{
//	for (map<int, int, Compare>::const_iterator it = mp.begin(); it != mp.end(); it++)
//	{
//		cout << "key值:" << it->first << " value值:" << it->second << endl;
//	}
//	cout << endl;
//}
//void test1()
//{
//	map<int, int, Compare> mp;
//	mp.insert(make_pair(001,10));
//	mp.insert(make_pair(004, 40));
//	mp.insert(make_pair(003, 30));
//	mp.insert(make_pair(005, 50));
//	mp.insert(make_pair(002, 20));
//
//	printMap(mp);
//
//}
//int main()
//{
//	test1();
//	return 0;
//}