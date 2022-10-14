#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//STL:Standard Template Library(��׼ģ���)
//STL�ӹ����Ϸ�Ϊ:����(container)���㷨(algorithm)�͵�����(iterator)
//�������㷨֮��ͨ�������������޷�����
//STL�������еĴ��붼������ģ������ߺ���ģ��

//STL�������:�������㷨�����������º�����������(�����)���ռ�������
//����:�������ݽṹ����vector��list��deque��set��map�ȣ������������
//�㷨:���ֳ��õ��㷨����sort��find��copy��for_each��
//������:�������������㷨֮��Ľ��ϼ�
//�º���:��Ϊ���ƺ���������Ϊ�㷨��ĳ�ֲ���
//������:һ�����������������º������ߵ������ӿڵĶ���
//�ռ�������:����ռ�����������

//����:����ʽ�����͹���ʽ����
//����ʽ����:ǿ��ֵ����������ʽ�����е�ÿ��Ԫ�ؾ��й̶���λ��
//����ʽ����:�������ṹ����Ԫ��֮��û���ϸ�������ϵ�˳���ϵ

//�㷨:�ʱ��㷨�ͷ��ʱ��㷨
//�ʱ��㷨:��������л����������Ԫ�ص����ݣ����翽�����滻��ɾ����
//���ʱ��㷨:��������в������������Ԫ�ص����ݣ�������ҡ�������������Ѱ�Ҽ�ֵ��

//������:�ṩһ�ַ�����ʹ֮�ܹ��������ĳ�����������ĸ���Ԫ�أ��������豩¶���������ڲ���ʾ��ʽ��ÿ�����������Լ�ר��\
�ĵ���������������ʹ�÷ǳ�������ָ��(��ʵ��Ϊ��ģ��)
//����������:����������������������ǰ���������˫���������������ʵ�����

//vector�����������
//#include <vector>  //����ͷ�ļ�
//#include <algorithm>  //��׼�㷨ͷ�ļ�
//
//void myPrint(int val)  //�������ݴ�ӡ�ص�����
//{
//	cout << val << endl;
//}
//void test1()
//{
//	vector<int> v1;  //����һ��vector���������Կ�����һ������
//	v1.push_back(10);  //�������в�������
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//	//ͨ�����������������е�����
//	vector<int>::iterator itBegin = v1.begin();  //��ʼ��������ָ�������е�һ��Ԫ�ص�λ��
//	vector<int>::iterator itEnd = v1.end();  //������������ָ�����������һ��Ԫ�ص���һ��λ��
//
//	//������ʽһ
//	/*while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}*/
//
//	//������ʽ��
//	/*for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << endl;
//	}*/
//
//	//������ʽ��:����STL�ṩ�ı����㷨
//	for_each(v1.begin(), v1.end(), myPrint);  //���������㷨
//
//
//}
//
//int main()
//{
//	test1();
//}

//vector����Զ�������
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
//void myPrint(Person p)  //Person���ӡ�ص�����
//{
//	cout << "����:" << p.name << " ����:" << p.age << endl;
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
//		//cout << "����:" << (*it).name << " ����:" << (*it).age << endl;
//		cout << "����:" << it->name << " ����:" << it->age << endl;
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

//vcetor����Զ������͵�ָ��
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
//void myPrint(Person* p)  //Person���ӡ�ص�����
//{
//	cout << "����:" << p->name << " ����:" << p->age << endl;
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
//		cout << "����:" << (*it)->name << " ����:" << (*it)->age << endl;
//	}
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//vector������Ƕ������
//#include <vector>
//#include <algorithm>
//
//void myPrint(vector<int> v)  //�������ݴ�ӡ�ص�����
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
//	//for_each(v.begin(),v.end(),myPrint);  //�㷨����
//
//	//*it�ȼ���<vector<int>>�е�����
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

//string����
//string�ı�����һ���࣬����ڲ���װ��char*,��������ַ�����string��һ��char*���͵�����
//string����char*��������ڴ棬���õ��ĸ�ֵԽ���ȡֵԽ�磬�����ڲ����и���
//string���캯��:
//string();  //Ĭ�Ϲ��죬����һ�����ַ���
//string(const char* s);  //�вι��죬ʹ���ַ���s���г�ʼ��
//string(int n,char c);  //�вι��죬ʹ��n���ַ�c���г�ʼ��
//string(const string& str);  //�������죬ʹ��string����str��ʼ��

//void test1()
//{
//	const char* s = "hello there";
//	string s1;  //Ĭ�Ϲ���
//
//	string s2(s);  //�вι���
//	cout << s2 << endl;
//
//	string s3(s2);  //��������
//	cout << s3 << endl;
//
//	string s4(10,'a');  //�вι���
//	cout << s4 << endl;
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//string��ֵ
//��ֵ����ԭ��:
//string& operator=(const char* s);
//string& operator=(const string& s);
//string& operator=(const char c);
//string& assign(const char* s);
//string& assign(const char* s, int n);  //���ַ���s��ǰn���ַ�����string
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

//�ַ���ƴ��
//ƴ�Ӻ���ԭ��
//string& operator+=(const char* str);
//string& operator+=(const char c);
//string& operator+=(const string& str);
//string& append(const char* s);
//string& append(const char* s,int n);  //���ַ���s��ǰn���ַ�ƴ�ӵ���ǰ�ַ�����ĩβ
//string& append(const string& s);
//string& append(const string& s,int pos,int n);  //���ַ���s�д�pos��ʼ��n���ַ�ƴ�ӵ���ǰ�ַ�����ĩβ

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

//�ַ������Һ��滻
//����ԭ��:
//int find(const string& str,int pos = 0) const;  //��pos��ʼ����str��һ�γ��ֵ�λ��
//int find(const char* s,int pos = 0) const;  //��pos��ʼ����s��һ�γ��ֵ�λ��
//int find(const char* s,int pos, int n) const;  //��pos��ʼ����s��ǰn���ַ���һ�γ��ֵ�λ��
//int find(const char c,int pos = 0) const;  //��pos��ʼ�����ַ�c��һ�γ��ֵ�λ��
//int rfind(const string& str,int pos = npos) const;  //��pos��ʼ����str���һ�γ��ֵ�λ��
//int rfind(const char* s,int pos = npos) const;  //��pos��ʼ����s���һ�γ��ֵ�λ��
//int rfind(const char* s,int pos, int n) const;  //��pos��ʼ����s��ǰn���ַ����һ�γ��ֵ�λ��
//int rfind(const char c,int pos = 0) const;  //��pos��ʼ�����ַ�c���һ�γ��ֵ�λ��
//string& replace(int pos,int n,const string& str);  //����pos��ʼ��n���ַ��滻Ϊstr
//string& replace(int pos,int n,const char* s);  //����pos��ʼ��n���ַ��滻Ϊs

//void test1()
//{
//	string str1 = "abcdefghijklmn";
//	string s = "hijk";
//	cout << "hijk��λ��:" << str1.find(s) << endl;  //posΪĬ�ϲ��������Բ���  //����ʧ�ܷ���-1
//	//int find(const string& str,int pos = 0) const;
//
//	string str2 = "abcdefghijklmn";
//	cout << "hijk��λ��:" << str2.find("hijk", 0) << endl;  //int find(const char* s, int pos = 0) const;
//
//	string str3 = "abcdefghijklmn";
//	cout << "de��λ��:" << str3.find("defg", 0,2) << endl;  //int find(const char* s,int pos, int n) const;
//
//	string str4 = "abcdefghijklmn";
//	cout << "f��λ��:" << str4.find('f', 0) << endl;  //int find(const char c,int pos = 0) const;
//
//	string str5 = "abcdefghijklmn";
//	string s1 = "lmn";
//	cout << "lmn�����һ��λ��:" << str5.rfind(s1, 14) << endl;  //int rfind(const string& str,int pos = npos) const;
//	cout << "lmn�����һ��λ��:" << str5.rfind(s1) << endl;  //posΪĬ�ϲ��������Բ���
//	//rfindĬ�ϴ��ַ���ĩβ��ʼ����
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

//�ַ����Ƚ�
//����ԭ��:
//int compare(const string& s) const;
//int compare(const char* s) const;

//void test1()
//{
//	string str1 = "hello there";
//	string str2(str1);
//	string str3 = "hello word";
//	cout << "str1��str2�Ƚ�:" << str1.compare(str2) << endl;  //�Ƚ�ÿ���ַ���asscall��ֵ����ͬ����0
//	cout << "str1��str3�Ƚ�:" << str1.compare(str3) << endl;  //str1��str3С����-1
//	cout << "str3��str1�Ƚ�:" << str3.compare(str1) << endl;  //str3��str1�󷵻�1
//
//}
//int main()
//{
//	test1();
//	return 0;
//}

//�ַ���ȡ
//����ԭ��:
//char& operator[](int n);  //ͨ��[]ȡ�ַ�
//char& at(int n);  //ͨ��at����ȡ�ַ�

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

//�ַ��������ɾ��
//����ԭ��:
//string& insert(int pos,const char* s);
//string& insert(int pos,const string& str);
//string& insert(int pos,int n, char c);  //��ָ��λ�ò���n���ַ�c
//string& erase(int pos,int n = npos);  //��pos��ʼɾ��n���ַ�

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

//�ִ���ȡ
//����ԭ��:
//string substr(int pos = 0,int n = npos) const  //��ȡ��pos��ʼ��n���ַ���ɵ��ַ���

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

//vector����
//vector�������������ƣ�Ҳ��Ϊ��������
//vector���������������:�����Ǿ�̬�ռ䣬��vector�������Զ�̬��չ
//��̬��չ��������ԭ�ռ�֮�������¿ռ䣬������һ�����Ŀռ䣬Ȼ��ԭ���ݿ������¿ռ䲢ͬʱ�ͷ�ԭ�ռ�
//vector�����ĵ�������֧��������ʵĵ�����

//vector�������캯��
//����ԭ��:
//vector<T> v;  //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
//vector(v.begin(),v.end());  //��v[begin(),end())�����е�Ԫ�ؿ���������
//vector(n,elem);  //��n��elem����������,�вι���
//vector(const vector& vec);  //��������

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
//	vector<int> v1;  //Ĭ�Ϲ���
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

//vector������ֵ
//����ԭ��:
//vector& operator=(const vector& vec);
//assign(begin,end);  //��[begin,end)��������ݿ�����ֵ������
//assign(n,elem);  //��n��elem������ֵ������

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


//vector�����������ʹ�С
//����ԭ��:
//empty();  //�ж������Ƿ�Ϊ��
//capacity();  //��ȡ����������
//size();  //��ȡ������Ԫ�صĸ���
//resize(int num);  //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ��\
��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ������������������С����
//resize(int num,elem);  //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ��\
��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ������������������С����

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
//		cout << "v1������Ϊ" << v1.capacity() << endl;
//		cout << "v1��Ԫ�ظ���Ϊ" << v1.size() << endl;
//		VPrint(v1);
//	}
//	else
//	{
//		cout << "v1Ϊ��" << endl;
//	}
//
//	v1.resize(15);
//	cout << "������v1������Ϊ" << v1.capacity() << endl;
//	cout << "������v1��Ԫ�ظ���Ϊ" << v1.size() << endl;
//	VPrint(v1);  //Ĭ���������
//
//	v1.resize(20,100);
//	cout << "������v1������Ϊ" << v1.capacity() << endl;
//	cout << "������v1��Ԫ�ظ���Ϊ" << v1.size() << endl;
//	VPrint(v1);
//
//	v1.resize(5);
//	cout << "������v1������Ϊ" << v1.capacity() << endl;
//	cout << "������v1��Ԫ�ظ���Ϊ" << v1.size() << endl;
//	VPrint(v1);  //������С��ɾ������Ԫ��
//}
//int main()
//{
//	test1();
//	return 0;
//}

//vector���������ɾ��
//����ԭ��:
//push_back(ele);  //������ĩβ����Ԫ��ele
//pop_back();  //ɾ�����һ��Ԫ��
//insert(const_iterator pos,ele);  //������posָ���λ�ò���Ԫ��ele
//insert(const_iterator pos,int count,ele);  //������posָ���λ�ò���count��Ԫ��ele
//erase(const_iterator pos);  //ɾ��������posָ���Ԫ��
//erase(const_iterator start,const_iterator end);  //ɾ��������start��end֮���Ԫ��
//clear();  //ɾ�������е�����Ԫ��

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
//	v1.clear();  //clear();  //�ȼ���v1.erase(v1.begin(), v1.end());
//	VPrint(v1);
//}
//int main()
//{
//	test1();
//	return 0;
//}

//vector�������ݴ�ȡ
//����ԭ��:
//at(int idx);  //��ȡ������idx��ָ�������
//operator[];
//front();  //���������еĵ�һ������Ԫ��
//back();  //���������е����һ������Ԫ��

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

//vector��������
//����ԭ��:
//swap(vec);  //������vec�����������е�Ԫ�ػ���

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
//	cout << "������:" << endl;
//	VPrint(v1);
//	VPrint(v2);
//
//}
//
//void test2()
//{
//	//ʹ��swap�����ڴ�ռ�
//	vector<int> v;
//	for (int i = 0; i < 10000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v������Ϊ:" << v.capacity() << endl;
//	cout << "v��Ԫ�ظ���Ϊ:" << v.size() << endl;
//
//	v.resize(3);
//	cout << "v������Ϊ:" << v.capacity() << endl;
//	cout << "v��Ԫ�ظ���Ϊ:" << v.size() << endl;
//
//	vector<int>(v).swap(v);  //ʹ��swap�����ڴ�ռ�
//	//vector<int>(v):ͨ���������캯������һ�����������������������Ϊv��ʵ��ʹ�õĴ�С
//	//������������v���л���
//	//����������ڵ�ǰ�н��������
//	cout << "v������Ϊ:" << v.capacity() << endl;
//	cout << "v��Ԫ�ظ���Ϊ:" << v.size() << endl;
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//vector����Ԥ���ռ�
//����ԭ��:
//reserve(int len);  //����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���

//#include <vector>
//
//void test1()
//{
//	vector<int> v;
//	int num = 0;  //ͳ���ڴ濪�ٴ���
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
//	cout << "�ڴ濪�ٴ���:" << num << endl;
//	//v.reserve(1000);
//}
//void test2()
//{
//	vector<int> v;
//	v.reserve(100000);  //Ԥ���ռ�  //�����ڴ濪�ٴ���
//	int num = 0;  //ͳ���ڴ濪�ٴ���
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
//	cout << "�ڴ濪�ٴ���:" << num << endl;
//}
//int main()
//{
//	test1();  //δԤ���ռ�
//	test2();  //��Ԥ���ռ�
//	return 0;
//}

//deque����
//˫������:���Զ�ͷ�˺�β�˽��в���ɾ������
//deque��vector������:
//vector����ͷ���Ĳ���ɾ��Ч�ʽϵͣ�������Խ��Ч��Խ��
//deque��ͷ���Ĳ����ɾ���ٶȱ�vector��
//vector����Ԫ��ʱ���ٶȻ��deque�죬������ߵ��ڲ�ʵ���й�
//deque����ԭ��:
//deque�ڲ���һ���п������п�����ά��ÿ�λ����������ݣ��������д������ʵ������
//�п���ά������ÿ���������ĵ�ַ��ʹ��ʹ��dequeʱ��һƬ�������ڴ�ռ�
//deque�ĵ�����Ҳ֧���������

//deque�Ĺ��캯��
//����ԭ��:
//deque<T> deqT;  //Ĭ�Ϲ���
//deque(begin,end);  //��[begin,end)�����е�Ԫ�ؿ���������  //�вι���
//deque(n,elem);  //��n��elem����������  //�вι���
//deque(const deque& deq);  //��������

//#include <deque>
//
//void DequePrint(const deque<int> deq)
//{
//	for (deque<int>::const_iterator it = deq.begin(); it != deq.end(); it++)  //ʹ��ֻ��������
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

//deque�����ĸ�ֵ����
//�ο�vector

//deque������С����
//�ο�vector
//����:deque�����޷���ȡ������С����Ϊ����û�������ĸ��������������

//deque���������ɾ��
//�ο�vector
//����:deque���Դ�ͷ�����в����ɾ��

//deque�������ݴ�ȡ
//�ο�vector

//deque�����������
//����ԭ��:
//sort(iterator beg,iterator end);  //��beg��end�����ڵ�Ԫ�ؽ�������

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
//	sort(deq.begin(),deq.end());  //��deq������Ԫ�ؽ�����������  //֧��������ʵĵ��������������������ô��㷨��������
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

//stack����
//stack��һ���Ƚ���������ݽṹ����ֻ��һ������
//ջ��ֻ�ж��˵�Ԫ�زſ��Ա����ʹ�ã����ջ�������б�����Ϊ
//��ջ:push
//��ջ:pop
//stack���ýӿں���ԭ��:
//stack<T> stack;  //Ĭ�Ϲ���
//stack(const stack& stk);  //��������
//stack& operator=(const stack& stk);  //��ֵ
//push(elem);  //��ջ�����Ԫ��elem
//pop();  //��ջ���Ƴ�һ��Ԫ��
//top();  //����ջ��Ԫ��
//empty();  //�ж϶�ջ�����Ƿ�Ϊ��
//size();  //����ջ�Ĵ�С

//#include <stack>
//void test1()
//{
//	stack<int> stk;
//	for (int i = 0; i < 10; i++)
//	{
//		stk.push(i);
//	}
//	cout << "ջ�Ĵ�С:" << stk.size() << endl;
//	while (!stk.empty())  //ջ����Ϊ�վͽ��г�ջ����
//	{
//		cout << stk.top() << " ";
//		stk.pop();
//	}
//	cout << endl;
//	cout << "ջ�Ĵ�С:" << stk.size() << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//queue����
//queue��һ���Ƚ��ȳ������ݽṹ��������������
//�������������һ������Ԫ�أ�����һ���Ƴ�Ԫ��
//������ֻ�ж�ͷ�Ͷ�β�ſ��Ա����ʹ�ã���˶��в������б�����Ϊ
//�����н�����-���-push
//�����г�����-����-pop
//queue�������ýӿں���ԭ��:
//queue<T> que;  //Ĭ�Ϲ��캯��
//queue(const queue& que);  //�������캯��
//queue& operator=(const queue& que);  //��ֵ����
//push(elem);  //�ڶ�β���Ԫ��elem
//pop();  //�Ӷ�ͷ�Ƴ���һ��Ԫ��
//back();  //�������һ��Ԫ��
//front();  //���ص�һ��Ԫ��
//empty();  //�ж϶����Ƿ�Ϊ��
//size();  //���ض��еĴ�С

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

//list����
//list��һ������洢��Ԫ�Ϸ������Ĵ洢�ṹ������Ԫ�ص��߼�˳����ͨ�������е�ָ������ʵ�ֵ�
//��������һЩ�еĽ�㹹�ɵ�
//�������:һ���Ǵ洢Ԫ�ص���������һ���Ǵ洢��һ������ַ��ָ����
//STL�е�������һ��˫��ѭ������:ָ������������ָ�룬һ��ָ����һ����㣬һ��ָ����һ����㣬���һ�����ָ������ָ��\
��һ������ָ���д�ŵ��ǵ�һ�����ĵ�ַ����һ�����ָ�����д����һ������ָ���д�ŵ������һ�����ĵ�ַ
//����Ĵ洢��ʽ�������������ڴ�ռ䣬�������list�ĵ�����ֻ֧��ǰ�ƺͺ��ƣ�����˫�������
//list�ŵ�:1.��ȡ��̬�洢���䣬��������ڴ��˷Ѻ����
// 2.����ִ�в����ɾ��ʮ�ַ��㣬�޸�ָ�뼴�ɣ�����Ҫ�ƶ�����Ԫ��
//ȱ��:list���������ٶ�û������죬��ռ�ÿռ�������
//��vector���list��һ����Ҫ������:���������ɾ���������������ԭ��list��������ʧЧ������vector�ǲ�������
//list��vector�����ʹ�õ����������߸�����ȱ��


//list�������캯��:
//list<T> list;  //Ĭ�Ϲ���
//list(beg,end);  //�вι���:��[beg,end)�����ڵ�Ԫ�ؿ���������
//list(n,elem);  //�вι���:��n��elem����������
//list(const list& lst);  //��������

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
//	//��������
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

//list�����ĸ�ֵ�ͽ���
//����ԭ��:
//assign(beg,end);  //��[beg,end)�����ڵ����ݿ���������
//assign(n,elem);  //��n��elem����������
//list& operator=(const list& lst);
//swap(lst);  //��lst�뱾��Ԫ�ؽ��н���

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

//list������С����
//����ԭ��:
//size();  //����������Ԫ�ظ���
//empty();  //�ж������Ƿ�Ϊ��
//resize(int num);  //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ��\
��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ������������������С����
//resize(int num,elem);  //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ��\
��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ������������������С����

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
//	cout << "lst1��Ԫ�ظ���Ϊ:" << lst1.size() << endl;
//
//	lst1.resize(20);
//	cout << "lst1��Ԫ�ظ���Ϊ:" << lst1.size() << endl;
//	printList(lst1);
//
//	lst1.resize(30,100);
//	cout << "lst1��Ԫ�ظ���Ϊ:" << lst1.size() << endl;
//	printList(lst1);
//
//	lst1.resize(5);
//	cout << "lst1��Ԫ�ظ���Ϊ:" << lst1.size() << endl;
//	printList(lst1);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//list�����Ĳ����ɾ��
//����ԭ��:
//push_back(elem);  //������β������Ԫ��elem
//pop_back();  //ɾ�����������һ��Ԫ��
//push_front(elem);  //������ͷ������һ��Ԫ��
//pop_front();  //������ͷ��ɾ��һ��Ԫ��
//insert(pos,elem);  //��posλ�ò���elemԪ�صĿ��������������ݵ�λ��
//insert(pos,n,elem);  //��posλ�ò���n��elemԪ�أ��޷���ֵ
//insert(pos,beg,end);  //��posλ�ò���[beg,end)��������ݣ��޷���ֵ
//clear();  //�Ƴ������е�����Ԫ��
//erase(beg,end);  //ɾ��[beg,end)��������ݣ���������һ�����ݵ�λ��
//erase(pos);  //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
//remove(elem);  //ɾ��������������elemֵƥ���Ԫ��

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

//list�������ݴ�ȡ
//����ԭ��:
//front();  //���ص�һ��Ԫ��
//back();  //�������һ��Ԫ��

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
//	//list��֧��ͨ��[]��at()��Ԫ�ؽ��з���
//	//ԭ����list�����������������������Կռ�洢���ݣ�������Ҳ�ǲ�֧��������ʵ�
//
//	cout << "��һ��Ԫ��:" << lst1.front() << endl;
//	cout << "���һ��Ԫ��:" << lst1.back() << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}


//list������ת������
//����ԭ��:
//reverse();  //��ת����
//sort();  //��������

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
//bool myCompare(int v1,int v2)  //����ص�
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
//	lst1.sort();  //����
//	printList(lst1);
//
//	//������Բ�ȡ�����ٷ�ת�ķ�����Ҳ���Բ�������д��:
//	lst1.sort(myCompare);  //����
//	printList(lst1);
//
//	//���в�֧��������ʵ�����������������ʹ�ñ�׼�㷨
//	//��֧��������ʵ��������������ڲ����ṩһЩ��Ӧ���㷨
//	//sort(lst1.begin(), lst1.end());
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//list����������

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
//		cout << "����:" << (*it).name << " ����:" << (*it).age << " ���:" << (*it).height << endl;
//		//cout << endl;
//	}
//	cout << endl;
//}
//
//bool comparePerson(Person& p1,Person&p2)  //Person��ȽϹ���ص�����
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
//	Person p1("����",22,187);
//	Person p2("����", 21, 168);
//	Person p3("������", 25, 182);
//	Person p4("���±�", 22, 176);
//	Person p5("����", 19, 171);
//
//	personList.push_back(p1);
//	personList.push_back(p2);
//	personList.push_back(p3);
//	personList.push_back(p4);
//	personList.push_back(p5);
//
//	cout << "����ǰ:" << endl;
//	printList(personList);
//
//	cout << "-------------------------------------" << endl;
//	cout << "�����:" << endl;
//	personList.sort(comparePerson);  //�Զ�����������ʹ������������ָ���������
//	printList(personList);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//set/multiset����
//����Ԫ�ض����ڲ���ʱ�Զ�������
//set/multiset�������ڹ���ʽ�������ײ�ṹʹ�ö�����ʵ��
//set��multiset������:ǰ�߲��������������ظ���Ԫ�أ���������

//set����͸�ֵ:
//���캯��ԭ��:
//set<T> st;  //Ĭ�Ϲ���
//set(const set& st);  //��������
//��ֵ����ԭ��:
//set& operator=(const set& st);

//#include <set>  //set��multiset��ͷ�ļ���Ϊset
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
//	st.insert(50);  //�޷������ظ�Ԫ��
//	printSet(st);  //�Զ���������
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

//set�����Ĵ�С�ͽ���
//����ԭ��:
//size();  //����������Ԫ�صĸ���
//empty();  //�ж������Ƿ�Ϊ��
//swap(st);  //��st��Ԫ�غ�������н���

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
//	cout << "st2��Ԫ�صĸ���Ϊ:" << st2.size() << endl;
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

//set�����Ĳ����ɾ��
//����ԭ��:
//inset(elem);  //�������в���Ԫ��elem
//clear();  //�������
//erase(pos);  //ɾ��posλ�õ�Ԫ�أ�������һ��Ԫ�صĵ�����
//erase(beg,end);  //ɾ��[beg,end)���������Ԫ�أ�������һ��Ԫ�صĵ�����
//erase(elem);  //ɾ��������ֵΪelem��Ԫ��

//set�������Һ�ͳ��
//����ԭ��:
//find(key);  //����key�Ƿ���ڣ������ڣ����ظ�Ԫ�صĵ��������������ڣ�����set.end();
//count(key);  //ͳ��key��Ԫ�ظ���  //����ֵΪ0��1

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
//	if (it != st.end())  //���ҵ�Ԫ��
//	{
//		cout << *it << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//
//	cout << "50�ĸ���:" << st.count(50) << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//set��multiset������
//set�����Բ����ظ������ݣ���multiset����
//set�������ݵ�ͬʱ�᷵�ز���Ľ������ʾ�����Ƿ�ɹ�\
set�����Ĳ���ʱ�ķ���ֵΪһ������(���ɶԳ��ֵ�����):pair<iterator,bool>��ǰ��Ϊ�������ݵĵ�����������Ϊ������
//multiset���������ݣ���˿��Բ����ظ����ݣ�multiset��������ʱ���ص����������ݵĵ����������Ƕ���

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
//		cout << "�������ݳɹ�" << endl;
//	}
//	else
//	{
//		cout << "��������ʧ��" << endl;
//	}
//
//	isInset = st.insert(10);
//	if (isInset.second)
//	{
//		cout << "�������ݳɹ�" << endl;
//	}
//	else
//	{
//		cout << "��������ʧ��" << endl;
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}

//pair����Ĵ���
//�ɶԳ��ֵ����ݣ����ö�����Է�����������
//����ԭ��:
//pair<type,type> p(value1,value2);  //Ĭ�Ϲ���
//pair<type,type> p = make_pair(value1,value2);

//pair<string,int> test1()
//{
//	pair<string, int> p("���±�",45);
//	return p;
//}
//pair<string, int> test2()
//{
//	pair<string, int> p = make_pair("���˧",55);
//	return p;
//}
//void test3()
//{
//	cout << "����:" << test1().first << " ����:" << test1().second << endl;
//	cout << "����:" << test2().first << " ����:" << test2().second << endl;
//}
//int main()
//{
//	test3();
//	return 0;
//}

//set����������
//set��������Ĭ��Ϊ����

//ͨ���º����ı�set�������������

////set�д��������������
//#include <set>
//
//class Compare
//{
//public:
//	bool operator()(int v1, int v2) const  //�º���
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
//	//ָ��set�������������
//	set<int,Compare> st2;  //<>��������ǲ������ͣ��ʵڶ�����������ʹ�ú���������Compare��һ���࣬�����Զ�������
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

//set�д���Զ�����������
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
//	bool operator()(Person v1, Person v2) const  //�º���
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
//		cout << "����:" << (*it).name << " ����:" << (*it).age << " ���:" << (*it).height << endl;
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	//�Զ������������һ�㶼Ҫָ��������򣬷����������֪������ô��������
//	set<Person, Compare> personSet;
//	Person p1 = { "���±�",45,175 };  //��ʽת���������вι���
//	Person p2 = Person("���˧",55,170);  //��ʾ�������вι���
//	Person p3("����",25,185);
//	Person p4("����", 25, 199);  //�����p3�ظ�������ʧ��
//	Person p5("������", 45, 176);  //�����p1�ظ�������ʧ��
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

//map/multimap����
//map������Ԫ�ض���pair
//pair�е�һ��Ԫ��Ϊkey(��ֵ)������������(���������֤��)���ڶ���Ԫ��Ϊvalue(ʵֵ)
//����Ԫ�ض�����ݼ�ֵ�Զ�����
//map/multimap���ڹ���ʽ�������ײ�ṹʹ�ö�����ʵ��
//�ŵ�:���Ը��ݼ�ֵ�����ҵ�valueֵ
//map��multimap������:
//map�в��������ظ���keyֵԪ��(valueֵ����)��multimap����

//map����͸�ֵ
//���캯��ԭ��:
//map<T1��T2> mp;  //Ĭ�Ϲ���
//map(const map& mp);  //��������
//��ֵ����ԭ��:
//map& operator=(const map& mp);

//#include <map>
//
//void printMap(const map<int,int>& mp)
//{
//	for (map<int, int>::const_iterator it = mp.begin(); it != mp.end(); it++)
//	{
//		cout << "keyֵ:" << it->first << " valueֵ:" << it->second << endl;
//	}
//	cout << endl;
//}
//void test1()
//{
//	map<int, int> mp;
//	mp.insert(pair<int,int>(001,10));  //ͨ����������������ݲ���
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

//map������С�ͽ���
//����ԭ��:
//size();  //����������Ԫ�صĸ���
//empty();  //�ж������Ƿ�Ϊ��
//swap(st);  //��st�е�Ԫ�غ�������н���

//map�����Ĳ����ɾ��
//����ԭ��:
//insert(elem);  //�������в���Ԫ��  //һ�����ֲ��뷽��
//clear();  //�������Ԫ��
//erase(pos);  //ɾ��pos��������ָ���Ԫ�ز�������һ��Ԫ�صĵ�����
//erase(beg,end);  //ɾ������[beg,end)������Ԫ�أ���������һ��Ԫ�صĵ�����
//erase(key);  //ɾ�������м�ֵΪkey��Ԫ��

//#include <map>
//
//void printMap(const map<int,int>& mp)
//{
//	for (map<int, int>::const_iterator it = mp.begin(); it != mp.end(); it++)
//	{
//		cout << "keyֵ:" << it->first << " valueֵ:" << it->second << endl;
//	}
//	cout << endl;
//}
//void test1()
//{
//	map<int, int> mp;
//	mp.insert(pair<int,int>(001,10));  //��һ�ֲ��뷽��
//	mp.insert(make_pair(002,20));  //�ڶ��ֲ��뷽��
//	mp.insert(map<int,int>::value_type(003, 30));  //�����ֲ��뷽��
//	mp[004] = 40;  //�����ֲ��뷽��  //������ʹ�ô��ַ������в��룬������ʹ�ô��ַ���������Ӧ��ֵ��valueֵ
//	cout << mp[005] << endl;  //�����ֵ���󣬵����ֲ��뷽�����Զ�����һ����Ӧ��ֵ��valueֵΪ0�ļ�ֵ��
//	cout << mp[004] << endl;  //���ʼ�ֵΪ004��value��ֵ
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

//map�������Һ�ͳ��
//����ԭ��:
//find(key);  //����keyֵ�Ƿ���ڣ������ڣ����ظü�ֵԪ�صĵ��������������ڣ�����map.end()
//count(key);  //ͳ�Ƽ�ֵΪkey��Ԫ�صĸ���

//map��������
//map����Ĭ�ϴ�С��������


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
//		cout << "keyֵ:" << it->first << " valueֵ:" << it->second << endl;
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