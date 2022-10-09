#pragma once
#include <iostream>
using namespace std;


template<typename T>
class MyArry
{
private:
	T* pArry;
	int capacity;
	int size;

public:
	MyArry(int capacity);
	~MyArry();
	MyArry(const MyArry<T>& arr);
	MyArry& operator=(const MyArry<T>& arr);
	void AddBack(const T& val);
	void DeleteBack();
	T& operator[](int index);
	int getCapacity();
	int getSize();
	void PrintArry();
	void PrintPerson();
};

//有参构造
template<typename T>
MyArry<T>::MyArry(int capacity)
{
	this->capacity = capacity;
	this->size = 0;
	this->pArry = new T[capacity];
	//cout << "调用有参构造" << endl;
}

//析构函数
template<typename T>
MyArry<T>::~MyArry()
{
	//cout << "调用析构函数" << endl;
	if (this->pArry != NULL)
	{
		delete[] this->pArry;
		this->pArry = NULL;
	}
}

//拷贝构造
template<typename T>
MyArry<T>::MyArry(const MyArry<T>& arr)
{
	this->capacity = arr.capacity;
	this->size = arr.size;
	//深拷贝
	this->pArry = new T[arr.capacity];

	//拷贝arr中的数据
	for (int i = 0; i < arr.size; i++)
	{
		*(this->pArry + i) = *(arr.pArry + i);
	}
	//cout << "调用拷贝构造" << endl;
}

template<typename T>
MyArry<T>& MyArry<T>::operator=(const MyArry<T>& arr)  //重载=运算符
{
	//若堆区不为空，先释放
	if (this->pArry != NULL)
	{
		delete[] this->pArry;
		this->pArry = NULL;
		this->capacity = 0;
		this->size = 0;
	}

	this->capacity = arr.capacity;
	this->size = arr.size;
	//深拷贝
	this->pArry = new T[arr.capacity];

	//拷贝arr中的数据
	for (int i = 0; i < arr.size; i++)
	{
		*(this->pArry + i) = *(arr.pArry + i);
	}

	//cout << "调用'='重载函数" << endl;

	return *this;
}

//尾插函数
template<typename T>
void MyArry<T>::AddBack(const T& val)
{
	if (this->capacity == this->size)
	{
		cout << "容量已满" << endl;
		return;
	}
	
	this->pArry[this->size] = val;
	this->size ++;
}

//尾删函数
template<typename T>
void MyArry<T>::DeleteBack()
{
	if (this->size == 0)
	{
		cout << "数组中无元素" << endl;
		return;
	}
	this->size--;
}

//访问指定下标成员
template<typename T>
T& MyArry<T>::operator[](int index)
{
	if (index > this->size && index < 0)
	{
		cout << "下标非法" << endl;
		return -1;
	}
	return this->pArry[index];
}

//返回容量大小
template<typename T>
int MyArry<T>::getCapacity()
{
	return this->capacity;
}

//返回size大小
template<typename T>
int MyArry<T>::getSize()
{
	return this->size;
}

//打印数据
template<typename T>
void MyArry<T>::PrintArry()
{
	for (int i = 0; i < this->size; i++)
	{
		cout << this->pArry[i] << endl;
	}
}

//打印Person类数据
template<typename T>
void MyArry<T>:: PrintPerson()
{
	for (int i = 0; i < this->getSize(); i++)
	{
		cout << "姓名:" << (this->pArry[i]).name << " 年龄:" << (this->pArry[i]).age  << endl;
	}
}