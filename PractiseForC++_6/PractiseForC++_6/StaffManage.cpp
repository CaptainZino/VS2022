#define _CRT_SECURE_NO_WARNINGS 1
#include "StaffManage.h"

Staff::Staff()
{
	//
}
Staff::Staff(string StaffNum, string DepartmentNum, string StaffName)
{
	this->StaffNum = StaffNum;
	this->DepartmentNum = DepartmentNum;
	this->StaffName = StaffName;
}
Staff::Staff(Staff& staff)
{
	this->StaffNum = staff.StaffNum;
	this->DepartmentNum = staff.DepartmentNum;
	this->StaffName = staff.StaffName;
}

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

void PrintStaff()
{
	string name;
	cout << "������Ҫ��ʾ��ְ������:" << endl;
	cin >> name;
	string buf;
	ifstream ifs;
	ifs.open("NormalStaff.txt",ios::in);
	while (getline(ifs,buf)) 
	{
		int pos = buf.find(' ');
		string namebuf = buf.substr(0, pos);
		if (name.compare(namebuf) == 0)
		{
			cout << "����Ϊ" << name << "��ְ������Ϣ:" << buf << endl;
		}

	}
	ifs.close();

	ifs.open("ManagerStaff.txt", ios::in);
	while (getline(ifs, buf))
	{
		int pos = buf.find(' ');
		string namebuf = buf.substr(0, pos);
		if (name.compare(namebuf) == 0)
		{
			cout << "����Ϊ" << name << "��ְ������Ϣ:" << buf << endl;
		}

	}
	ifs.close();

	ifs.open("Boss.txt", ios::in);
	while (getline(ifs, buf))
	{
		int pos = buf.find(' ');
		string namebuf = buf.substr(0, pos);
		if (name.compare(namebuf) == 0)
		{
			cout << "����Ϊ" << name << "��ְ������Ϣ:" << buf << endl;
		}

	}
	ifs.close();
}