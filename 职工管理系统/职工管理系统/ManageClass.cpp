#define _CRT_SECURE_NO_WARNINGS 1
#include "ManageClass.h"

//������Ĭ�Ϲ��캯��
Manage::Manage()
{
	//
}

//��������������
Manage::~Manage()
{
	for (vector<Staff*>::iterator it = vStaff.begin(); it != vStaff.end(); it++)
	{
		if (*it != NULL)
		{
			delete* it;  //ɾ���ڶ�������Ŀռ�
		}
	}

	for (vector<Staff*>::iterator it = InfoFromFile.begin(); it != InfoFromFile.end(); it++)
	{
		if (*it != NULL)
		{
			delete* it;  //ɾ���ڶ�������Ŀռ�
		}
	}
}

//�˵�����
void Manage::Menu()
{
	cout << "****************************************************" << endl;
	cout << "**************  ��ӭʹ��Ա������ϵͳ  **************" << endl;
	cout << "**************      0:�˳��������    **************" << endl;
	cout << "**************      1:����ְ����Ϣ    **************" << endl;
	cout << "**************      2:��ʾְ����Ϣ    **************" << endl;
	cout << "**************      3:ɾ����ְְ��    **************" << endl;
	cout << "**************      4:�޸�ְ����Ϣ    **************" << endl;
	cout << "**************      5:����ְ����Ϣ    **************" << endl;
	cout << "**************      6:���ձ������    **************" << endl;
	cout << "**************      7:��������ĵ�    **************" << endl;
	cout << "****************************************************" << endl;
}

//���Ա������
void Manage::AddStaff()
{
	int AddNum;
	cout << "������Ҫ��ӵ���Ա����:" << endl;
	cin >> AddNum;
	if (AddNum > 0)
	{
		for (int i = 0; i < AddNum; i++)
		{
			string Name;
			int PersonalId;
			int DepartId;
			cout << "�������" << i + 1 << "��Ա������:" << endl;
			cin >> Name;
			cout << "�������" << i + 1 << "��Ա�����:" << endl;
			cin >> PersonalId;
			cout << "��ѡ���" << i + 1 << "��Ա��������λ" << endl;
			cout << "1:��ͨԱ��" << endl;
			cout << "2:����" << endl;
			cout << "3:�ϰ�" << endl;
			cin >> DepartId;

			switch(DepartId)
			{
				case 1:
					vStaff.push_back(new Employee(Name, PersonalId, DepartId));
					break;
				case 2:
					vStaff.push_back(new Manager(Name, PersonalId, DepartId));
					break;
				case 3:
					vStaff.push_back(new Boss(Name, PersonalId, DepartId));
					break;
				default:
					cout << "Ա����λ��������" << endl;
			}
		}
	}
	else
	{
		cout << "¼��Ա������Ӧ������" << endl;
	}

	SaveInfoToFile(vStaff);

	//�������������
	system("pause");
	system("cls");
}

//����<<�����������д�ļ�
ofstream& operator<<(ofstream& ofs, const vector<Staff*> v)
{
	for (vector<Staff*>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		ofs << (*it)->Name << " " << (*it)->PersonalId << " " << (*it)->DepartId << endl;
	}
	return ofs;
}


//��Ա����Ϣд���ļ�����
void Manage::SaveInfoToFile(vector<Staff*>& vStaff)
{
	ofstream ofs;
	ofs.open("./Ա����Ϣ.txt", ios::out);
	ofs << vStaff;
	ofs.close();
}

//���ļ��ж�ȡԱ����Ϣ
void Manage::ReadInfoFromFile()
{
	string Name;
	int PersonalId;
	int DepartId;

	ifstream ifs;
	ifs.open("Ա����Ϣ.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "���ļ�ʧ��!" << endl;
	}
	else
	{  
		//�ļ���ȡ
		while (ifs >> Name && ifs >> PersonalId && ifs >> DepartId)
		{
			if (DepartId == 1)
			{
				InfoFromFile.push_back(new Employee(Name, PersonalId, DepartId));
			}
			else if (DepartId == 2)
			{
				InfoFromFile.push_back(new Manager(Name, PersonalId, DepartId));
			}
			else
			{
				InfoFromFile.push_back(new Boss(Name, PersonalId, DepartId));
			}
		}
	}
	ifs.close();
}

//��ӡԱ����Ϣ
void Manage::PrintInfo()
{
	ReadInfoFromFile();
	for (vector<Staff*>::iterator it = InfoFromFile.begin(); it != InfoFromFile.end(); it++)
	{
		switch ((*it)->DepartId)
		{
		case 1:
			(*it)->ShowInfo();
			cout << endl;
			break;
		case 2:
			(*it)->ShowInfo();
			cout << endl;
			break;
		case 3:
			(*it)->ShowInfo();
			cout << endl;
			break;
		}
	}
}

void Manage::DeleteStaff()
{
	int DeleNum;
	cout << "������Ҫɾ����Ա�����" << endl;
	cin >> DeleNum;

	string Name;
	int PersonalId;
	int DepartId;

	ifstream ifs;
	ifs.open("Ա����Ϣ.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "���ļ�ʧ��!" << endl;
	}
	else
	{
		//�ļ���ȡ
		while (ifs >> Name && ifs >> PersonalId && ifs >> DepartId)
		{
			if (DepartId == 1)
			{
				vDelete.push_back(new Employee(Name, PersonalId, DepartId));
			}
			else if (DepartId == 2)
			{
				vDelete.push_back(new Manager(Name, PersonalId, DepartId));
			}
			else
			{
				vDelete.push_back(new Boss(Name, PersonalId, DepartId));
			}
		}
	}
	ifs.close();

	for (int i = 0;i<vDelete.size();i++)
	{
		
		if (DeleNum == vDelete[i]->PersonalId)
		{	
			vector<Staff*>::iterator it = vDelete.begin() + i;
			delete *it;
			vDelete.erase(it);
		}
		
	}

	//����ע�ʹ�������ɾ�������е�Ԫ�ػᵼ�²��ֵ�����ʧЧ�����ɾ��Ԫ�غ�û�м�ʱ���µ����������ܻᵼ�·Ƿ�����
	/*for (vector<Staff*>::iterator it = vDelete.begin(); it != vDelete.end(); it++)
	{
		if (DeleNum == (*it)->PersonalId)
		{
			vDelete.erase(it);
		}
	}*/

	SaveInfoToFile(vDelete);
}