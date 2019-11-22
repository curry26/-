#include"STUDENT.H" 
#include"windows.h"
#include<cstdlib>
#include<string>
#include<iostream>
using namespace std;

int main()
{
	cout << "************欢迎来到李晓的第十次c++作业！！热烈欢迎！！！*************" << endl;
	cout << "                    计本1801 " << endl << "                  201811010106" << endl<< "                     李晓" << endl;
	cout << "首先，我们用有参构造函数创建李晓晓这个同学对象" << endl;
	student lixiaoxiao("李晓晓", 1, "201811010106", 150, "山东师范大学", "山东省济南市长清区", 2000, 12, 8);
	date birthday(2000, 12, 8);
	school sch("山东师范大学", "山东省济南市长清区");
	lixiaoxiao.print();
	lixiaoxiao.printdate(birthday);
	lixiaoxiao.printschool(sch);
	
	cout << endl;
	//cout << "接下来我们用无参构造函数创建李晓同学这个对象" << endl;
	//student lixiao;
	//lixiao.print();
	//cout << endl;
	
	cout << "接下来，我们用拷贝构造函数再创建一个同学对象李大" << endl;
	student lida(lixiaoxiao);
	lida.xiugai("李大");
	lida.print();

	cout << endl;
	cout << "已构建的学生对象的个数为：" << lixiaoxiao.gettotal() << endl;
	system("pause");
	return 0;
}