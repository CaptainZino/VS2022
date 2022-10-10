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