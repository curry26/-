#define  _CRT_SECURE_NO_WARNINGS
#include"POINT.H"
#include"math.h"
#include<iostream>
using namespace std;

//-------------------���ʵ�֣����ֹ��캯��+����������-----------------
Point::Point()
{
	//cout << "�޲ι��캯��ִ����" << endl;
	cout << "�����������꣺" << endl;
	double m, n;
	cin >> m >> n;
	this->x = m;
	this->y = n;

}
Point::Point(double a,double b)
{
	//cout << "�вι��캯��ִ����" << endl;
	this->x = a;
	this->y = b;
}
Point::Point(const Point&r)
{
	//cout << "�������캯����ִ����" << endl;
	x = r.x;
	y = r.y;
}

Point::~Point()
{
	//cout << "��������ִ����" << endl;
}
//-----------------���ʵ�֣���ͨ������-----------------------
double Point::GetX()
{
	cout << "�õ�ĺ������ǣ�" << x << endl;
	return x;
}
double Point::GetY()
{
	cout << "�õ���������ǣ�" << y << endl;
	return y;
}
void Point::SetX(double ax)
{
	this->x = ax;
}
void Point::SetY(double bx)
{
	this->y = bx;
}
void Point::SwapAxis()
{
	double g;
	g = x;
	x = y;
	y = g;
}
//---------------------���ʵ�֣���Ԫ������--------------------
double GetLength(Point& A, Point& B)
{
	double distence,a,b;
	a = (A.x-B.x)*(A.x - B.x);
	b = (A.y-B.y)*(A.y - B.y);
	distence = sqrt(a + b);
	return distence;
}