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
	cout << "请输入移动后x的横坐标：" << endl;
	double x1;
	cin >> x1;
	this->x = x1;
	cout << "请输入移动后y的纵坐标" << endl;
	double y1;
	cin >> y1;
	this->y = y1;

}
void Location::print()
{
	cout << "横坐标为：" << x << endl;
	cout << "纵坐标为：" << y << endl;
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
		cout << "横纵坐标的平均值为：" << mid << endl;
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
	cout << "欢迎来到李晓的第十一次c++作业！！！！热烈欢迎！！！" << endl;
	cout << "                  计本1801" << endl;
	cout << "                201811010106" << endl;
	cout << "                    李晓" << endl;
	Location L(5,21);
	cout << "输出对象L的相关信息：" << endl;
	L.print();
	Point P(13,14);
	cout << "输出对象P的相关信息：" << endl;
	P.print();
	cout << "接下来测试move（）函数：修改L的信息：" << endl;
	L.move();
	cout << "输出修改后的L的信息：" << endl;
	L.print();
	cout << "然后修改对象P的信息：" << endl;
	P.move();
	cout << "输出修改后的P的信息：" << endl;
	P.print();
	cout << "接下来测试draw（）函数:求出对象P的横纵坐标均值：" << endl;
	P.draw();
	cout << "然后我们创建一个Circle类对象，并测试move函数draw函数和print函数" << endl;
	Circle C(20, 25);
	cout << "输出C的相关信息：" << endl;
	C.print();
	cout << "修改C的信息：" << endl;
	C.move();
	cout << "输出修改后C的信息：" << endl;
	C.print();
	cout << "测试Circle的draw函数：" << endl;
	C.draw();



	system("pause");
	return 0;
}

