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
//-----------�޲ι��캯��---------------
student::student()
{
	cout << "�޲ι��캯��ִ����" << endl;
}
//-----------�вι��캯��------------------
student::student(const char *n, const char i[], int a, string h)
{
	cout << "�вι��캯��ִ����" << endl;
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
//------------�������캯��-----------------
student::student(const student&stu)
{
	cout << "�������캯��ִ����" << endl; 
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
//-----------��������--------------------
student::~student()
{
	cout << "��������ִ����" << endl;
}
//------------��ͨ����---------------------
void student::changestudent()
{
	cout << "���Ƿ�Ҫ�޸�����������1Ϊ�ǣ�����2Ϊ��" << endl;
	int x;
	cin >> x;
	if (x == 1)
	{
		char xname[10];
		cout << "�������µ����֣�" << endl;
		cin >> xname;
		int len = strlen(xname);
		this->name = new char[len + 1];
		strcpy(this->name, xname);
	}
	if (x == 2)
	{
		cout << "���޸�" << endl;
	}
	cout << "���Ƿ�Ҫ�޸�ѧ�ţ�����1Ϊ�ǣ�����2Ϊ��" << endl;
	int y;
	cin >> y;
	if (y == 1)
	{
		char xid[10];
		cout << "�������µ�ѧ�ţ�" << endl;
		cin >> xid;
		strcpy(this->id, xid);
	}
	if (y == 2)
	{
		cout << "���޸�" << endl;
	}
	cout << "���Ƿ�Ҫ�޸����䣿����1Ϊ�ǣ�����2Ϊ��" << endl;
	int z;
	cin >> z;
	if (z == 1)
	{
		cout << "�������µ�����" << endl;
		cin >> this->age;
	}
	if (z == 2)
	{
		cout << "���޸�" << endl;
	}
	cout << "���Ƿ�Ҫ�޸�סַ������1Ϊ�ǣ�����2Ϊ��" << endl;
	int k;
	cin >> k;
	if (k == 1)
	{
		cout << "�������µ�סַ" << endl;
		cin >> this->home;
	}
	if (k == 2)
	{
		cout << "���޸�" << endl;
	}

	
}
void student::print()
{
	cout << "����:" << this->name << endl << "ѧ�ţ�" << this->id << endl << "���䣺" << this->age << endl << "סַ��" << this->home << endl;
}
//-------------������--------------------
int main()
{
	cout << "���ߴΣ���������ʹ��" << endl;
	student();
	student lixiao("lixiao","06",19,"weifang");
	lixiao.changestudent();
	lixiao.print();
	student xiaoxiao(lixiao);
	xiaoxiao.print();
	system("pause");
	return 0;
}
