#include"POINT.H"
#include"windows.h"
#include<cstdlib>
#include<iostream>
using namespace std;
//-------------------主函数-----------------------------------
int main()
{
	cout << "第八次c++作业！！！！" << endl;
	
	cout << "请依次输入栈上端点对象数组十个点的坐标：" << endl;
	Point *array_stack = new Point[10];
	cout << "请依次输入堆上端点对象数组十个点的坐标：" << endl;
	Point *array_heap = new Point[10];
	double lx[10];
	cout << "任务：输出这两个对象数组中相同位置上两个对象之间的距离，如下：" << endl;
	for (int i = 0; i < 10; i++)
	{
		lx[i] = GetLength(array_heap[i],array_stack[i]);
		cout << "第" << i+1 << "对之间的距离为：" << lx[i] << endl;
	}

	cout << "接下来我们测试一下其他的功能！" << endl;
	cout << "我们以点（8,25）为例进行演示" << endl;
	Point A(8,25);
	cout << "请选择你要执行的功能：" << endl;
	cout << "1、提取该点的横坐标" << endl;
	cout << "2、提取该点的纵坐标" << endl;
	cout << "3、修改该点的横坐标" << endl;
	cout << "4、修改该点的纵坐标" << endl;
	cout << "5、交换该点的横纵坐标值" << endl;
	cout << "0:退出" << endl;
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
			cout << "请输入修改后的横坐标值：" << endl;
			double z;
			cin >> z;
			A.SetX(z);
			A.GetX();
			break;
		case 4:
			cout << "请输入修改后的纵坐标值：" << endl;
			double v;
			cin >> v;
			A.SetY(v);
			A.GetY();
			break;
		case 5:
			A.SwapAxis();
			cout << "交换坐标值后的横纵坐标为：" << endl;
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
