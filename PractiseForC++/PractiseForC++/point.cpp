#define _CRT_SECURE_NO_WARNINGS 1
#include "point.h"

//����m_X
void Point::SetX(int x)
{
	m_X = x;
}

//����m_Y
void Point::SetY(int y)
{
	m_Y = y;
}

//��ȡm_X
int Point::GetX()
{
	return m_X;
}

//��ȡm_Y
int Point::GetY()
{
	return m_Y;
}