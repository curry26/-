#include"STUDENT.H" 
#include"windows.h"
#include<cstdlib>
#include<string>
#include<iostream>
using namespace std;

int main()
{
	cout << "************��ӭ���������ĵ�ʮ��c++��ҵ�������һ�ӭ������*************" << endl;
	cout << "                    �Ʊ�1801 " << endl << "                  201811010106" << endl<< "                     ����" << endl;
	cout << "���ȣ��������вι��캯���������������ͬѧ����" << endl;
	student lixiaoxiao("������", 1, "201811010106", 150, "ɽ��ʦ����ѧ", "ɽ��ʡ�����г�����", 2000, 12, 8);
	date birthday(2000, 12, 8);
	school sch("ɽ��ʦ����ѧ", "ɽ��ʡ�����г�����");
	lixiaoxiao.print();
	lixiaoxiao.printdate(birthday);
	lixiaoxiao.printschool(sch);
	
	cout << endl;
	//cout << "�������������޲ι��캯����������ͬѧ�������" << endl;
	//student lixiao;
	//lixiao.print();
	//cout << endl;
	
	cout << "�������������ÿ������캯���ٴ���һ��ͬѧ�������" << endl;
	student lida(lixiaoxiao);
	lida.xiugai("���");
	lida.print();

	cout << endl;
	cout << "�ѹ�����ѧ������ĸ���Ϊ��" << lixiaoxiao.gettotal() << endl;
	system("pause");
	return 0;
}