
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
	Triangle(double aa,double bb,double cc);//�вΣ���Ĭ��ֵ�����캯��
	Triangle(const Triangle&other);//�������캯��
	~Triangle();//��������
	double area();//������㺯��
	double circulate();	//�ܳ����㺯��
	//-------------��������غ���--------

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
	cout << "�������ε����Ϊ��" <<m<< endl;
	return m;
}
double Triangle::circulate()
{
	double n;
	n = a + b + c;
	cout << "�������ε��ܳ�Ϊ" << n << endl;
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
	cout << "��ӭ���������ĵ�ʮ����c++��ҵ��������" << endl;
	cout << "       �༶:�Ʊ�1801" << endl << "         ����������" << endl << "  ѧ�ţ�201811010106" << endl;
	cout << endl;
	
	cout << "�������ǵ����вι��캯������һ���߳�Ϊ3��4��5��һ���߳�Ϊ3��3��3������������������������Ը���������" << endl;
	Triangle T1(3, 4, 5);
	Triangle T2(3, 3, 3);
	cout << "1������������ͨ����������area()��circulate():" << endl;
	T1.area();
	T1.circulate();
	T2.area();
	T2.circulate();

	cout << "2��Ȼ��������������������غ�����" << endl;
	cout << "���������������+����" << endl;
	double p;
	p = T2 + T1;
	cout << "T1��T2�����֮��Ϊ��" << p << endl;

	cout << "���Ը�ֵ�����=���غ�����" << endl;
	T1=T2;
	T1.area();
	T1.circulate();
	T2.area();
	T2.circulate();
	cout << "�������Է��֣�T1�����ݳ�Ա��T2�ı����ͬ�ˡ�" << endl;
	
	cout << "�����������������<<���غ�����" << endl;
	cout << T1 << endl;

	system("pause");
	return 0;
}
