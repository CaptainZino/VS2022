#pragma once
#include <iostream>
#include "point.h"
using namespace std;

class Circle
{
private:
	int m_R;
	Point m_Center;  //���п��Խ���������Ϊ��Ա
public:
	//���ð뾶
	void SetR(int r);
	//��ȡ�뾶
	int GetR();
	//����Բ��
	void SetPoint(int x, int y);
	//��ȡԲ��
	Point GetPoint();
};
