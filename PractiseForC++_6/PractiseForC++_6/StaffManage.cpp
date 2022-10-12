#define _CRT_SECURE_NO_WARNINGS 1
#include "StaffManage.h"

//Ĭ�Ϲ���
Staff::Staff()
{
	//
}
//�вι���
Staff::Staff(string StaffNum, string DepartmentNum, string StaffName)
{
	this->StaffNum = StaffNum;
	this->DepartmentNum = DepartmentNum;
	this->StaffName = StaffName;
}
//��������
Staff::Staff(Staff& staff)
{
	this->StaffNum = staff.StaffNum;
	this->DepartmentNum = staff.DepartmentNum;
	this->StaffName = staff.StaffName;
}
//
void Staff::PrintStaff()
{
	cout << "Ա������:" << this->StaffName << endl;
	cout << "Ա�����:" << this->StaffNum << endl;
}
string Staff:: GetStaffName()
{
	return this->StaffName;
}

string Staff:: GetStaffNum()
{
	return this->StaffNum;
}
string Staff::GetDepartmentNum()
{
	return this->DepartmentNum;
}

NormalStaff::NormalStaff(string StaffNum, string DepartmentNum, string StaffName)
{
	this->StaffNum = StaffNum;
	this->DepartmentNum = DepartmentNum;
	this->StaffName = StaffName;
}
ManagerStaff::ManagerStaff(string StaffNum, string DepartmentNum, string StaffName)
{
	this->StaffNum = StaffNum;
	this->DepartmentNum = DepartmentNum;
	this->StaffName = StaffName;
}
Boss::Boss(string StaffNum, string DepartmentNum, string StaffName)
{
	this->StaffNum = StaffNum;
	this->DepartmentNum = DepartmentNum;
	this->StaffName = StaffName;
}

//����<<�����������д�ļ�
ofstream& operator<<(ofstream& StaffFile,Staff& staff)
{
	StaffFile << staff.GetStaffName() << " " << staff.GetStaffNum() << " " << staff.GetDepartmentNum() << endl;
	return StaffFile;
}


void SaveInfo(NormalStaff& staff)
{
	ofstream ofs;
	ofs.open("NormalStaff.txt",ios::app);
	ofs << staff;
	ofs.close();
}
void SaveInfo(ManagerStaff& staff)
{
	ofstream ofs;
	ofs.open("ManagerStaff.txt", ios::app);
	ofs << staff;
	ofs.close();
}
void SaveInfo(Boss& staff)
{
	ofstream ofs;
	ofs.open("Boss.txt", ios::app);
	ofs << staff;
	ofs.close();
}

//���Ա����Ϣ
void AddStaff()
{
	int input = 0;
	int StaffType;
	string StaffName;
	string StaffNum;
	string DepartmentNum;
	do
	{
		cout << "please input staff name:" << endl;
		cin >> StaffName;
		cout << "please input staff number:" << endl;
		cin >> StaffNum;
		cout << "please input staff department number:" << endl;
		cin >> DepartmentNum;

		cout << "������Ա������:" << endl;
		cout << "0:�ϰ� 1:���� 2:��ͨԱ��" << endl;
		cin >> StaffType;
		if (StaffType == 0)
		{
			Boss* pstaff = NULL;
			pstaff = new Boss(StaffNum, DepartmentNum, StaffName);
			SaveInfo(*pstaff);
			delete pstaff;
			cout << "�ϰ���Ϣ¼��ɹ�" << endl;
		}
		else if (StaffType == 1)
		{
			ManagerStaff* pstaff = NULL;
			pstaff = new ManagerStaff(StaffNum, DepartmentNum, StaffName);
			SaveInfo(*pstaff);
			delete pstaff;
			cout << "������Ϣ¼��ɹ�" << endl;
		}
		else if (StaffType == 2)
		{
			NormalStaff* pstaff = NULL;
			pstaff = new NormalStaff(StaffNum, DepartmentNum, StaffName);
			SaveInfo(*pstaff);
			delete pstaff;
			cout << "��ͨԱ����Ϣ¼��ɹ�" << endl;
		}
		else
		{
			cout << "�������" << endl;
		}

		cout << "����¼���밴1������¼���밴0:" << endl;
		cin >> input;
		if (input != 0 && input != 1)
		{
			cout << "����������������룡" << endl;
			cin >> input;
		}

	} while (input);
}

//��ӡ����Ա����Ϣ
void PrintStaff()
{
	ifstream ifs;
	string buf;

	cout << "��ͨԱ��:" << endl;
	ifs.open("NormalStaff.txt", ios::in);
	if (!ifs.is_open())
	{
		perror("open file");
		return;
	}
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}
	ifs.close();

	cout << "����:" << endl;
	ifs.open("ManagerStaff.txt", ios::in);
	if (!ifs.is_open())
	{
		perror("open file");
		return;
	}
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}
	ifs.close();

	cout << "�ϰ�:" << endl;
	ifs.open("Boss.txt", ios::in);
	if (!ifs.is_open())
	{
		perror("open file");
		return;
	}
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}
	ifs.close();
}

//�����ɾ��Ա����Ϣ
void DeleteStaff() 
{
	//�Ƚ��ļ����ݶ���������ɾ��ָ���к���д��
	vector<string> vStaff;
	ifstream ifs;
	string buf;
	string DelNum;
	cout << "������Ҫɾ����Ա�����:" << endl;
	cin >> DelNum;

	//��ͨԱ���ļ�
	ifs.open("NormalStaff.txt",ios::in);
	if (!ifs.is_open())
	{
		perror("open file");
		return;
	}
	while (getline(ifs, buf))
	{
		vStaff.push_back(buf);
	}
	ifs.close();

	for (int i = 0; i < vStaff.size(); i++)
	{
		string tempNum = vStaff[i];
		int pos1 = tempNum.find(' ');  //���ҿո��һ�γ��ֵ�λ��
		int pos2 = tempNum.rfind(' ');  //���ҿո�ڶ��γ��ֵ�λ��
		tempNum = tempNum.substr(pos1+1,pos2-pos1-1);  //��ȡԱ�����
		if (DelNum.compare(tempNum) == 0)
		{
			vector<string>::iterator it = vStaff.begin()+i;  //�õ�����ָ��ɾ����
			vStaff.erase(it);
		}
		
	}

	ofstream ofs;
	ofs.open("NormalStaff.txt",ios::out);
	for (int i = 0; i < vStaff.size(); i++)
	{
		ofs << vStaff[i] << endl;  //������д���ı�
	}
	ofs.close();

	//����Ա���ļ�
	ifs.open("ManagerStaff.txt", ios::in);
	if (!ifs.is_open())
	{
		perror("open file");
		return;
	}
	while (getline(ifs, buf))
	{
		vStaff.push_back(buf);
	}
	ifs.close();

	for (int i = 0; i < vStaff.size(); i++)
	{
		string tempNum = vStaff[i];
		int pos1 = tempNum.find(' ');  //���ҿո��һ�γ��ֵ�λ��
		int pos2 = tempNum.rfind(' ');  //���ҿո�ڶ��γ��ֵ�λ��
		tempNum = tempNum.substr(pos1 + 1, pos2 - pos1 - 1);  //��ȡԱ�����
		if (DelNum.compare(tempNum) == 0)
		{
			vector<string>::iterator it = vStaff.begin() + i;  //�õ�����ָ��ɾ����
			vStaff.erase(it);
		}

	}

	ofs.open("ManagerStaff.txt", ios::out);
	for (int i = 0; i < vStaff.size(); i++)
	{
		ofs << vStaff[i] << endl;  //������д���ı�
	}
	ofs.close();

	//�ϰ��ļ�
	ifs.open("Boss.txt", ios::in);
	if (!ifs.is_open())
	{
		perror("open file");
		return;
	}
	while (getline(ifs, buf))
	{
		vStaff.push_back(buf);
	}
	ifs.close();

	for (int i = 0; i < vStaff.size(); i++)
	{
		string tempNum = vStaff[i];
		int pos1 = tempNum.find(' ');  //���ҿո��һ�γ��ֵ�λ��
		int pos2 = tempNum.rfind(' ');  //���ҿո�ڶ��γ��ֵ�λ��
		tempNum = tempNum.substr(pos1 + 1, pos2 - pos1 - 1);  //��ȡԱ�����
		if (DelNum.compare(tempNum) == 0)
		{
			vector<string>::iterator it = vStaff.begin() + i;  //�õ�����ָ��ɾ����
			vStaff.erase(it);
		}

	}

	ofs.open("Boss.txt", ios::out);
	for (int i = 0; i < vStaff.size(); i++)
	{
		ofs << vStaff[i] << endl;  //������д���ı�
	}
	ofs.close();

}

//�޸�Ա����Ϣ:
void ModifyStaff()
{
	//�Ƚ��ļ����ݶ����������޸�ָ���к���д��
	vector<string> vStaff;
	ifstream ifs;
	string buf;
	string ModifyNum;
	string name;
	string PersonalNumber;
	string DepartNumber;
	string ModifyInfo;
	string space = " ";
	cout << "������Ҫ�޸ĵ�Ա�����:" << endl;
	cin >> ModifyNum;

	cout << "�������޸ĺ������:" << endl;
	cin >> name;
	cout << "�������޸ĺ��Ա�����:" << endl;
	cin >> PersonalNumber;
	cout << "�������޸ĺ�Ĳ��ű��" << endl;
	cin >> DepartNumber;

	//ƴ���޸ĺ��Ա����Ϣ
	ModifyInfo += name;
	ModifyInfo += space;
	ModifyInfo += PersonalNumber;
	ModifyInfo += space;
	ModifyInfo += DepartNumber;

	//��ͨԱ���ļ�
	ifs.open("NormalStaff.txt", ios::in);
	if (!ifs.is_open())
	{
		perror("open file");
		return;
	}
	while (getline(ifs, buf))
	{
		vStaff.push_back(buf);
	}
	ifs.close();

	for (int i = 0; i < vStaff.size(); i++)
	{
		string tempNum = vStaff[i];
		int pos1 = tempNum.find(' ');  //���ҿո��һ�γ��ֵ�λ��
		int pos2 = tempNum.rfind(' ');  //���ҿո�ڶ��γ��ֵ�λ��
		tempNum = tempNum.substr(pos1 + 1, pos2 - pos1 - 1);  //��ȡԱ�����
		if (ModifyNum.compare(tempNum) == 0)
		{
			vStaff[i] = ModifyInfo;
		}

	}

	ofstream ofs;
	ofs.open("NormalStaff.txt", ios::out);
	for (int i = 0; i < vStaff.size(); i++)
	{
		ofs << vStaff[i] << endl;  //������д���ı�
	}
	ofs.close();

	//����Ա���ļ�
	ifs.open("ManagerStaff.txt", ios::in);
	if (!ifs.is_open())
	{
		perror("open file");
		return;
	}
	while (getline(ifs, buf))
	{
		vStaff.push_back(buf);
	}
	ifs.close();

	for (int i = 0; i < vStaff.size(); i++)
	{
		string tempNum = vStaff[i];
		int pos1 = tempNum.find(' ');  //���ҿո��һ�γ��ֵ�λ��
		int pos2 = tempNum.rfind(' ');  //���ҿո�ڶ��γ��ֵ�λ��
		tempNum = tempNum.substr(pos1 + 1, pos2 - pos1 - 1);  //��ȡԱ�����
		if (ModifyNum.compare(tempNum) == 0)
		{
			vStaff[i] = ModifyInfo;
		}

	}

	ofs.open("ManagerStaff.txt", ios::out);
	for (int i = 0; i < vStaff.size(); i++)
	{
		ofs << vStaff[i] << endl;  //������д���ı�
	}
	ofs.close();

	//�ϰ��ļ�
	ifs.open("Boss.txt", ios::in);
	if (!ifs.is_open())
	{
		perror("open file");
		return;
	}
	while (getline(ifs, buf))
	{
		vStaff.push_back(buf);
	}
	ifs.close();

	for (int i = 0; i < vStaff.size(); i++)
	{
		string tempNum = vStaff[i];
		int pos1 = tempNum.find(' ');  //���ҿո��һ�γ��ֵ�λ��
		int pos2 = tempNum.rfind(' ');  //���ҿո�ڶ��γ��ֵ�λ��
		tempNum = tempNum.substr(pos1 + 1, pos2 - pos1 - 1);  //��ȡԱ�����
		if (ModifyNum.compare(tempNum) == 0)
		{
			vStaff[i] = ModifyInfo;
		}

	}

	ofs.open("Boss.txt", ios::out);
	for (int i = 0; i < vStaff.size(); i++)
	{
		ofs << vStaff[i] << endl;  //������д���ı�
	}
	ofs.close();
}

//���������Ų���Ա����Ϣ
void FindStaff()
{
	string FindIndex;
	cout << "������Ҫ���ҵ�ְ����������:" << endl;
	cin >> FindIndex;
	string buf;
	ifstream ifs;

	//��ͨԱ���ļ�
	ifs.open("NormalStaff.txt", ios::in);
	if (!ifs.is_open())
	{
		perror("open file");
		return;
	}
	while (getline(ifs, buf))
	{
		int pos1 = buf.find(' ');
		int pos2 = buf.rfind(' ');
		string namebuf = buf.substr(0, pos1);  //��ȡԱ������
		string numbuf = buf.substr(pos1 + 1, pos2 - pos1 - 1);  //��ȡԱ�����
		if (FindIndex.compare(namebuf) == 0 || FindIndex.compare(numbuf) == 0)
		{
			cout << "����Ϊ" << FindIndex << "��ְ������Ϣ:" << buf << endl;
		}

	}
	ifs.close();

	//����Ա���ļ�
	ifs.open("ManagerStaff.txt", ios::in);
	if (!ifs.is_open())
	{
		perror("open file");
		return;
	}
	while (getline(ifs, buf))
	{
		int pos1 = buf.find(' ');
		int pos2 = buf.rfind(' ');
		string namebuf = buf.substr(0, pos1);  //��ȡԱ������
		string numbuf = buf.substr(pos1 + 1, pos2 - pos1 - 1);  //��ȡԱ�����
		if (FindIndex.compare(namebuf) == 0 || FindIndex.compare(numbuf) == 0)
		{
			cout << "����Ϊ" << FindIndex << "��ְ������Ϣ:" << buf << endl;
		}

	}
	ifs.close();

	//�ϰ��ļ�
	ifs.open("Boss.txt", ios::in);
	if (!ifs.is_open())
	{
		perror("open file");
		return;
	}
	while (getline(ifs, buf))
	{
		int pos1 = buf.find(' ');
		int pos2 = buf.rfind(' ');
		string namebuf = buf.substr(0, pos1);  //��ȡԱ������
		string numbuf = buf.substr(pos1 + 1, pos2 - pos1 - 1);  //��ȡԱ�����
		if (FindIndex.compare(namebuf) == 0 || FindIndex.compare(numbuf) == 0)
		{
			cout << "����Ϊ" << FindIndex << "��ְ������Ϣ:" << buf << endl;
		}

	}
	ifs.close();
}

//ͨ��Ա����Ŷ�Ա����������
void SortStaff()
{
	vector<string> vStaff;
	vector<string> vNumber;
	ifstream ifs;
	string buf;

	//��ͨԱ���ļ�
	ifs.open("NormalStaff.txt", ios::in);
	if (!ifs.is_open())
	{
		perror("open file");
		return;
	}
	while (getline(ifs, buf))
	{
		vStaff.push_back(buf);
	}
	ifs.close();

	vNumber.reserve(vStaff.size());  //ΪvNumberԤ���ռ�
	for (int i = 0; i < vStaff.size(); i++)
	{
		string tempNum = vStaff[i];
		int pos1 = tempNum.find(' ');  //���ҿո��һ�γ��ֵ�λ��
		int pos2 = tempNum.rfind(' ');  //���ҿո�ڶ��γ��ֵ�λ��
		tempNum = tempNum.substr(pos1 + 1, pos2 - pos1 - 1);  //��ȡԱ�����
		vNumber.push_back(tempNum);  //����Ա�����

	}

	sort(vNumber.begin(),vNumber.end());  //ͨ���㷨�Ա�Ž�������

	cout << "��ͨԱ��:" << endl;
	for (int i = 0; i < vNumber.size(); i++)
	{
		for (int j = 0; j < vStaff.size(); j++)
		{
			string tempNum = vStaff[j];
			int pos1 = tempNum.find(' ');  //���ҿո��һ�γ��ֵ�λ��
			int pos2 = tempNum.rfind(' ');  //���ҿո�ڶ��γ��ֵ�λ��
			tempNum = tempNum.substr(pos1 + 1, pos2 - pos1 - 1);  //��ȡԱ�����
			if (tempNum.compare(vNumber[i]) == 0)
			{
				cout << vStaff[j] << endl;
			}
			
		}
	}

	//����Ա���ļ�

	vStaff.resize(0);  //���vStaff
	vNumber.resize(0);  //���vNumber

	ifs.open("ManagerStaff.txt", ios::in);
	if (!ifs.is_open())
	{
		perror("open file");
		return;
	}
	while (getline(ifs, buf))
	{
		vStaff.push_back(buf);
	}
	ifs.close();

	vNumber.reserve(vStaff.size());  //ΪvNumberԤ���ռ�
	for (int i = 0; i < vStaff.size(); i++)
	{
		string tempNum = vStaff[i];
		int pos1 = tempNum.find(' ');  //���ҿո��һ�γ��ֵ�λ��
		int pos2 = tempNum.rfind(' ');  //���ҿո�ڶ��γ��ֵ�λ��
		tempNum = tempNum.substr(pos1 + 1, pos2 - pos1 - 1);  //��ȡԱ�����
		vNumber.push_back(tempNum);  //����Ա�����

	}

	sort(vNumber.begin(), vNumber.end());  //ͨ���㷨�Ա�Ž�������

	cout << "����Ա��:" << endl;
	for (int i = 0; i < vNumber.size(); i++)
	{
		for (int j = 0; j < vStaff.size(); j++)
		{
			string tempNum = vStaff[j];
			int pos1 = tempNum.find(' ');  //���ҿո��һ�γ��ֵ�λ��
			int pos2 = tempNum.rfind(' ');  //���ҿո�ڶ��γ��ֵ�λ��
			tempNum = tempNum.substr(pos1 + 1, pos2 - pos1 - 1);  //��ȡԱ�����
			if (tempNum.compare(vNumber[i]) == 0)
			{
				cout << vStaff[j] << endl;
			}

		}
	}

	//�ϰ��ļ�

	vStaff.resize(0);  //���vStaff
	vNumber.resize(0);  //���vNumber

	ifs.open("Boss.txt", ios::in);
	if (!ifs.is_open())
	{
		perror("open file");
		return;
	}
	while (getline(ifs, buf))
	{
		vStaff.push_back(buf);
	}
	ifs.close();

	vNumber.reserve(vStaff.size());  //ΪvNumberԤ���ռ�
	for (int i = 0; i < vStaff.size(); i++)
	{
		string tempNum = vStaff[i];
		int pos1 = tempNum.find(' ');  //���ҿո��һ�γ��ֵ�λ��
		int pos2 = tempNum.rfind(' ');  //���ҿո�ڶ��γ��ֵ�λ��
		tempNum = tempNum.substr(pos1 + 1, pos2 - pos1 - 1);  //��ȡԱ�����
		vNumber.push_back(tempNum);  //����Ա�����

	}

	sort(vNumber.begin(), vNumber.end());  //ͨ���㷨�Ա�Ž�������

	cout << "�ϰ�:" << endl;
	for (int i = 0; i < vNumber.size(); i++)
	{
		for (int j = 0; j < vStaff.size(); j++)
		{
			string tempNum = vStaff[j];
			int pos1 = tempNum.find(' ');  //���ҿո��һ�γ��ֵ�λ��
			int pos2 = tempNum.rfind(' ');  //���ҿո�ڶ��γ��ֵ�λ��
			tempNum = tempNum.substr(pos1 + 1, pos2 - pos1 - 1);  //��ȡԱ�����
			if (tempNum.compare(vNumber[i]) == 0)
			{
				cout << vStaff[j] << endl;
			}

		}
	}
}

//����ļ��е�ְ����Ϣ
void ClearStaff()
{
	vector<string> vStaff;
	ifstream ifs;
	string buf;
	int confirm;
	
	cout << "�Ƿ�ȷ��Ҫִ���ļ���ղ�����ȷ���밴1�������밴0:" << endl;
	cin >> confirm;
	if (confirm == 1)
	{
		//��ͨԱ���ļ�
		ifs.open("NormalStaff.txt", ios::in);
		if (!ifs.is_open())
		{
			perror("open file");
			return;
		}
		while (getline(ifs, buf))
		{
			vStaff.push_back(buf);
		}
		ifs.close();

		vStaff.resize(0);  //������������е�����
		vector<string>(vStaff).swap(vStaff);  //������������������������ڴ�ռ�

		ofstream ofs;
		ofs.open("NormalStaff.txt", ios::out);
		for (int i = 0; i < vStaff.size(); i++)
		{
			ofs << vStaff[i] << endl;  //������д���ı�
		}
		ofs.close();

		//����Ա���ļ�
		ifs.open("ManagerStaff.txt", ios::in);
		if (!ifs.is_open())
		{
			perror("open file");
			return;
		}
		while (getline(ifs, buf))
		{
			vStaff.push_back(buf);
		}
		ifs.close();

		vStaff.resize(0);  //������������е�����
		vector<string>(vStaff).swap(vStaff);  //������������������������ڴ�ռ�

		ofs.open("ManagerStaff.txt", ios::out);
		for (int i = 0; i < vStaff.size(); i++)
		{
			ofs << vStaff[i] << endl;  //������д���ı�
		}
		ofs.close();

		//�ϰ��ļ�
		ifs.open("Boss.txt", ios::in);
		if (!ifs.is_open())
		{
			perror("open file");
			return;
		}
		while (getline(ifs, buf))
		{
			vStaff.push_back(buf);
		}
		ifs.close();

		vStaff.resize(0);  //��ն��������е�����
		vector<string>(vStaff).swap(vStaff);  //������������ڴ�ռ�

		ofs.open("Boss.txt", ios::out);
		for (int i = 0; i < vStaff.size(); i++)
		{
			ofs << vStaff[i] << endl;  //������д���ı�
		}
		ofs.close();

		cout << "�ļ������!!!" << endl;
	}
	else if (confirm == 0)
	{
		return;
	}
	else
	{
		cout << "������󣡣���" << endl;
		return;
	}
}
