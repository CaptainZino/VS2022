#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//�̳�
//�ô�:�����ظ�����
//�﷨:class ����(������) : �̳з�ʽ ����(����)

//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "ͷ����Ϣ........." << endl;
//	}
//	void tail()
//	{
//		cout << "β����Ϣ........." << endl;
//	}
//	void left()
//	{
//		cout << "�����Ϣ........." << endl;
//	}
//
//};
//
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java��Ϣ........." << endl;
//	}
//
//};
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python��Ϣ........." << endl;
//	}
//
//};
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++��Ϣ........." << endl;
//	}
//
//};
//
//void test1()
//{
//	Java ja;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//�̳з�ʽ:
//1.�����̳�
//2.�����̳�
//3.˽�м̳�

//class Father
//{
//public:
//	int f_a;
//protected:
//	int f_b;
//private:
//	int f_c;
//};
//
//class Son1:public Father
//{
//public:
//
//	void func()
//	{
//		f_a = 100;  //������ʽ�̳У������еĹ���Ȩ�޳�Ա����������Ȼ�ǹ���Ȩ��
//		f_b = 100;  //������ʽ�̳У������еı���Ȩ�޳�Ա����������Ȼ�Ǳ���Ȩ��
//		//f_c = 100;  //����˽��Ȩ�޳�Ա�������������κη�ʽ�̳У����޷�����
//	}
//};
//
//class Son2 :protected Father
//{
//public:
//
//	void func()
//	{
//		f_a = 100;  //������ʽ�̳У������еĹ���Ȩ�޳�Ա���������Ǳ���Ȩ��
//		f_b = 100;  //������ʽ�̳У������еı���Ȩ�޳�Ա���������Ǳ���Ȩ��
//		//f_c = 100;  //����˽��Ȩ�޳�Ա�������������κη�ʽ�̳У����޷�����
//	}
//};
//
//class Son3 :private Father
//{
//public:
//
//	void func()
//	{
//		f_a = 100;  //˽�з�ʽ�̳У������еĹ���Ȩ�޳�Ա����������˽��Ȩ��
//		f_b = 100;  //˽�з�ʽ�̳У������еı���Ȩ�޳�Ա����������˽��Ȩ��
//		//f_c = 100;  //����˽��Ȩ�޳�Ա�������������κη�ʽ�̳У����޷�����
//	}
//};
//
//class GrandSon:public Son3
//{
//	void func()
//	{
//		//f_a = 300;  //����˽��
//	}
//};
//void test1()
//{
//	Son1 son1;
//	son1.f_a = 200;
//	//son1.f_b = 200;  //Son1�ౣ����Ա
//}
//
//void test2()
//{
//	Son2 son2;
//	//son2.f_a = 200;  //Son2�ౣ����Ա
//	//son2.f_b = 200;  //Son2�ౣ����Ա
//}
//
//void test3()
//{
//	Son3 son3;
//	//son3.f_a = 200;  //Son2��˽�г�Ա
//	//son3.f_b = 200;  //Son2��˽�г�Ա
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	return 0;
//}

//�̳��еĶ���ģ��
//�Ӹ���̳й����ĳ�Ա����Щ������������У�

//class Base
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};
//
//class son :public Base
//{
//public:
//	int d;
//};
//
//void test1()
//{
//	cout << sizeof(son) << endl;  //16�ֽ�  //���������еķǾ�̬��Ա���ᱻ����̳���ȥ
//	//�����е�˽�����Գ�Ա�Ǳ������������ˣ���˷��ʲ�����������Ȼ�ᱻ�̳�
//}
//int main()
//{
//	test1();
//	return 0;
//}

//�̳��й��������˳��
//�̳����ȵ��ø���Ĺ��캯���ٵ�������Ĺ��캯���������ĵ���˳��͹��캯���෴
//class Base
//{
//public:
//	Base()
//	{
//		cout << "���ø��๹�캯��" << endl;
//	}
//	~Base()
//	{
//		cout << "���ø�����������" << endl;
//	}
//};
//class Son:public Base
//{
//public:
//	Son()
//	{
//		cout << "�������๹�캯��" << endl;
//	}
//	~Son()
//	{
//		cout << "����������������" << endl;
//	}
//};
//void test1()
//{
//	Son s;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//�̳���ͬ����Ա����
//class Base
//{
//public:
//	int a;
//	Base()
//	{
//		a = 100;
//	}
//	void func()
//	{
//		cout << "����func" << endl;
//	}
//	void func(int)
//	{
//		cout << "�������func" << endl;
//	}
//};
//class Son :public Base
//{
//public:
//	int a;
//	Son()
//	{
//		a = 200;
//	}
//	void func()
//	{
//		cout << "����func" << endl;
//	}
//};
//void test1()
//{
//	Son s;
//	cout << "����:"<<s.a << endl;  //����������Ա������ֱ�ӷ��ʣ����ʵ�������ĳ�Ա
//	cout << "����:"<<s.Base::a << endl;  //����������Ա����,���ʸ����Ա��Ҫ��������
//}
//void test2()
//{
//	Son s;
//	s.func();  //��������func()
//	s.Base::func();  //���ø���func()
//	//s.func(0);  //�Ƿ�����  //��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص������е�����ͬ����Ա
//	s.Base::func(0);  //�Ϸ�����
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//�̳���ͬ����̬��Ա����
//��̬��Ա����ͬ���ͷǾ�̬��Ա����ͬ���Ĵ���ʽһ��

//class Base
//{
//public:
//	static int a;
//	static void func()
//	{
//		cout << "���ø���func" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "���ø����в�func" << endl;
//	}
//};
//int Base::a = 10;
//class Son:public Base
//{
//public:
//	static int a;
//	static void func()
//	{
//		cout << "��������func" << endl;
//	}
//};
//int Son::a = 20;
//void test1()
//{
//	Son s;
//	//ͨ���������
//	cout << "����:"<<s.a << endl;
//	cout << "����:" << s.Base::a << endl;
//
//	//ͨ����������
//	cout << "����:" << Son::a << endl;
//	cout << "����:" << Son::Base::a << endl;  //��һ��::����ͨ�������ķ�ʽ����;�ڶ���::��ʾ���ʸ����������µĳ�Ա
//}
//
//void test2()
//{
//	Son s;
//	//ͨ���������
//	s.func();  //��������func()
//	s.Base::func();  //��������func()
//
//	//ͨ����������
//	Son::func();  //��������func()
//	Son::Base::func();  //��������func()
//	//Son::func(0);  //�Ƿ����ã����ɼ��Ǿ�̬��Ա����ͬ��
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//��̳�
//C++����һ����̳ж����
//��̳�������������ͬ����Ա���֣���Ҫ������������
//class Base1
//{
//public:
//	int a;
//	Base1()
//	{
//		a = 10;
//	}
//};
//class Base2
//{
//public:
//	int a;
//	Base2()
//	{
//		a = 20;
//	}
//};
//class Son :public Base1, public Base2
//{
//public:
//	int c;
//	int d;
//	Son()
//	{
//		c = 30;
//		d = 40;
//	}
//};
//void test1()
//{
//	Son s;
//	cout << sizeof(s) << endl;
//	cout << "Base1:" << s.Base1::a << endl;
//	cout << "Base2:" << s.Base2::a << endl;
//
//}
//int main()
//{
//	test1();
//	return 0;
//}

//���μ̳�:��������ͬʱ�̳�ͬһ�����࣬ͬʱ����һ����ͬʱ�̳�������������
//�̳�����������Ǹ����̳��������Ը��������

//class Animal
//{
//public:
//	int age;
//};
////ͨ����̳н�����μ̳�����
////��ʱAnimal��Ϊ�����
////Sheep��Ostrich��Animal�м̳е�ʵ����һ��������ָ��(vbptr)����ָ��ָ��һ���������������д�ŵ��ǵ������ƫ����
//class Sheep :virtual public Animal  //��̳�
//{
//
//};
//class Ostrich :virtual public Animal
//{
//
//};
//class Alpaca:public Sheep,public Ostrich
//{
//
//};
//void test1()
//{
//	Alpaca st;
//	st.Sheep::age = 18;
//	st.Ostrich::age = 28;
//	//���μ̳�ʱ����������ӵ����ͬ�����ݣ���Ҫ�����������������
//	cout << st.Sheep::age << endl;
//	cout << st.Ostrich::age << endl;
//	cout << st.age << endl;  //��̳к�ֻ��һ�����ݣ�����ֱ��ͨ��������ʣ�������ֶ�����
//}
//int main()
//{
//	test1();
//	return 0;
//}

