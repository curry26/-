#include"stdlib.h"
#include"math.h"
#include<iostream>
using namespace std;
void first()
{
	float a, b, c;
	float x,x1,x2;
	float d, e, f1,f2;

	cout << "***��������*****����*****��������***   ����һ   ***��������*****����*****��������***" << endl << endl;
	cout << "������a��ֵ��";
	cin >> a;
	cout << "������b��ֵ��";
	cin >> b;
	cout << "������c��ֵ��";
	cin >> c;

	d = b * b - 4 * a*c;
	e = sqrt(d);
	
	f1 = -b + e;
	f2 = -b - e;
	

	if (d > 0) {
		cout << "���������������ֱ��ǣ�" << endl;
		x1 = f1 / 2 / a;
		x2 = f2 / 2 / a;
		cout << "x1=" << x1 << "  " << "x2=" << x2 << endl;

	}else if(d=0){
		cout << "����ֻ��һ������ " << endl;
		x = (-b) / 2 / a;
		cout << "x=" << x << endl;
	}
	else {
		cout << "�����޽⣡����" << endl;
	}



	system("pause");


}


void second()
{
	cout << "***��������*****����*****��������***   �����   ***��������*****����*****��������***" << endl << endl;
	float a, b, c, q,s;

	cout << "������߳�a��ֵ��";
	cin >> a;
	cout << "������߳�b��ֵ��";
	cin >> b;
	cout << "������߳�c��ֵ��";
	cin >> c;
	q = (a + b + c) / 2;
	s = sqrt(q*(q - a)*(q - b)*(q - c));
	cout << "�������ε����Ϊ��" << s << endl;
	system("pause");
}
void third() 
{
	cout << "***��������*****����*****��������***   ������   ***��������*****����*****��������***" << endl << endl;
	int i, days = 0, weeks = 0;
	int year, month, day;
	int day_tab[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	cout<<"�����ꡢ�¡��գ��ÿո������"<<endl;
	cin>> year>> month>>day;
	for (i = 1; i < month; i++)
	{
		days += day_tab[i];
	}
	days += day;
	if ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0) && month >= 3)
		days += 1;
	if (days % 7 == 0)
		weeks = days / 7;
	else 
		weeks = days / 7 + 1;

	cout<<year<<"��"<<month<<"��"<<day<<"��"<<"����һ��ĵ�"<<days<<"�죡"<<"�ǵ�"<<weeks<<"��"<<endl;
	system("pause");
}