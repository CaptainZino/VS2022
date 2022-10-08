#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//操作文件的三大类:
//ofstream:写操作
//ifstream:读操作
//fstream:读写操作

//写文件:
//1.包含头文件:#include <fstream>
//2.创建流对象:ofstream ofs; 
//3.打开文件:ofs.open("文件路径",打开方式);
//ios::in 以读的方式打开文件
//ios::out 以写的方式打开文件
//ios::ate 初始位置为文件末尾
//ios::app 追加方式写文件
//ios::trunc 如果文件存在先删除再创建
//ios::binary 二进制方式
//文件打开方式可以配合使用,利用|操作符,例如用二进制方式写文件: ios::binary|ios::out
//4.写数据:ofs<<"写入的数据";
//5.关闭文件:ofs.close();
//void test1()
//{
//	ofstream ofs;
//	ofs.open("./test.txt", ios::trunc|ios::out);
//	ofs << "hello there" << endl;
//	ofs << "hello world" << endl;
//	ofs.close();
//	
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//读文件
//1.包含头文件:#include <fstream>
//2.创建流对象:ifstream ifs; 
//3.打开文件并判断文件是否打开成功:ifs.open("文件路径",打开方式);
//4.读数据:四种读取方式;
//5.关闭文件:ifs.close();

//void test1()
//{
//	ifstream ifs;
//	ifs.open("./test.txt",ios::in);
//	if (!ifs.is_open()) 
// {
//	
//		perror("open file");
//		return;
//	}
//	第一种读取方法:  //遇到空格和换行就进行下一次读取  
//	char buf[1024] = { 0 };
//	while (ifs >> buf) 
//	{
//	
//		cout << buf << endl;
//	}
//
//	第二种读取方法:  //遇到换行进行下一次读取
//	char buf[1024] = { 0 };
//	while (ifs.getline(buf,1024)) 
//	{
//	
//		cout << buf << endl;;
//	}
//
//	//第三种读取方法  //使用全局的getline函数
//	string buf;
//	while (getline(ifs, buf)) 
//	{
//	
//		cout << buf << endl;
//	}
//
//	//第四种读取方法  //不推荐
//	char c;  //int?
//	while ((c = ifs.get()) != EOF) 
//	{
//		cout << c;
//	}
//
//	ifs.close();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//二进制写文件
//二进制方式写文件主要利用流对象调用函数write
//函数原型为:ostream& write(const char* buffer,int len)
//buffer指向内存中的一段存储空间，len为读写的字节数

//class Person
//{
//public:
//	char name[64];  //二进制写字符串时最好不要用string
//	int age;
//};
//
//void test1()
//{
//	ofstream ofs("person.txt", ios::out | ios::binary);   //通过构造函数指定文件打开路径和方式
//	//ofs.open("person.txt",ios::out|ios::binary);
//	Person p = {"张三",33};
//	ofs.write((const char*)&p,sizeof(Person));
//	ofs.close();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//二进制读文件
//二进制方式写文件主要利用流对象调用函数read
//函数原型为:istream& read(char* buffer,int len)
//buffer指向内存中的一段存储空间，len为读写的字节数

//class Person
//{
//public:
//	char name[64];  //二进制写字符串时最好不要用string
//	int age;
//};
//
//void test1()
//{
//	ifstream ifs("person.txt", ios::in | ios::binary);   //通过构造函数指定文件打开路径和方式
//	if (!ifs.is_open())
//	{
//		perror("open file");
//		return;
//	}
//	Person p;
//	cout << p.name << endl;
//	cout << p.age << endl;
//	cout << "------------------------------------" << endl;
//	ifs.read((char*)&p, sizeof(Person));
//	ifs.close();
//	cout << p.name << endl;
//	cout << p.age << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}