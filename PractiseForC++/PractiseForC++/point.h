#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
	int m_X;
	int m_Y;
public:
	//����m_X
	void SetX(int x);
	//����m_Y
	void SetY(int y);
	//��ȡm_X
	int GetX();
	//��ȡm_Y
	int GetY();
};