#define  _CRT_SECURE_NO_WARNINGS
#include"GRADUATE.H"
#include"math.h"
#include"string"
#include<iostream>
using namespace std;
//----------------����һ��--------------------
Graduate::Graduate()
{
	//cout<<"�޲ι��캯��ִ����"<<endl;
}

Graduate::Graduate(const char *n, bool ge,const char i[], double sc, string re, string tu)
{
	//cout<<"�вι��캯��ִ����"<<endl;
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
	//cout<<"�������캯��ִ����"<<endl;
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
	//cout<<"��������ִ����"<<endl;
}
//------------------��ͨ����--------------------
void Graduate::Getname()
{
	cout << "��ѧ���������ǣ�"<< this->name << endl;
}
void Graduate::Getgender()
{
	cout << "��ѧ�����Ա��ǣ�" << this->gender << endl;
}
int Graduate::Getid()
{
	cout << "��ѧ����ѧ���ǣ�" << this->id << endl;
	return id[20];
}
double Graduate::Getscore()
{
	cout << "��ѧ������ѧ�ɼ��ǣ�" << this->score << endl;
	return score;
}
void Graduate::Getresearch()
{
	cout << "��ѧ�����о������ǣ�" << this->research << endl;
}
void Graduate::Gettutor()
{
	cout << "��ѧ���ĵ�ʦ�ǣ�" << this->tutor << endl;
}
//--------------------����Ա����-----------------------------
void Graduate::Getname()const
{
	cout << "��ѧ���������ǣ�" << this->name << endl;
}
void Graduate::Getgender()const
{
	cout << "��ѧ�����Ա��ǣ�" << this->gender << endl;
}
int Graduate::Getid()const
{
	cout << "��ѧ����ѧ���ǣ�" << this->id << endl;
	return id[20];
}
double Graduate::Getscore()const
{
	cout << "��ѧ������ѧ�ɼ��ǣ�" << this->score << endl;
	return score;
}
void Graduate::Getresearch()const
{
	cout << "��ѧ�����о������ǣ�" << this->research << endl;
}
void Graduate::Gettutor()const
{
	cout << "��ѧ���ĵ�ʦ�ǣ�" << this->tutor << endl;
}

//------------------��Ԫ����----------------------------------
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
	cout << "ƽ���ɼ��ǣ�";
	double x = total / people;
	cout <<  x<< endl;
}