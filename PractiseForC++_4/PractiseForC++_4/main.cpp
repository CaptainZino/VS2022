#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//��̬(������̬)
//��̬��̬:�������غ���������أ����ú�����
//��̬��̬:��������麯��ʵ������ʱ��̬
//��̬��̬�Ͷ�̬������:
//1.��̬��̬�ĺ�����ַ���-����׶�ȷ��������ַ
//2.��̬��̬�ĺ�����ַ���-���н׶�ȷ��������ַ

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
//	virtual void Speak()  //��������д�ĸ�����麯����ǰ��ɼ�virtual��Ҳ���Բ���
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
////��ַ��󶨣��ڱ���׶ξ���������ַ
////��Ҫ����Cat���Speak()��������ôDoSpeak�����ĵ�ַ�Ͳ�����󶨣���Ҫ�����н׶ΰ�
//void DoSpeak(Animal& animal)
//{
//	animal.Speak();
//}
//void test1()
//{
//	Cat cat;
//	Dog dog;
//	DoSpeak(cat);  //��������õ�������Ķ�����Ҫǿ��ת��  //�ȼ���:Anmial& anmial = cat
//	DoSpeak(dog);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//��̬��̬��������:
//1.�м̳й�ϵ
//2.����Ҫ��д�����е��麯��(��д��ͬ������:��д�ĺ�������ֵ���ͣ��������Ͳ����б�Ҫ��ȫ��ͬ)

//��̬��̬��ʹ��:
//ͨ�������ָ�������ָ������Ķ���

//��̬�ĵײ�ԭ��:

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
//	//Anmial����һ���麯����ָ��(vfptr)��ָ���麯����(vftable)�����ڲ���¼��һ���麯���ĵ�ַ:&Anmial::speak
//	cout << sizeof(Cat) << endl;
//	//Cat���ڲ�������дspeak��������Cat����Ҳ��һ���麯����ָ�룬��ָ����麯�����е�����Ϊ:&Anmial::speak
//	//��Cat���ڲ���д��speak�����������е��麯����ָ��ָ����麯�����е����ݻ��滻����������д�ĺ����ĵ�ַ:&Cat::speak\
//	�����е��麯�����е����ݲ���ñ��������ָ�������ָ������Ķ���ʱ��������̬
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

//��̬����-��������

//��ͨд��:
//class Calculator
//{
//public:
//	int	num1;  //������1
//	int num2;  //������2
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
//		//����ԭ��:����չ���п��ţ����޸Ľ��йر�
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

//��̬ʵ��:
//�ô�:
//1.��֯�ṹ����
//2.�ɶ���ǿ
//3.������ǰ�ںͺ��ڵ�ά��
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
//	//��̬ʹ������:�����ָ���������ָ������Ķ���
//	BaseCalculator* pcal = new AddCal;
//	pcal->num1 = 10;
//	pcal->num2 = 20;
//	cout << "num1+num2=" << pcal->GetResult() << endl;
//	delete pcal;  //�ͷŶ����ڴ�
//
//	//һ������ָ��ָ��������
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

//���麯���ͳ�����
//���麯��:�ڶ�̬�У�ͨ���������麯����ʵ���Ǻ�������ģ���Ҫ���ǵ�����������д�����ݣ���˿ɽ��麯����дΪ���麯��
//���麯���﷨:virtual ����ֵ���� ������ (�����б�) = 0;
//���������˴��麯����������Ϊ������
//�������ص�:1.�޷�ʵ�������� 2.���������д�������еĴ��麯��������Ҳ���ڳ�����

//class BaseCalculator
//{
//public:
//	int num1;
//	int num2;
//	virtual int GetResult() = 0;  //���麯��
//};
//
//class AddCal:public BaseCalculator
//{
//	int GetResult()  //���������д���еĴ��麯���������޷�ʵ��������
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
//	//BaseCalculator cal;  //�����࣬�޷�ʵ��������
//
//	//��̬ʹ������:�����ָ���������ָ������Ķ���
//	BaseCalculator* pcal = new AddCal;
//	pcal->num1 = 10;
//	pcal->num2 = 20;
//	cout << "num1+num2=" << pcal->GetResult() << endl;
//	delete pcal;  //�ͷŶ����ڴ�
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

//��̬������
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

//�������ʹ�������
//��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
//�����ʽ:�������е�����������Ϊ��������������
//�������ʹ��������Ĺ���:
//1.���Խ������ָ���ͷ��������
//2.����Ҫ�о���ĺ���ʵ��
//�������ʹ�������������:
//����Ǵ����������������ڳ����࣬�޷�ʵ��������
//�������﷨:virtual ~����(){}
//���������﷨:virtual ~����() = 0;  ����::~����(){}

//class Anmial
//{
//public:
//	virtual void speak() = 0;
//	Anmial()
//	{
//		cout << "����Anmial�๹�캯��" << endl;
//	}
//	virtual ~Anmial() = 0;  //������������  //��Ҫ��ȫ�ֺ�����ʵ��  //���˴˴���������Anmial��Ϊ�����࣬�޷�ʵ��������
//	//virtual ~Anmial()  //������  //���������û�ж������ݣ����Բ�дΪ��������������
//	//{
//	//	cout << "����Anmial����������" << endl;
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
//		cout << "����Cat�๹�캯��" << endl;
//		this->name = new string(name);
//	}
//	~Cat()
//	{
//		if (name != NULL) {
//
//			cout << "����Cat����������" << endl;
//			delete name;
//			name = NULL;
//		}
//	}
//	
//};
//Anmial::~Anmial()  //���ി����������ʵ��
//{
//	cout << "����Anmial�ി����������" << endl;
//}
//void test1()
//{
//	Anmial* anmial = new Cat("Tom");
//	anmial->speak();
//	//��������������������������������ָ����������ʱ�򣬲�����������е�������������������������ж������ԣ�������ڴ�й¶
//	delete anmial;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//��̬������

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
//	~Computer()  //�ͷ���������ڶ������ٵĿռ�
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
//	//��һ̨����
//	Computer* computer1 = new Computer(new IntelCPU, new IntelGraphics, new IntelMemory);
//	computer1->DoWork();
//	delete computer1;
//
//	cout << "-------------------------" << endl;
//
//	//�ڶ�̨����
//	Computer* computer2 = new Computer(new LenovoCPU, new LenovoGraphics, new LenovoMemory);
//	computer2->DoWork();
//	delete computer2;
//}
//int main()
//{
//	test1();
//	return 0;
//}