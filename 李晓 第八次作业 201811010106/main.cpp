#include"POINT.H"
#include"windows.h"
#include<cstdlib>
#include<iostream>
using namespace std;
//-------------------������-----------------------------------
int main()
{
	cout << "�ڰ˴�c++��ҵ��������" << endl;
	
	cout << "����������ջ�϶˵��������ʮ��������꣺" << endl;
	Point *array_stack = new Point[10];
	cout << "������������϶˵��������ʮ��������꣺" << endl;
	Point *array_heap = new Point[10];
	double lx[10];
	cout << "�������������������������ͬλ������������֮��ľ��룬���£�" << endl;
	for (int i = 0; i < 10; i++)
	{
		lx[i] = GetLength(array_heap[i],array_stack[i]);
		cout << "��" << i+1 << "��֮��ľ���Ϊ��" << lx[i] << endl;
	}

	cout << "���������ǲ���һ�������Ĺ��ܣ�" << endl;
	cout << "�����Ե㣨8,25��Ϊ��������ʾ" << endl;
	Point A(8,25);
	cout << "��ѡ����Ҫִ�еĹ��ܣ�" << endl;
	cout << "1����ȡ�õ�ĺ�����" << endl;
	cout << "2����ȡ�õ��������" << endl;
	cout << "3���޸ĸõ�ĺ�����" << endl;
	cout << "4���޸ĸõ��������" << endl;
	cout << "5�������õ�ĺ�������ֵ" << endl;
	cout << "0:�˳�" << endl;
	int p;
	while (true)
	{
		
		cin >> p;
		switch (p)
		{
		case 1:
			A.GetX();
			break;
		case 2:
			A.GetY();
			break;
		case 3:
			cout << "�������޸ĺ�ĺ�����ֵ��" << endl;
			double z;
			cin >> z;
			A.SetX(z);
			A.GetX();
			break;
		case 4:
			cout << "�������޸ĺ��������ֵ��" << endl;
			double v;
			cin >> v;
			A.SetY(v);
			A.GetY();
			break;
		case 5:
			A.SwapAxis();
			cout << "��������ֵ��ĺ�������Ϊ��" << endl;
			A.GetX();
			A.GetY();
			break;
		default:
			break;
		}
		if (p == 0)
			break;
	}
	system("pause");
	return 0;
}
