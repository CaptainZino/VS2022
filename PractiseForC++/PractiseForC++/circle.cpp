#define _CRT_SECURE_NO_WARNINGS 1
#include "circle.h"
#include "point.h"

void Circle::SetR(int r)
{
	m_R = r;
}
//��ȡ�뾶
int Circle::GetR()
{
	return m_R;
}

//����Բ��
void Circle::SetPoint(int x, int y)
{
	m_Center.SetX(x);
	m_Center.SetY(y);
}

//��ȡԲ��
Point Circle::GetPoint()
{
	return m_Center;
}