/*
#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<math.h>
using namespace std;

class shapes 
{
public:
	//虚函数display()
	virtual void display();
	shapes(int x);
	int a;//图形的基本信息
};
class Rectangle:public shapes
{
public:
	int a;
	Rectangle(int x, int y);
	virtual void display();
};

class circle :public shapes
{
public:
	int a;
	circle(int x, int y);
	virtual void display();
};

shapes::shapes(int x)
{
	a = x;
}
void shapes::display()
{
	cout << "shapes:a=" <<a<< endl;
}

Rectangle::Rectangle(int x, int y):shapes(x)
{
	a = y;
	shapes::a *= 2;
}

void Rectangle::display()
{
	shapes::display();
	cout << "Rectangle:a=" << a << endl;
}
void f(shapes &bb)
{
	bb.display();
}
circle::circle(int x, int y) :shapes(x)
{
	a = y;
	shapes::a *= 2;
}
void circle::display()
{
	shapes::display();
	cout << "circle:a=" << a << endl;
}
int main()
{
	shapes b(100), *ps;
	Rectangle d(200, 300);
	circle c(120, 300);
	ps = &b;
	ps->display();
	ps = &d;
	ps->display();
	ps = &c;
	ps->display();
	f(b);
	f(d);
	f(c);

	system("pause");
	return 0;
}

*/