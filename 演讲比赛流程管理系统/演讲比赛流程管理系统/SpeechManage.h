#pragma once

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <deque>
#include <numeric>
#include "Contestant.h"
using namespace std;

class SpeechManage
{
public:

	vector<int> v1;  //����ѡ�ֱ������
	vector<int> v2;  //���ֽ���ѡ�ֱ������
	vector<int> victory;  //ǰ�����������
	map<int, Contestant> mContestant;  //���ѡ�ֱ�ż�����Ϣ
	int index;  //��¼��������

	SpeechManage();
	~SpeechManage();
	void ShowMenu();
	void InitSpeech();
	void CreateContestant();
	void ContestantDraw();
	void PrintContestant();
	void SpeechContest();
};