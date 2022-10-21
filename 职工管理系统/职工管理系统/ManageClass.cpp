#define _CRT_SECURE_NO_WARNINGS 1
#include "ManageClass.h"

//管理类默认构造函数
Manage::Manage()
{
	//
}

//管理类析构函数
Manage::~Manage()
{
	for (vector<Staff*>::iterator it = vStaff.begin(); it != vStaff.end(); it++)
	{
		if (*it != NULL)
		{
			delete* it;  //删除在堆上申请的空间
		}
	}

	for (vector<Staff*>::iterator it = InfoFromFile.begin(); it != InfoFromFile.end(); it++)
	{
		if (*it != NULL)
		{
			delete* it;  //删除在堆上申请的空间
		}
	}
}

//菜单函数
void Manage::Menu()
{
	cout << "****************************************************" << endl;
	cout << "**************  欢迎使用员工管理系统  **************" << endl;
	cout << "**************      0:退出管理程序    **************" << endl;
	cout << "**************      1:增加职工信息    **************" << endl;
	cout << "**************      2:显示职工信息    **************" << endl;
	cout << "**************      3:删除离职职工    **************" << endl;
	cout << "**************      4:修改职工信息    **************" << endl;
	cout << "**************      5:查找职工信息    **************" << endl;
	cout << "**************      6:按照编号排序    **************" << endl;
	cout << "**************      7:清空所有文档    **************" << endl;
	cout << "****************************************************" << endl;
}

//添加员工函数
void Manage::AddStaff()
{
	int AddNum;
	cout << "请输入要添加的人员数量:" << endl;
	cin >> AddNum;
	if (AddNum > 0)
	{
		for (int i = 0; i < AddNum; i++)
		{
			string Name;
			int PersonalId;
			int DepartId;
			cout << "请输入第" << i + 1 << "个员工姓名:" << endl;
			cin >> Name;
			cout << "请输入第" << i + 1 << "个员工编号:" << endl;
			cin >> PersonalId;
			cout << "请选择第" << i + 1 << "个员工所属岗位" << endl;
			cout << "1:普通员工" << endl;
			cout << "2:经理" << endl;
			cout << "3:老板" << endl;
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
					cout << "员工岗位输入有误" << endl;
			}
		}
	}
	else
	{
		cout << "录入员工数量应大于零" << endl;
	}

	SaveInfoToFile(vStaff);

	//按任意键后清屏
	system("pause");
	system("cls");
}

//重载<<运算符，进行写文件
ofstream& operator<<(ofstream& ofs, const vector<Staff*> v)
{
	for (vector<Staff*>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		ofs << (*it)->Name << " " << (*it)->PersonalId << " " << (*it)->DepartId << endl;
	}
	return ofs;
}


//将员工信息写入文件保存
void Manage::SaveInfoToFile(vector<Staff*>& vStaff)
{
	ofstream ofs;
	ofs.open("./员工信息.txt", ios::out);
	ofs << vStaff;
	ofs.close();
}

//从文件中读取员工信息
void Manage::ReadInfoFromFile()
{
	string Name;
	int PersonalId;
	int DepartId;

	ifstream ifs;
	ifs.open("员工信息.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "打开文件失败!" << endl;
	}
	else
	{  
		//文件读取
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

//打印员工信息
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
	cout << "请输入要删除的员工编号" << endl;
	cin >> DeleNum;

	string Name;
	int PersonalId;
	int DepartId;

	ifstream ifs;
	ifs.open("员工信息.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "打开文件失败!" << endl;
	}
	else
	{
		//文件读取
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

	//以下注释代码有误，删除容器中的元素会导致部分迭代器失效，如果删除元素后没有及时更新迭代器，可能会导致非法访问
	/*for (vector<Staff*>::iterator it = vDelete.begin(); it != vDelete.end(); it++)
	{
		if (DeleNum == (*it)->PersonalId)
		{
			vDelete.erase(it);
		}
	}*/

	SaveInfoToFile(vDelete);
}