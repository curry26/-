#ifndef __STUDETNT_H__
#define __STUDENT_H__
#include<iostream>
#include"string.h"
using namespace std;

//---------学校school类-----------------------------
class school
{
public:
	school();
	school(string s, string a);
	void get();
private:
	string sname;
	string address;
};

//----------日期date类----------------------------------
class date
{
public:
	date();//date类的无参构造函数
	date(int y, int m, int d);//date类的有参构造函数
	int getyear();
	int getmonth();
	int getday();
private:
	int year;
	int month;
	int day;
};

//------------------学生student类------------------------------
class student
{
public:
	//-----------------三构一析--------------------- 
	student();
	student(string n, bool g, string i, double G,string s,string a, int y, int m, int d);
	student(const student&other);
	~student();
	//-----------------普通函数-------------------
	void print();
	void xiugai(string p);

	void printdate(date birthday)const;//输出出生日期以及现在的年龄
	void printschool(school sch)const;

    //-----------------静态成员函数--------------
	static int gettotal();
private:
	string name;
	bool gender;
	string id;
	double GPA;

	school sch;
	date birthday;
	static int total;
};
#endif