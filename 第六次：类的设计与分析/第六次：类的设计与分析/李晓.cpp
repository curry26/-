#include<iostream>
using namespace std;
class Triangle
{
	//�����ε�������
private:
	double side1;
	double side2;
	double side3;
public:

	void SetTriangle();  //�������ε������߳�ʼ��
	void judge();//�ж��ܷ񹹳�������
	double perimeter();//����������ܳ�
	double area();//������������
	void type();//�������������
	void show();
};
void  Triangle::SetTriangle()
{
	double a, b, c;
	cout << "���������������ߵ�ֵ��" << endl;
	cin >> a >> b >> c;
	side1 = a;
	side2 = b;
	side3 = c;
}
void Triangle::judge()
{
	if (side1 + side2 > side3&&side1 + side3 > side2&&side2 + side3 > side1)
	{
		cout << "�����жϣ��ܹ���������" << endl;
	}
	else
	{
		cout << "���ܹ���������" << endl;
	}
}
double Triangle::perimeter()
{
	cout << "�����ε��ܳ�Ϊ��";
	cout << side1 + side2 + side3 << endl;
	return side1 + side2 + side3;
}
double Triangle::area()
{
	cout << "�����ε����Ϊ�� ";
	double m = (side1 + side2 + side3) / 2;
	double s = sqrt(m*(m - side1)*(m - side2)*(m - side3));
	cout << s << endl;
	return s;
}
void Triangle::type()
{
	double d;
	if (side2 > side1)
	{
		d = side2; side2 = side1; side1 = d;
	}
	if (side3 > side1)
	{
		d = side3; side3 = side1; side1 = d;
	}
	if (side1*side1 > side2*side2 + side3 * side3)
	{
		cout << "���Ǹ��۽������Σ�����" << endl;
	}
	else if (side1*side1 < side2*side2 + side3 * side3)
	{
		cout << "���Ǹ���������Σ�����" << endl;
	}
	else
	{
		cout << "���Ǹ�ֱ�������Σ�����" << endl;
	}
}
void Triangle::show()
{
	cout << "side1��λ�ã�" << &this->side1 << endl;
	cout << "side2��λ�ã�" << &this->side2 << endl;
	cout << "side3��λ�ã�" << &this->side3 << endl;
}
int main()
{
	cout << "��ӭ��ӭ�����������һ�ӭ������" << endl;
	cout << "��һ�󲿷֣�" << endl;
	Triangle ss;
	ss.SetTriangle();
	ss.judge();
	ss.perimeter();
	ss.area();
	ss.type();
	cout << "�ڶ��󲿷֣�" << endl;
	Triangle s1;
	Triangle s2;
	Triangle s3;
	s1.SetTriangle();
	s2.SetTriangle();
	s3.SetTriangle();
	cout << "����һ��" << endl;
	cout << "s1�Ĵ洢���ݴ�С��" << sizeof(s1) << endl;
	cout << "s2�Ĵ洢���ݴ�С��" << sizeof(s2) << endl;
	cout << "s3�Ĵ洢���ݴ�С��" << sizeof(s3) << endl;
	cout << "��������" << endl;
	cout << "s1��λ�ã�" << &s1 << endl;
	cout << "s2��λ�ã�" << &s2 << endl;
	cout << "s3��λ�ã�" << &s3 << endl;
	cout << "��������" << endl;
	s1.show();
	system("pause");
}

