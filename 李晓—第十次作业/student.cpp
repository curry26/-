#define _CRT_SECURE_NO_WARNINGS
#include"STUDENT.H" 
#include"math.h"
#include<string>
#include<iostream>
using namespace std;

int student::total = 0;
//-------------ѧ���������һ��------------
student::student()
{
	//cout << "�޲ι��캯��ִ����" << endl;
	name = "����";
	gender = 1;
	id = "201811010106";
	GPA = 100.00;
	total++;
}
student::student(string n, bool g, string i, double G, string s, string a, int y, int m, int d):sch(s,a),birthday(y, m, d)
{
	//cout << "�вι��캯��ִ����" << endl;
	name = n;
	gender = g;
	id = i;
	GPA = G;
	total++;
}
student::student(const student&other)
{
	//cout << "�������캯��ִ����" << endl;
	name = other.name;
	id = other.id;
	GPA = other.GPA;
	gender = other.gender;

	total++;
}
student::~student()
{
	//cout << "��������ִ����" << endl;
}


//------------ѧ�������ͨ����-------------
void student::print()
{
	cout << "��ѧ���������ǣ�" << name << endl;
	cout << "��ѧ�����Ա��ǣ�" << gender << endl;
	cout << "��ѧ����ѧ���ǣ�" << id << endl;
	cout << "��ѧ���ļ����ǣ�" << GPA << endl;
}
void student::xiugai(string p)
{
	name = p;
}
void student::printdate(date birthday)const
{
	cout << "��ѧ���ĳ������ڣ�" << birthday.getyear() << "��" << birthday.getmonth() << "��" << birthday.getday() << "��" << endl;
	int old;
	old = 2019 - birthday.getyear();
	cout << "��ѧ�����������䣺" << old << endl;
}
void student::printschool(school sch)const
{
	sch.get();
}
//-------------��̬��Ա����----------------
int student::gettotal()
{
	return total;
}

//------------ѧУ��Ĺ��캯��(�޲ι��캯�����вι��캯��)-------------------------------------
school::school()
{
	sname = "ɽ��ʦ����ѧ";
	address = "ɽ��ʡ�����г�����";
}
school::school(string s,string a)
{
	sname = s;
	address = a;
}
//-----------ѧУ�����ͨ����-----------------------------------------
void school::get()
{
	cout << "��ѧ����ѧУ�ǣ�" << sname <<endl<< "��ѧ���ĵ�ַ�ǣ�" << address << endl;
}
//-------------������Ĺ��캯��(�вι��캯��)------------
	date::date()
	{
		year = 2000;
		month = 2;
		day = 4;
	}
date::date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
//-------------���������ͨ����-----------------------------------
int date::getyear()
{
	return year;
}
int date::getmonth()
{
	return month;
}
int date::getday()
{
	return day;
}


//