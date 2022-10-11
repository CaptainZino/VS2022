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
	cout << "员工姓名:" << this->StaffName << endl;
	cout << "员工编号:" << this->StaffNum << endl;
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

//重载<<运算符，进行写文件
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

		cout << "请输入员工类型:" << endl;
		cout << "0:老板 1:经理 2:普通员工" << endl;
		cin >> StaffType;
		if (StaffType == 0)
		{
			Boss* pstaff = NULL;
			pstaff = new Boss(StaffNum, DepartmentNum, StaffName);
			SaveInfo(*pstaff);
			delete pstaff;
			cout << "老板信息录入成功" << endl;
		}
		else if (StaffType == 1)
		{
			ManagerStaff* pstaff = NULL;
			pstaff = new ManagerStaff(StaffNum, DepartmentNum, StaffName);
			SaveInfo(*pstaff);
			delete pstaff;
			cout << "经理信息录入成功" << endl;
		}
		else if (StaffType == 2)
		{
			NormalStaff* pstaff = NULL;
			pstaff = new NormalStaff(StaffNum, DepartmentNum, StaffName);
			SaveInfo(*pstaff);
			delete pstaff;
			cout << "普通员工信息录入成功" << endl;
		}
		else
		{
			cout << "输入错误" << endl;
		}

		cout << "继续录入请按1，结束录入请按0:" << endl;
		cin >> input;
		if (input != 0 && input != 1)
		{
			cout << "输入错误，请重新输入！" << endl;
			cin >> input;
		}

	} while (input);
}

void PrintStaff()
{
	string name;
	cout << "请输入要显示的职工姓名:" << endl;
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
			cout << "姓名为" << name << "的职工的信息:" << buf << endl;
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
			cout << "姓名为" << name << "的职工的信息:" << buf << endl;
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
			cout << "姓名为" << name << "的职工的信息:" << buf << endl;
		}

	}
	ifs.close();
}