#ifndef __STUDETNT_H__
#define __STUDENT_H__
#include<iostream>
#include"string.h"
using namespace std;

//---------ѧУschool��-----------------------------
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

//----------����date��----------------------------------
class date
{
public:
	date();//date����޲ι��캯��
	date(int y, int m, int d);//date����вι��캯��
	int getyear();
	int getmonth();
	int getday();
private:
	int year;
	int month;
	int day;
};

//------------------ѧ��student��------------------------------
class student
{
public:
	//-----------------����һ��--------------------- 
	student();
	student(string n, bool g, string i, double G,string s,string a, int y, int m, int d);
	student(const student&other);
	~student();
	//-----------------��ͨ����-------------------
	void print();
	void xiugai(string p);

	void printdate(date birthday)const;//������������Լ����ڵ�����
	void printschool(school sch)const;

    //-----------------��̬��Ա����--------------
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