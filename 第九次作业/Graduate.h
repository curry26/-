#ifndef __GRADUATE_H__
#define __GRADUATE_H__
#include<iostream>
using namespace std;
class Graduate
{
public:
	//-----------------����һ��---------------------
	Graduate();
	Graduate(const char *n, bool ge, const char i[], double sc, string re, string tu);
	Graduate(const Graduate&other);
	~Graduate();

	//-----------------��ͨ����-------------------
	void Getname();
	void Getgender();
	int Getid();
	double Getscore();
	void Getresearch();
	void Gettutor();
	//----------------����Ա����-------------------
	void Getname() const;
	void Getgender() const;
	int Getid()const;
	double Getscore() const;
	void Getresearch()const;
	void Gettutor()const;
	//------------- ��Ԫ����-----------------------
	friend void ranks(Graduate& );
	static void print();
private:
	char *name;
	bool gender;
	char id[20];
	double score;
	string research;
	string tutor;
	static int total;
	static int people;
 
};

#endif
