#ifndef __POINT_H__
#define __POINT_H__
//------------------类的声明---------------------------
class Point
{
private:
	double x;//横坐标
	double y;//纵坐标
public:
	Point();//无参构造函数
	Point(double x,double y);//有参构造函数
	Point(const Point&r);//拷贝构造函数

	~Point();//析构函数

	double GetX();//提取横坐标
	double GetY();//提取纵坐标
	void SetX(double ax);//修改横坐标
	void SetY(double bx);//修改纵坐标
	void SwapAxis();//交换坐标值
	friend double GetLength(Point& ,Point& );//友元函数  计算两点距离
};
#endif