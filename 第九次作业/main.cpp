#include"GRADUATE.H"
#include"windows.h"
#include<cstdlib>
#include<iostream>
using namespace std;

int main()
{
	cout << "�����ĵھŴ���ҵ" << endl;
	cout << "���ӣ�1�������ԣ�0����Ů��" << endl;
	Graduate();
	cout << "����������������ͬѧΪ����" << endl;
	Graduate lixiao("����", 1, "201811010106",100, "�����", "�����");
	lixiao.Getname();
	lixiao.Getgender();
	lixiao.Getid();
	lixiao.Getscore();
	lixiao.Getresearch();
	lixiao.Gettutor();
	cout << "�����ĵȼ��ǣ�" << endl;
	ranks(lixiao);
	Graduate::print();


	system("pause");
	return 0;

}