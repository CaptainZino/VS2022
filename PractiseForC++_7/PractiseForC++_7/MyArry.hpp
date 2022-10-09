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

//�вι���
template<typename T>
MyArry<T>::MyArry(int capacity)
{
	this->capacity = capacity;
	this->size = 0;
	this->pArry = new T[capacity];
	//cout << "�����вι���" << endl;
}

//��������
template<typename T>
MyArry<T>::~MyArry()
{
	//cout << "������������" << endl;
	if (this->pArry != NULL)
	{
		delete[] this->pArry;
		this->pArry = NULL;
	}
}

//��������
template<typename T>
MyArry<T>::MyArry(const MyArry<T>& arr)
{
	this->capacity = arr.capacity;
	this->size = arr.size;
	//���
	this->pArry = new T[arr.capacity];

	//����arr�е�����
	for (int i = 0; i < arr.size; i++)
	{
		*(this->pArry + i) = *(arr.pArry + i);
	}
	//cout << "���ÿ�������" << endl;
}

template<typename T>
MyArry<T>& MyArry<T>::operator=(const MyArry<T>& arr)  //����=�����
{
	//��������Ϊ�գ����ͷ�
	if (this->pArry != NULL)
	{
		delete[] this->pArry;
		this->pArry = NULL;
		this->capacity = 0;
		this->size = 0;
	}

	this->capacity = arr.capacity;
	this->size = arr.size;
	//���
	this->pArry = new T[arr.capacity];

	//����arr�е�����
	for (int i = 0; i < arr.size; i++)
	{
		*(this->pArry + i) = *(arr.pArry + i);
	}

	//cout << "����'='���غ���" << endl;

	return *this;
}

//β�庯��
template<typename T>
void MyArry<T>::AddBack(const T& val)
{
	if (this->capacity == this->size)
	{
		cout << "��������" << endl;
		return;
	}
	
	this->pArry[this->size] = val;
	this->size ++;
}

//βɾ����
template<typename T>
void MyArry<T>::DeleteBack()
{
	if (this->size == 0)
	{
		cout << "��������Ԫ��" << endl;
		return;
	}
	this->size--;
}

//����ָ���±��Ա
template<typename T>
T& MyArry<T>::operator[](int index)
{
	if (index > this->size && index < 0)
	{
		cout << "�±�Ƿ�" << endl;
		return -1;
	}
	return this->pArry[index];
}

//����������С
template<typename T>
int MyArry<T>::getCapacity()
{
	return this->capacity;
}

//����size��С
template<typename T>
int MyArry<T>::getSize()
{
	return this->size;
}

//��ӡ����
template<typename T>
void MyArry<T>::PrintArry()
{
	for (int i = 0; i < this->size; i++)
	{
		cout << this->pArry[i] << endl;
	}
}

//��ӡPerson������
template<typename T>
void MyArry<T>:: PrintPerson()
{
	for (int i = 0; i < this->getSize(); i++)
	{
		cout << "����:" << (this->pArry[i]).name << " ����:" << (this->pArry[i]).age  << endl;
	}
}