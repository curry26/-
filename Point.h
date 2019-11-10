#ifndef __POINT_H__
#define __POINT_H__
//------------------�������---------------------------
class Point
{
private:
	double x;//������
	double y;//������
public:
	Point();//�޲ι��캯��
	Point(double x,double y);//�вι��캯��
	Point(const Point&r);//�������캯��

	~Point();//��������

	double GetX();//��ȡ������
	double GetY();//��ȡ������
	void SetX(double ax);//�޸ĺ�����
	void SetY(double bx);//�޸�������
	void SwapAxis();//��������ֵ
	friend double GetLength(Point& ,Point& );//��Ԫ����  �����������
};
#endif