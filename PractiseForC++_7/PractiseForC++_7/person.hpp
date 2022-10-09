#pragma once
#include <iostream>
using namespace std;

template<typename T1, typename T2>
class Person
{
public:
	T1 name;
	T2 age;
	Person(T1 name, T2 age);
	void ShowPerson();
};

//Person�๹�캯������ʵ��
template<typename T1, typename T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->name = name;
	this->age = age;
}

//ShowPerson()����ʵ��
template<typename T1, typename T2>
void Person<T1, T2>::ShowPerson()
{
	cout << "����:" << this->name << " ����:" << this->age << endl;
}