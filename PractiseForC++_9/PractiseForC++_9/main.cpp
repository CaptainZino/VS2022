#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//�����
//void test1()
//{
//	cout << rand() % 100 << endl;  //����һ��0~99�������
//}
//int main()
//{
//	srand((unsigned int)time(NULL));  //(unsigned int)time(NULL)Ϊrand()�����ӣ�������rand()���������ʱ����ʼֵ
//	test1();
//	return 0;
//}


//��������(�º���)
//�����˺������ò��������࣬������Ϊ��������
//��������ʹ�����ص�()ʱ����Ϊ���ƺ������ã�Ҳ��Ϊ�º���
//�º����ı�����һ���࣬����һ������


//����������ʹ��ʱ����������ͨ�����������ã������в�����Ҳ�����з���ֵ
//�������󳬳���ͨ�����ĸ����������������Լ���״̬������������һ���࣬���ڲ��������Լ�����������¼�Լ���״̬
//�������������Ϊ����������

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
//	int count;  //��¼�������ô���
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
//	cout << add(5, 10) << endl;  //����������ʹ��ʱ,�����в�����Ҳ�����з���ֵ
//}
//void test2()
//{
//	MyPrint print;
//	print("hello there");
//	print("hello there");
//	print("hello there");
//	cout << "�������ô���:" << print.count << endl;  //��������������Լ���״̬
//}
//void doPrint(MyPrint& print,string str)
//{
//	print(str);
//}
//void test3()
//{
//	MyPrint print;
//	doPrint(print,"hello there");  //�������������Ϊ����������
//}
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}

//ν��
//����ֵΪbool���͵ķº�����Ϊν��
//���operator()����һ����������ΪһԪν��
//���operator()����������������Ϊ��Ԫν��

//һԪν��
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
//	//������������û�д���5����
//	//GreaterFive()Ϊ������������  //���������������Ĭ�Ϲ���ʱ��Ҫ�����ţ��������Ķ������Ĭ�Ϲ��첻������
//	cout << *(find_if(v.begin(), v.end(), GreaterFive())) << endl;  //find_if�ҵ���Ӧ���ݷ���������������򷵻�v.end()
//}
//int main()
//{
//	test1();
//	return 0;
//}

//��Ԫν��
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
//	sort(v2.begin(),v2.end(),Compare());  //���㷨������Ҫ���Ǻ������󣬶��������ͣ���Ҫ�����з�װ��sort��������
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


//STL���ڽ���һЩ��������:�����º�������ϵ�º������߼��º���
//��Щ�º����������Ķ����÷���һ�㺯����ȫ��ͬ
//ʹ�������ͷ�ļ�:#include <functional>

//�ڽ��������������º���
//����ʵ����������
//����negateΪһԪ���㣬�����Ϊ��Ԫ����
//����ԭ��:
//template<typename T> T plus<T>  //�ӷ��º���
//template<typename T> T minus<T>  //�ӷ��º���
//template<typename T> T multiplies<T>  //�˷��º���
//template<typename T> T divides<T>  //�����º���
//template<typename T> T modulus<T>  //ȡģ�º���
//template<typename T> T negate<T>  //ȡ���º���

//#include <functional>
//
//void test1()
//{
//	negate<int> n;
//	cout << n(50) << endl;
//
//	plus<int> p;  //��������ֻ��һ������
//	cout << p(50,50) << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//��ϵ�º���
//ʵ�ֹ�ϵ�Ա�
//����ԭ��:
//template<typename T> T equal_to<T>  //����
//template<typename T> T not_equal_to<T>  //������
//template<typename T> T greater<T>  //����
//template<typename T> T greater_equal<T>  //���ڵ���
//template<typename T> T less<T>  //С��
//template<typename T> T less_equal<T>  //С�ڵ���

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
//	sort(v.begin(),v.end(), greater<int>());  //ͨ���ڽ���������ָ���������
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


//�߼��º���
//ʵ���߼�����
//template<typename T> bool logical_and<T>  //�߼���
//template<typename T> bool logical_or<T>  //�߼���
//template<typename T> bool logical_not<T>  //�߼���

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
//	v2.resize(v.size());  //���˵�Ŀ����������Ҫ��ǰ���ٿռ�
//	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());  //����
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

//STL�����㷨
//�㷨����Ҫͷ�ļ���<algorithm>��<functional>��<numeric>���
//<algorithm>������STLͷ�ļ�������һ������Χ�漰�Ƚϡ����������ҡ��������������ơ��޸ĵ�
//<numeric>�����С��ֻ����������������м���ѧ�����ģ�庯��
//<functional>������һЩģ���࣬����������������

//���ñ����㷨
//for_each  //���������㷨
//transform  //�������������ݵ���һ��������

//for_each(iterator beg,iterator end,_func)
//begΪ��ʼ������
//endΪ����������
//_funcΪ�������ߺ�������

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
//beg1:Դ������ʼ������
//end1:Դ��������������
//beg2:Ŀ��������ʼ������
//_func:�������ߺ�������:ָ������ʱҪ���е�����


//#include <algorithm>
//#include <vector>
//
//class TransForm
//{
//public:
//	int operator()(int val)  //��Դ�����е�����ȡ������Ϊ��������ú���������Ӧ������ٽ��з���
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
//	v2.resize(v1.size());  //Ŀ����������Ҫ��ǰ���ٿռ�
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

//���ò����㷨:
//find  //����Ԫ��
//find_if  //����������Ԫ��
//adjacent_find  //���������ظ�Ԫ��
//binary_search  //���ַ�����
//count  //ͳ��Ԫ�ظ���
//count_if  //������ͳ��Ԫ�ظ���


//find(iterator beg,iterator end,value)
//����ָ��Ԫ�أ��ҵ�����ָ��Ԫ�صĵ��������Ҳ������ؽ���������
//beg:��ʼ������
//end:����������
//value:���ҵ�Ԫ��

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
//	//����==�ţ���find�ײ�֪����ζԱ��Զ�����������
//	bool operator==(const Person& p)   //����Ҫ��const�͵ײ�����Ӧ
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
//void test1()  //����������������
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
//		cout << "û���ҵ�����" << endl;
//	}
//	else
//	{
//		cout << "��������Ϊ:" << *it << endl;
//	}
//}
//void test2()  //�����Զ�����������
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
//		cout << "û���ҵ�����" << endl;
//	}
//	else
//	{
//		cout << "��������Ϊ:" << it->name << " " << it->age << endl;
//	}
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}


//find_if(iterator beg,iterator end,_pred)
//����������Ԫ�أ��ҵ�������Ӧ�����������򷵻ؽ���������
//beg:��ʼ������
//end:����������
//_pred:������ν��

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
//void test1()  //����������������
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	vector<int>::iterator it = find_if(v1.begin(), v1.end(), GreaterFive());  //���������д���5����
//	if (it == v1.end())
//	{
//		cout << "û���ҵ�����" << endl;
//	}
//	else
//	{
//		cout << "��������Ϊ:" << *it << endl;
//	}
//}
//void test2()  //�����Զ�����������
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
//		cout << "û���ҵ�����" << endl;
//	}
//	else
//	{
//		cout << "��������Ϊ:" << it->name << " " << it->age << endl;
//	}
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//adjacent_find(iterator beg,iterator end)
//���������ظ�Ԫ�أ��ҵ���������Ԫ���е�һ��Ԫ�صĵ����������򷵻ؽ���������
//beg:��ʼ������
//end:����������

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
//		cout << "δ�ҵ�" << endl;
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
//ͨ�����ַ�����ָ��Ԫ�أ��ҵ�����true�����򷵻�false
//���������д��㷨������
//beg:��ʼ������
//end:����������
//value:���ҵ�Ԫ��

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
//	bool it = binary_search(v.begin(), v.end(), 5);  //��Ϊ�������У����ҽ�����
//	if (!it)
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ�" << endl;
//	}
//
//}
//int main()
//{
//	test1();
//	return 0;
//}

//count(iterator beg,iterator end,value)
//ͳ��Ԫ�س��ִ���
//beg:��ʼ������
//end:����������
//value:ͳ�Ƶ�Ԫ��

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
//void test1()  //ͳ����������
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
//	cout << "10���ֵĴ���Ϊ:" << num << endl;
//
//}
//void test2()  //ͳ���Զ�������
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
//	cout << "����Ϊddd����" << num << "��" << endl;
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//count_if()
//������ͳ��Ԫ�س��ֵĴ���
//beg:��ʼ������
//end:����������
//_pred:ν��

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
//void test1()  //ͳ����������
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
//	cout << "����10�������ֵĴ���:" << num << endl;
//
//}
//void test2()  //ͳ���Զ�������
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
//	cout << "�������15����" << num << "��" << endl;
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}


//���������㷨:
//sort  //�������ڵ�Ԫ�ؽ�������
//random_shuffle  //ϴ�ƣ�ָ����Χ�ڵ�Ԫ�������������
//merge  //����Ԫ�غϲ��������浽��һ��������
//reverse  //��תָ����Χ�ڵ�Ԫ��

//sort(iterator beg,iterator end,_pred);  //_predѡ�����Ĭ��Ϊ����
//beg:��ʼ������
//end:����������
//_pred:ν��

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
//ϴ���㷨��ָ����Χ�ڵ�Ԫ�������������
//beg:��ʼ������
//end:����������

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
//	random_shuffle(v.begin(),v.end());  //ͨ��random_shuffle�㷨�������v��Ԫ�ش���
//	for_each(v.begin(), v.end(), MyPrint);
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));  //ͨ��ϵͳʱ��������������� 
//	test1();
//	return 0;
//}


//merge(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
//����Ԫ�غϲ������洢����һ��������
//�����ϲ������������������
//dest:Ŀ��������ʼ������

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
//	v3.resize(v1.size()+v2.size());  //��ǰ���ٿռ�
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
//��תָ����ΧԪ��

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

//���ÿ������滻�㷨:
//copy  //������ָ����Χ�ڵ�Ԫ�ؿ�������һ������
//replace  //��������ָ����Χ�ľ�Ԫ�ظ�Ϊ��Ԫ��
//replace_if  //������ָ����Χ������������Ԫ���滻Ϊ��Ԫ��
//swap  //��������������Ԫ��


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
//	replace(v1.begin(),v1.end(),6,100);  //��v1.begin()��v1.end()��Χ�����е�6���滻��100
//	for_each(v1.begin(),v1.end(),MyPrint);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}


//replace_if(iterator beg,iterator end,_pred,newvalue)
//_pred:ν��

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
//	replace_if(v1.begin(), v1.end(), Greater4, 100);  //��v1.begin()��v1.end()��Χ�����д���4��Ԫ�ض��滻��100
//	for_each(v1.begin(), v1.end(), MyPrint);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//swap(container c1,container c2)
//����������������ͬ������

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
//	cout << "����ǰ:" << endl;
//	for_each(v1.begin(), v1.end(), MyPrint);
//	cout << endl;
//	for_each(v2.begin(), v2.end(), MyPrint);
//	cout << endl;
//
//	swap(v1,v2);
//
//	cout << "����ǰ:" << endl;
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

//�������������㷨
//���������㷨����С���㷨��ʹ��ʱҪ����ͷ�ļ�#include <numeric>
//accumulate  //����������Ԫ���ۼ��ܺ�
//fill  //�����������Ԫ��

//accumulate(iterator beg,iterator end,value)
//value:��ʼ�ۼ�ֵ��һ���0

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
//�����������Ԫ��
//value:���ֵ

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


//���ü����㷨:
//set_intersection  //�����������Ľ���
//set_union  //�����������Ĳ���
//set_difference  //�����������Ĳ

//set_intersection(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
//����ֵΪ�������һ��Ԫ�صĵ�����
//�������ϱ����Ϊ��������

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
//	v3.resize(v1.size() < v2.size() ? v1.size() : v2.size());  //Ŀ�������Ĵ�Сȡ���������еĽ�Сֵ
//	vector<int>::iterator itEnd = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
//	for_each(v3.begin(), itEnd, MyPrint);  //�ṩ���صĽ����������������ӡĬ������0
//}
//
//int main()
//{
//	test1();
//	return 0;
//}


//set_union(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
//����ֵΪ�������һ��Ԫ�صĵ�����
//�������ϱ����Ϊ��������

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
//	v3.resize(v1.size() + v2.size());  //Ŀ�������Ĵ�Сȡ����������С�ĺ�
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
//����ֵΪ����һ��Ԫ�صĵ�����
//�������ϱ����Ϊ��������

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
//	//v1��v2�Ĳ
//	vector<int>::iterator itEnd1 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	for_each(v3.begin(), itEnd1, MyPrint);
//
//	cout << endl;
//
//	vector<int> v4;
//	v4.resize(v2.size());
//	//v2��v1�Ĳ
//	vector<int>::iterator itEnd2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v4.begin());
//	for_each(v4.begin(), itEnd2, MyPrint);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}