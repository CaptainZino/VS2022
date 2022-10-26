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

	vector<int> v1;  //首轮选手编号容器
	vector<int> v2;  //首轮晋级选手编号容器
	vector<int> victory;  //前三名编号容器
	map<int, Contestant> mContestant;  //存放选手编号及其信息
	int index;  //记录比赛轮数

	SpeechManage();
	~SpeechManage();
	void ShowMenu();
	void InitSpeech();
	void CreateContestant();
	void ContestantDraw();
	void PrintContestant();
	void SpeechContest();
};