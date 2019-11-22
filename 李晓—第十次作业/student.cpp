#define _CRT_SECURE_NO_WARNINGS
#include"STUDENT.H" 
#include"math.h"
#include<string>
#include<iostream>
using namespace std;

int student::total = 0;
//-------------学生类的三构一析------------
student::student()
{
	//cout << "无参构造函数执行了" << endl;
	name = "李晓";
	gender = 1;
	id = "201811010106";
	GPA = 100.00;
	total++;
}
student::student(string n, bool g, string i, double G, string s, string a, int y, int m, int d):sch(s,a),birthday(y, m, d)
{
	//cout << "有参构造函数执行了" << endl;
	name = n;
	gender = g;
	id = i;
	GPA = G;
	total++;
}
student::student(const student&other)
{
	//cout << "拷贝构造函数执行了" << endl;
	name = other.name;
	id = other.id;
	GPA = other.GPA;
	gender = other.gender;

	total++;
}
student::~student()
{
	//cout << "析构函数执行了" << endl;
}


//------------学生类的普通函数-------------
void student::print()
{
	cout << "该学生的姓名是：" << name << endl;
	cout << "该学生的性别是：" << gender << endl;
	cout << "该学生的学号是：" << id << endl;
	cout << "该学生的绩点是：" << GPA << endl;
}
void student::xiugai(string p)
{
	name = p;
}
void student::printdate(date birthday)const
{
	cout << "该学生的出生日期：" << birthday.getyear() << "年" << birthday.getmonth() << "月" << birthday.getday() << "日" << endl;
	int old;
	old = 2019 - birthday.getyear();
	cout << "该学生的现在年龄：" << old << endl;
}
void student::printschool(school sch)const
{
	sch.get();
}
//-------------静态成员函数----------------
int student::gettotal()
{
	return total;
}

//------------学校类的构造函数(无参构造函数及有参构造函数)-------------------------------------
school::school()
{
	sname = "山东师范大学";
	address = "山东省济南市长清区";
}
school::school(string s,string a)
{
	sname = s;
	address = a;
}
//-----------学校类的普通函数-----------------------------------------
void school::get()
{
	cout << "该学生的学校是：" << sname <<endl<< "该学生的地址是：" << address << endl;
}
//-------------日期类的构造函数(有参构造函数)------------
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
//-------------日期类的普通函数-----------------------------------
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