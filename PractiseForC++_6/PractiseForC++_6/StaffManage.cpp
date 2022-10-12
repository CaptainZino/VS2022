#define _CRT_SECURE_NO_WARNINGS 1
#include "StaffManage.h"

//默认构造
Staff::Staff()
{
	//
}
//有参构造
Staff::Staff(string StaffNum, string DepartmentNum, string StaffName)
{
	this->StaffNum = StaffNum;
	this->DepartmentNum = DepartmentNum;
	this->StaffName = StaffName;
}
//拷贝构造
Staff::Staff(Staff& staff)
{
	this->StaffNum = staff.StaffNum;
	this->DepartmentNum = staff.DepartmentNum;
	this->StaffName = staff.StaffName;
}
//
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

//添加员工信息
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

//打印所有员工信息
void PrintStaff()
{
	ifstream ifs;
	string buf;

	cout << "普通员工:" << endl;
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

	cout << "经理:" << endl;
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

	cout << "老板:" << endl;
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

//按编号删除员工信息
void DeleteStaff() 
{
	//先将文件内容读入容器，删掉指定行后再写回
	vector<string> vStaff;
	ifstream ifs;
	string buf;
	string DelNum;
	cout << "请输入要删除的员工编号:" << endl;
	cin >> DelNum;

	//普通员工文件
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
		int pos1 = tempNum.find(' ');  //查找空格第一次出现的位置
		int pos2 = tempNum.rfind(' ');  //查找空格第二次出现的位置
		tempNum = tempNum.substr(pos1+1,pos2-pos1-1);  //截取员工编号
		if (DelNum.compare(tempNum) == 0)
		{
			vector<string>::iterator it = vStaff.begin()+i;  //让迭代器指向删除行
			vStaff.erase(it);
		}
		
	}

	ofstream ofs;
	ofs.open("NormalStaff.txt",ios::out);
	for (int i = 0; i < vStaff.size(); i++)
	{
		ofs << vStaff[i] << endl;  //将数据写回文本
	}
	ofs.close();

	//经理员工文件
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
		int pos1 = tempNum.find(' ');  //查找空格第一次出现的位置
		int pos2 = tempNum.rfind(' ');  //查找空格第二次出现的位置
		tempNum = tempNum.substr(pos1 + 1, pos2 - pos1 - 1);  //截取员工编号
		if (DelNum.compare(tempNum) == 0)
		{
			vector<string>::iterator it = vStaff.begin() + i;  //让迭代器指向删除行
			vStaff.erase(it);
		}

	}

	ofs.open("ManagerStaff.txt", ios::out);
	for (int i = 0; i < vStaff.size(); i++)
	{
		ofs << vStaff[i] << endl;  //将数据写回文本
	}
	ofs.close();

	//老板文件
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
		int pos1 = tempNum.find(' ');  //查找空格第一次出现的位置
		int pos2 = tempNum.rfind(' ');  //查找空格第二次出现的位置
		tempNum = tempNum.substr(pos1 + 1, pos2 - pos1 - 1);  //截取员工编号
		if (DelNum.compare(tempNum) == 0)
		{
			vector<string>::iterator it = vStaff.begin() + i;  //让迭代器指向删除行
			vStaff.erase(it);
		}

	}

	ofs.open("Boss.txt", ios::out);
	for (int i = 0; i < vStaff.size(); i++)
	{
		ofs << vStaff[i] << endl;  //将数据写回文本
	}
	ofs.close();

}

//按姓名或编号查找员工信息
void FindStaff()
{
	string FindIndex;
	cout << "请输入要查找的职工姓名或编号:" << endl;
	cin >> FindIndex;
	string buf;
	ifstream ifs;
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
		string namebuf = buf.substr(0, pos1);  //截取员工姓名
		string numbuf = buf.substr(pos1 + 1, pos2 - pos1 - 1);  //截取员工编号
		if (FindIndex.compare(namebuf) == 0 || FindIndex.compare(numbuf) == 0)
		{
			cout << "姓名为" << FindIndex << "的职工的信息:" << buf << endl;
		}

	}
	ifs.close();

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
		string namebuf = buf.substr(0, pos1);  //截取员工姓名
		string numbuf = buf.substr(pos1 + 1, pos2 - pos1 - 1);  //截取员工编号
		if (FindIndex.compare(namebuf) == 0 || FindIndex.compare(numbuf) == 0)
		{
			cout << "姓名为" << FindIndex << "的职工的信息:" << buf << endl;
		}

	}
	ifs.close();

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
		string namebuf = buf.substr(0, pos1);  //截取员工姓名
		string numbuf = buf.substr(pos1 + 1, pos2 - pos1 - 1);  //截取员工编号
		if (FindIndex.compare(namebuf) == 0 || FindIndex.compare(numbuf) == 0)
		{
			cout << "姓名为" << FindIndex << "的职工的信息:" << buf << endl;
		}

	}
	ifs.close();
}