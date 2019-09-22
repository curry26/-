#include"stdlib.h"
#include"math.h"
#include<iostream>
using namespace std;
void first()
{
	float a, b, c;
	float x,x1,x2;
	float d, e, f1,f2;

	cout << "***————*****……*****————***   任务一   ***————*****……*****————***" << endl << endl;
	cout << "请输入a的值：";
	cin >> a;
	cout << "请输入b的值：";
	cin >> b;
	cout << "请输入c的值：";
	cin >> c;

	d = b * b - 4 * a*c;
	e = sqrt(d);
	
	f1 = -b + e;
	f2 = -b - e;
	

	if (d > 0) {
		cout << "函数有两个根，分别是：" << endl;
		x1 = f1 / 2 / a;
		x2 = f2 / 2 / a;
		cout << "x1=" << x1 << "  " << "x2=" << x2 << endl;

	}else if(d=0){
		cout << "函数只有一个根： " << endl;
		x = (-b) / 2 / a;
		cout << "x=" << x << endl;
	}
	else {
		cout << "函数无解！！！" << endl;
	}



	system("pause");


}


void second()
{
	cout << "***————*****……*****————***   任务二   ***————*****……*****————***" << endl << endl;
	float a, b, c, q,s;

	cout << "请输入边长a的值：";
	cin >> a;
	cout << "请输入边长b的值：";
	cin >> b;
	cout << "请输入边长c的值：";
	cin >> c;
	q = (a + b + c) / 2;
	s = sqrt(q*(q - a)*(q - b)*(q - c));
	cout << "该三角形的面积为：" << s << endl;
	system("pause");
}
void third() 
{
	cout << "***————*****……*****————***   任务三   ***————*****……*****————***" << endl << endl;
	int i, days = 0, weeks = 0;
	int year, month, day;
	int day_tab[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	cout<<"输入年、月、日，用空格隔开："<<endl;
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

	cout<<year<<"年"<<month<<"月"<<day<<"日"<<"是这一年的第"<<days<<"天！"<<"是第"<<weeks<<"周"<<endl;
	system("pause");
}