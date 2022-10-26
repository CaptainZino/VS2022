#define _CRT_SECURE_NO_WARNINGS 1
#include "SpeechManage.h"

SpeechManage::SpeechManage()
{
	this->InitSpeech();  //�������
	this->CreateContestant();  //����ѡ��
}

SpeechManage::~SpeechManage()
{
	;  //����������ʵ��
}

void SpeechManage::ShowMenu()
{
	cout << "------------------------------------------" << endl;
	cout << "-------     ��ӭ�μ��ݽ�����     ---------" << endl;
	cout << "-------      1:��ʼ�ݽ�����      ---------" << endl;
	cout << "-------      2:�鿴�����¼      ---------" << endl;
	cout << "-------      3:��ձ�����¼      ---------" << endl;
	cout << "-------      0:�˳���������      ---------" << endl;
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
		string name = "ѡ��";
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
	cout << "��" << this->index << "�ֱ���������ǩ" << endl;
	cout << "--------------------------" << endl;
	cout << "��ǩ�����˳������:" << endl;
	if (this->index == 1)
	{
		srand((unsigned int)time(NULL));  //ͨ��ϵͳʱ���������������
		random_shuffle(v1.begin(), v1.end());  //ͨ���㷨��ѡ�ֽ�������

		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout  << *it << " ";
		}
		cout << endl;
	}

	if (this->index == 2)
	{
		srand((unsigned int)time(NULL));  //ͨ��ϵͳʱ���������������
		random_shuffle(v2.begin(), v2.end());  //ͨ���㷨��ѡ�ֽ�������

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
	cout << "----------��" << this->index << "�ֱ�����ʽ��ʼ----------" << endl;

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
		//��ί���
		deque<double> dscore;
		for (int i = 0; i < 10; i++)  //ʮ����ί���
		{
			double score = (rand() % 401 + 600) / 10.f;
			dscore.push_back(score);
		}
		sort(dscore.begin(),dscore.end(),greater<double>());  //�Է������н�������
		dscore.pop_front();  //ȥ����߷�
		dscore.pop_back();  //ȥ����ͷ�

		double sum = accumulate(dscore.begin(),dscore.end(),0);  //���
		double avg = sum / (double)dscore.size();

		mContestant[*it].score[this->index - 1] = avg;
		groupScore.insert(make_pair(avg, *it));

		//cout << "test" << endl;
		if (num / 7 == 0)
		{
			if (num == 1)
			{
				cout << "��һС������ɼ�����:" << endl;
			}
			cout << "����:" << mContestant[*it].name << " ���:" << *it << " �ɼ�:" << avg << endl;
		}
		else
		{
			if (num == 7)
			{
				cout << "�ڶ�С������ɼ�����:" << endl;
			}
			cout << "����:" << mContestant[*it].name << " ���:" << *it << " �ɼ�:" << avg << endl;
		}

	}
	int i = 0;
	multimap<double, int, greater<int>>::iterator jt;
	for (i = 0, jt = groupScore.begin(); i < 6; i++, jt++)
	{
		v2.push_back((*jt).second);  //��ǰ�����ı�ű��浽v2��
	}

	cout << "------------------------------------" << endl;
	cout << "���ֱ���ǰ����Ϊ:" << endl;
	for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << endl;
	}

	system("pause");  //�����������
}