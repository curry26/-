#define  _CRT_SECURE_NO_WARNINGS
#include"POINT.H"
#include"math.h"
#include<iostream>
using namespace std;

//-------------------类的实现（三种构造函数+析构函数）-----------------
Point::Point()
{
	//cout << "无参构造函数执行了" << endl;
	cout << "请输入点的坐标：" << endl;
	double m, n;
	cin >> m >> n;
	this->x = m;
	this->y = n;

}
Point::Point(double a,double b)
{
	//cout << "有参构造函数执行了" << endl;
	this->x = a;
	this->y = b;
}
Point::Point(const Point&r)
{
	//cout << "拷贝构造函数被执行了" << endl;
	x = r.x;
	y = r.y;
}

Point::~Point()
{
	//cout << "析构函数执行了" << endl;
}
//-----------------类的实现（普通函数）-----------------------
double Point::GetX()
{
	cout << "该点的横坐标是：" << x << endl;
	return x;
}
double Point::GetY()
{
	cout << "该点的纵坐标是：" << y << endl;
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
//---------------------类的实现（友元函数）--------------------
double GetLength(Point& A, Point& B)
{
	double distence,a,b;
	a = (A.x-B.x)*(A.x - B.x);
	b = (A.y-B.y)*(A.y - B.y);
	distence = sqrt(a + b);
	return distence;
}