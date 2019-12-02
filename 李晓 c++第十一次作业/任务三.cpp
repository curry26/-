#include<iostream>
#include"windows.h"
#include<cstdlib>
using namespace std;


class Location
{
public:
	double x;
	double y;

	Location(double xx = 0, double yy = 0)
	{
		//cout << "Location() is called" << endl;
		this->x = xx;
		this->y = yy;
	}
	~Location()
	{
		cout << "~Location() is called!" << endl;
		getchar();
	}
	void move();
	void print();

};

void Location::move()
{
	cout << "�������ƶ���x�ĺ����꣺" << endl;
	double x1;
	cin >> x1;
	this->x = x1;
	cout << "�������ƶ���y��������" << endl;
	double y1;
	cin >> y1;
	this->y = y1;

}
void Location::print()
{
	cout << "������Ϊ��" << x << endl;
	cout << "������Ϊ��" << y << endl;
}
class Point :public Location
{
public:

	Point(double x1=0,double y1=0)
	{
		this->x = x1;
		this->y = y1;
	}
	~Point()
	{
		cout << "~Point() is called!!" << endl;
		getchar();
	}
	void move()
	{
		Location::move();
	}
	void draw()
	{
		double mid;
		mid = (x +y) / 2;
		cout << "���������ƽ��ֵΪ��" << mid << endl;
	}
};
class Circle:public Point
{
public:
	Circle(double x2=0,double y2=0)
	{
		this->x = x2;
		this->y = y2;

	}
	~Circle()
	{
		cout << "~Circle() is called" << endl;
		getchar();
	}
};
int main()
{
	cout << "��ӭ���������ĵ�ʮһ��c++��ҵ�����������һ�ӭ������" << endl;
	cout << "                  �Ʊ�1801" << endl;
	cout << "                201811010106" << endl;
	cout << "                    ����" << endl;
	Location L(5,21);
	cout << "�������L�������Ϣ��" << endl;
	L.print();
	Point P(13,14);
	cout << "�������P�������Ϣ��" << endl;
	P.print();
	cout << "����������move�����������޸�L����Ϣ��" << endl;
	L.move();
	cout << "����޸ĺ��L����Ϣ��" << endl;
	L.print();
	cout << "Ȼ���޸Ķ���P����Ϣ��" << endl;
	P.move();
	cout << "����޸ĺ��P����Ϣ��" << endl;
	P.print();
	cout << "����������draw��������:�������P�ĺ��������ֵ��" << endl;
	P.draw();
	cout << "Ȼ�����Ǵ���һ��Circle����󣬲�����move����draw������print����" << endl;
	Circle C(20, 25);
	cout << "���C�������Ϣ��" << endl;
	C.print();
	cout << "�޸�C����Ϣ��" << endl;
	C.move();
	cout << "����޸ĺ�C����Ϣ��" << endl;
	C.print();
	cout << "����Circle��draw������" << endl;
	C.draw();



	system("pause");
	return 0;
}

