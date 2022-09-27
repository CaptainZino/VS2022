#define _CRT_SECURE_NO_WARNINGS 1
#include "point.h"

//设置m_X
void Point::SetX(int x)
{
	m_X = x;
}

//设置m_Y
void Point::SetY(int y)
{
	m_Y = y;
}

//获取m_X
int Point::GetX()
{
	return m_X;
}

//获取m_Y
int Point::GetY()
{
	return m_Y;
}