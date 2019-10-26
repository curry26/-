#include<iostream>
using namespace std;
class Triangle
{
	//三角形的三条边
private:
	double side1;
	double side2;
	double side3;
public:

	void SetTriangle();  //对三角形的三条边初始化
	void judge();//判断能否构成三角形
	double perimeter();//输出三角形周长
	double area();//输出三角形面积
	void type();//输出三角形类型
};
void  Triangle::SetTriangle()
{
	double a, b, c;
	cout << "请依次输入三条边的值：" << endl;
	cin >> a >> b >> c;
	side1 = a;
	side2 = b;
	side3 = c;
}
void Triangle::judge() 
{
	if (side1 + side2 > side3&&side1+side3>side2&&side2+side3>side1) 
	{
		cout << "经过判断，能构成三角形" << endl;
	}
	else
	{
		cout << "不能构成三角形" << endl;
	}
}
double Triangle::perimeter()
{
	cout << "三角形的周长为：";
	cout << side1 + side2 + side3 << endl;
	return side1 + side2 + side3;
}
double Triangle::area()
{
	cout << "三角形的面积为： " ;
	double m = (side1 + side2 + side3) / 2;
	double s= sqrt(m*(m - side1)*(m - side2)*(m - side3));
	cout << s << endl;
	return s;
}
void Triangle::type()
{
	double d;
	if (side2 > side1) 
	{ d = side2; side2 = side1; side1 = d; } 
	if (side3 > side1) 
	{ d = side3; side3 = side1; side1 = d; }
	if (side1*side1 > side2*side2 + side3 * side3) 
	{ cout << "这是个钝角三角形！！！" << endl; }
	else if (side1*side1 < side2*side2 + side3 * side3) 
	{ cout << "这是个锐角三角形！！！" << endl; }
	else 
	{ cout << "这是个直角三角形！！！" << endl; } 
}
int main()
{
	cout << "欢迎欢迎！！！！热烈欢迎！！！" << endl;
	Triangle ss;
	ss.SetTriangle();
	ss.judge();
	ss.perimeter();
	ss.area();
	ss.type();
	system("pause");
}
