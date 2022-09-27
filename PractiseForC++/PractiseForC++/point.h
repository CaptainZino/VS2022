#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
	int m_X;
	int m_Y;
public:
	//设置m_X
	void SetX(int x);
	//设置m_Y
	void SetY(int y);
	//获取m_X
	int GetX();
	//获取m_Y
	int GetY();
};