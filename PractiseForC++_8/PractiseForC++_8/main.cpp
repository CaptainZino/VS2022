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