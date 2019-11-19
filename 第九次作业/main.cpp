#include"GRADUATE.H"
#include"windows.h"
#include<cstdlib>
#include<iostream>
using namespace std;

int main()
{
	cout << "李晓的第九次作业" << endl;
	cout << "附加：1代表男性，0代表女性" << endl;
	Graduate();
	cout << "接下来我们以李晓同学为例：" << endl;
	Graduate lixiao("李晓", 1, "201811010106",100, "计算机", "张庆科");
	lixiao.Getname();
	lixiao.Getgender();
	lixiao.Getid();
	lixiao.Getscore();
	lixiao.Getresearch();
	lixiao.Gettutor();
	cout << "李晓的等级是：" << endl;
	ranks(lixiao);
	Graduate::print();


	system("pause");
	return 0;

}