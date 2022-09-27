#pragma once
#include <iostream>
#include "point.h"
using namespace std;

class Circle
{
private:
	int m_R;
	Point m_Center;  //类中可以将其他类作为成员
public:
	//设置半径
	void SetR(int r);
	//获取半径
	int GetR();
	//设置圆心
	void SetPoint(int x, int y);
	//获取圆心
	Point GetPoint();
};
