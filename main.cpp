#define _CRT_SECURE_NO_WARNINGS
#include<windows.h>
#include<cstdlib>
#include"string"
#include<iostream>
using namespace std;

class student
{
private:
	char *name;
	char id[10];
	int age;
	string home;
public:
	student();
	student(const char *n,const char i[],int a,string h);
	student(const student &stu);

	~student();

	void changestudent();
	void print();

};
//-----------无参构造函数---------------
student::student()
{
	cout << "无参构造函数执行了" << endl;
}
//-----------有参构造函数------------------
student::student(const char *n, const char i[], int a, string h)
{
	cout << "有参构造函数执行了" << endl;
	if (n)
	{
		int l = strlen(n);
		this->name = new char[l + 1];
		strcpy(this->name, n);
	}
	strcpy(this->id, i);
	this->age = a;
	this->home = h;
}
//------------拷贝构造函数-----------------
student::student(const student&stu)
{
	cout << "拷贝构造函数执行了" << endl; 
	age = stu.age;
	home = stu.home;
	if (stu.name)
	{
		int l = strlen(stu.name);
		this->name = new char[l + 1];
		strcpy(this->name,stu.name);
	}
	strcpy(this->id, stu.id);
}
//-----------析构函数--------------------
student::~student()
{
	cout << "析构函数执行了" << endl;
}
//------------普通函数---------------------
void student::changestudent()
{
	cout << "您是否要修改姓名？输入1为是，输入2为否" << endl;
	int x;
	cin >> x;
	if (x == 1)
	{
		char xname[10];
		cout << "请输入新的名字：" << endl;
		cin >> xname;
		int len = strlen(xname);
		this->name = new char[len + 1];
		strcpy(this->name, xname);
	}
	if (x == 2)
	{
		cout << "不修改" << endl;
	}
	cout << "您是否要修改学号？输入1为是，输入2为否" << endl;
	int y;
	cin >> y;
	if (y == 1)
	{
		char xid[10];
		cout << "请输入新的学号：" << endl;
		cin >> xid;
		strcpy(this->id, xid);
	}
	if (y == 2)
	{
		cout << "不修改" << endl;
	}
	cout << "您是否要修改年龄？输入1为是，输入2为否" << endl;
	int z;
	cin >> z;
	if (z == 1)
	{
		cout << "请输入新的年龄" << endl;
		cin >> this->age;
	}
	if (z == 2)
	{
		cout << "不修改" << endl;
	}
	cout << "您是否要修改住址？输入1为是，输入2为否" << endl;
	int k;
	cin >> k;
	if (k == 1)
	{
		cout << "请输入新的住址" << endl;
		cin >> this->home;
	}
	if (k == 2)
	{
		cout << "不修改" << endl;
	}

	
}
void student::print()
{
	cout << "姓名:" << this->name << endl << "学号：" << this->id << endl << "年龄：" << this->age << endl << "住址：" << this->home << endl;
}
//-------------主函数--------------------
int main()
{
	cout << "第七次：类的设计与使用" << endl;
	student();
	student lixiao("lixiao","06",19,"weifang");
	lixiao.changestudent();
	lixiao.print();
	student xiaoxiao(lixiao);
	xiaoxiao.print();
	system("pause");
	return 0;
}
