#define  _CRT_SECURE_NO_WARNINGS
#include"GRADUATE.H"
#include"math.h"
#include"string"
#include<iostream>
using namespace std;
//----------------三构一析--------------------
Graduate::Graduate()
{
	//cout<<"无参构造函数执行了"<<endl;
}

Graduate::Graduate(const char *n, bool ge,const char i[], double sc, string re, string tu)
{
	//cout<<"有参构造函数执行了"<<endl;
	if (n) 
	{ 
		int l = strlen(n);
		this->name = new char[l + 1]; 
		strcpy(this->name, n);
	}

	strcpy(this->id, i);
	this->gender = ge;
	this->score = sc;
	this->research = re;
	this->tutor = tu;
	total = total + score;
	people++;
}
Graduate::Graduate(const Graduate&other)
{
	//cout<<"拷贝构造函数执行了"<<endl;
	if (other.name) 
	{
		int l = strlen(other.name);
		this->name = new char[l + 1];
		strcpy(this->name, other.name);
	}
	strcpy(this->id, other.id);
	gender = other.gender;
	score = other.score;
	research = other.research;
	tutor = other.tutor;
}
Graduate::~Graduate()
{
	//cout<<"析构函数执行了"<<endl;
}
//------------------普通函数--------------------
void Graduate::Getname()
{
	cout << "该学生的姓名是："<< this->name << endl;
}
void Graduate::Getgender()
{
	cout << "该学生的性别是：" << this->gender << endl;
}
int Graduate::Getid()
{
	cout << "该学生的学号是：" << this->id << endl;
	return id[20];
}
double Graduate::Getscore()
{
	cout << "该学生的入学成绩是：" << this->score << endl;
	return score;
}
void Graduate::Getresearch()
{
	cout << "该学生的研究领域是：" << this->research << endl;
}
void Graduate::Gettutor()
{
	cout << "该学生的导师是：" << this->tutor << endl;
}
//--------------------常成员函数-----------------------------
void Graduate::Getname()const
{
	cout << "该学生的姓名是：" << this->name << endl;
}
void Graduate::Getgender()const
{
	cout << "该学生的性别是：" << this->gender << endl;
}
int Graduate::Getid()const
{
	cout << "该学生的学号是：" << this->id << endl;
	return id[20];
}
double Graduate::Getscore()const
{
	cout << "该学生的入学成绩是：" << this->score << endl;
	return score;
}
void Graduate::Getresearch()const
{
	cout << "该学生的研究领域是：" << this->research << endl;
}
void Graduate::Gettutor()const
{
	cout << "该学生的导师是：" << this->tutor << endl;
}

//------------------友元函数----------------------------------
void ranks(Graduate& A)
{
	if (A.score >= 90)
	{
		cout << "A" << endl;
	}
	else if (A.score >= 80 && A.score < 90)
	{
		cout << "B" << endl;
	}
	else if (A.score >= 70 && A.score < 80)
	{
		cout << "C" << endl;
	}
	else if(A.score >= 60 && A.score < 7)
	{
		cout << "D" << endl;
	}
	else
	{
		cout << "E" << endl;
	}
}
int Graduate::people = 0;
int Graduate::total = 0;
void Graduate::print()
{
	cout << "平均成绩是：";
	double x = total / people;
	cout <<  x<< endl;
}