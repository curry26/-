
#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<math.h>
using namespace std;

class Triangle
{
private:
	double a;
	double b;
	double c;
public:
	Triangle(double aa,double bb,double cc);//有参（含默认值）构造函数
	Triangle(const Triangle&other);//拷贝构造函数
	~Triangle();//析构函数
	double area();//面积计算函数
	double circulate();	//周长计算函数
	//-------------运算符重载函数--------

	double operator+(const Triangle &other);

	Triangle & operator=(const Triangle & other);

	friend ostream& operator<<(ostream &out, const Triangle &);

};
Triangle::Triangle(double aa = 0, double bb = 0, double cc = 0)
{
	a = aa;
	b = bb;
	c = cc;
}
Triangle::Triangle(const Triangle&other)
{
	a = other.a;
	b = other.b;
	c = other.c;

}
Triangle::~Triangle()
{
	cout << "~Triangle() is called!" << endl;
	getchar();
}
double Triangle::area()
{
	double m;
	double x = (a + b + c) / 2;
	m = sqrt(x*(x - a)*(x - b)*(x - c));
	cout << "该三角形的面积为：" <<m<< endl;
	return m;
}
double Triangle::circulate()
{
	double n;
	n = a + b + c;
	cout << "该三角形的周长为" << n << endl;
	return n;
}
double Triangle::operator+(const Triangle &other)
{
	Triangle x;
	x.a = this->a + other.a;
	x.b = this->b + other.b;
	x.c = this->c + other.c;
	double areas;
	areas = x.area();
	return areas;
}
Triangle & Triangle::operator=(const Triangle&other)
{
	this->a = other.a;
	this->b = other.b;
	this->c = other.c;
	return *this;
}
ostream & operator<<(ostream &out, const Triangle &t)
{
	out <<"a="<< t.a <<"  b=" << t.b << "  c=" <<t.c<< endl;
	return out;

}

int main()
{
	cout << "欢迎来到李晓的第十二次c++作业！！！！" << endl;
	cout << "       班级:计本1801" << endl << "         姓名：李晓" << endl << "  学号：201811010106" << endl;
	cout << endl;
	
	cout << "首先我们调用有参构造函数创建一个边长为3、4、5和一个边长为3、3、3的三角形类对象，用它们来测试各个函数：" << endl;
	Triangle T1(3, 4, 5);
	Triangle T2(3, 3, 3);
	cout << "1、先来测试普通函数，包括area()和circulate():" << endl;
	T1.area();
	T1.circulate();
	T2.area();
	T2.circulate();

	cout << "2、然后来测试三个运算符重载函数：" << endl;
	cout << "测试重载运算符“+”：" << endl;
	double p;
	p = T2 + T1;
	cout << "T1和T2的面积之和为：" << p << endl;

	cout << "测试赋值运算符=重载函数：" << endl;
	T1=T2;
	T1.area();
	T1.circulate();
	T2.area();
	T2.circulate();
	cout << "经过测试发现，T1的数据成员和T2的变得相同了。" << endl;
	
	cout << "测试运算符输出运算符<<重载函数：" << endl;
	cout << T1 << endl;

	system("pause");
	return 0;
}
