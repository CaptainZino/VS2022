#define _CRT_SECURE_NO_WARNINGS 1
#include "SpeechManage.h"

SpeechManage::SpeechManage()
{
	this->InitSpeech();  //清空容器
	this->CreateContestant();  //创建选手
}

SpeechManage::~SpeechManage()
{
	;  //析构函数空实现
}

void SpeechManage::ShowMenu()
{
	cout << "------------------------------------------" << endl;
	cout << "-------     欢迎参加演讲比赛     ---------" << endl;
	cout << "-------      1:开始演讲比赛      ---------" << endl;
	cout << "-------      2:查看往届记录      ---------" << endl;
	cout << "-------      3:清空比赛记录      ---------" << endl;
	cout << "-------      0:退出比赛程序      ---------" << endl;
	cout << "------------------------------------------" << endl;
}

void SpeechManage::InitSpeech()
{
	this->v1.clear();
	this->v2.clear();
	this->victory.clear();
	this->mContestant.clear();
	this->index = 1;
}

void SpeechManage::CreateContestant()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "选手";
		Contestant contestant;
		contestant.name = (name += nameSeed[i]);
		contestant.score[0] = 0;
		contestant.score[1] = 0;

		this->v1.push_back(i + 1001);

		this->mContestant.insert(make_pair(i+1001,contestant));
	}
}

void SpeechManage::ContestantDraw()
{
	cout << "第" << this->index << "轮比赛正常抽签" << endl;
	cout << "--------------------------" << endl;
	cout << "抽签后比赛顺序如下:" << endl;
	if (this->index == 1)
	{
		srand((unsigned int)time(NULL));  //通过系统时间生成随机数种子
		random_shuffle(v1.begin(), v1.end());  //通过算法对选手进行排序

		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout  << *it << " ";
		}
		cout << endl;
	}

	if (this->index == 2)
	{
		srand((unsigned int)time(NULL));  //通过系统时间生成随机数种子
		random_shuffle(v2.begin(), v2.end());  //通过算法对选手进行排序

		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}

	cout << "--------------------------" << endl;
	system("pause");
}

void SpeechManage::SpeechContest()
{
	multimap<double, int, greater<int>> groupScore;
	int num = 0;
	cout << "----------第" << this->index << "轮比赛正式开始----------" << endl;

	vector<int> vSrc;
	if (this->index == 1)
	{
		vSrc = v1;
	}
	else
	{
		vSrc = v2;
	}

	for (vector<int>::iterator it = vSrc.begin(); it != vSrc.end(); it++)
	{
		num++;
		//评委打分
		deque<double> dscore;
		for (int i = 0; i < 10; i++)  //十个评委打分
		{
			double score = (rand() % 401 + 600) / 10.f;
			dscore.push_back(score);
		}
		sort(dscore.begin(),dscore.end(),greater<double>());  //对分数进行降序排列
		dscore.pop_front();  //去除最高分
		dscore.pop_back();  //去除最低分

		double sum = accumulate(dscore.begin(),dscore.end(),0);  //求和
		double avg = sum / (double)dscore.size();

		mContestant[*it].score[this->index - 1] = avg;
		groupScore.insert(make_pair(avg, *it));

		//cout << "test" << endl;
		if (num / 7 == 0)
		{
			if (num == 1)
			{
				cout << "第一小组比赛成绩如下:" << endl;
			}
			cout << "姓名:" << mContestant[*it].name << " 编号:" << *it << " 成绩:" << avg << endl;
		}
		else
		{
			if (num == 7)
			{
				cout << "第二小组比赛成绩如下:" << endl;
			}
			cout << "姓名:" << mContestant[*it].name << " 编号:" << *it << " 成绩:" << avg << endl;
		}

	}
	int i = 0;
	multimap<double, int, greater<int>>::iterator jt;
	for (i = 0, jt = groupScore.begin(); i < 6; i++, jt++)
	{
		v2.push_back((*jt).second);  //将前六名的编号保存到v2中
	}

	cout << "------------------------------------" << endl;
	cout << "首轮比赛前六名为:" << endl;
	for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << endl;
	}

	system("pause");  //按任意键继续
}