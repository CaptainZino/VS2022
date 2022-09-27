#define _CRT_SECURE_NO_WARNINGS 1
#include "circle.h"
#include "point.h"

void Circle::SetR(int r)
{
	m_R = r;
}
//获取半径
int Circle::GetR()
{
	return m_R;
}

//设置圆心
void Circle::SetPoint(int x, int y)
{
	m_Center.SetX(x);
	m_Center.SetY(y);
}

//获取圆心
Point Circle::GetPoint()
{
	return m_Center;
}