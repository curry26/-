#include<iostream>
#include"windows.h"
#include<cstdlib>
using namespace std;

class base
{
public:
	//-----------三构一析-----------------------------------
	//base();//无参构造函数
	base(int aa, int bb, int cc);//有参构造函数
	//base(const base&other);//拷贝构造函数
	~base();//析构函数

	//-----------普通函数----------------------------------
	void print();//输出类的数据成员函数
	//----------统计类对象个数函数--------------------------
	static int statistic();

public:
	int a;
protected:
	int b;
private:
	int c;
	static int count;
};
int base::count = 0;
class derived1 :public base
{
private:
	int x;
public:
	derived1(int x1 = 4) :base(1, 2, 3)
	{
		cout << "derived1() is called!" << endl;
		this->x = x1;
	
	}
	~derived1()
	{
		cout << "~derived1() is called!!!" << endl;
		getchar();
	}
	void print()
	{
		//基类数据传承探索
		a = 200;//a_pub仍为公有数据,子类内可以直接访问
		b = 200;//a_pro仍为保护数据,子类内可以直接访问
		//c = 200;//报错,基类私有成员在子类不可见

		//基类函数传承探索
		base::print();
		cout << "自身添加数据成员: x = " << x << endl;


	}
};
class derived2 :protected base
{
private:
	int y;
public:
	derived2(int y1 = 4) :base(1, 2, 3)
	{
		cout << "derived2() is called!" << endl;
		this->y = y1;
		
	}
	~derived2()
	{
		cout << "~derived2() is called!!!" << endl;
		getchar();
	}
	void print()
	{
		//基类数据传承探索
		a = 300;//a_pub变为保护数据,类内可以直接访问
		b = 300;//a_pro变为保护数据,类内可以直接访问
		//c = 300;//报错,基类私有成员在子类不可见

		//基类函数传承探索
		base::print();
		cout << "自身添加数据成员: y = " << y << endl;


	}
};
class derived3 :private base
{
private:
	int z;
public:
	derived3(int z1 = 4) :base(1, 2, 3)
	{
		cout << "derived3() is called!" << endl;
		this->z = z1;
		
	}
	~derived3()
	{
		cout << "~derived3() is called!!!" << endl;
		getchar();
	}

	void display()//探索私有继承
	{
		//基类数据传承探索
		a = 400;//a_pub变为私有数据,子类内可以直接访问
		b = 400;//a_pro变为私有数据,子类内可以直接访问
		//c = 400;//报错,基类私有成员在子类不可见

		//基类函数传承探索
		base::print();
		cout << "自身添加数据成员: z = " << z << endl;


	}
};

base::base(int aa=0, int bb=0, int cc=0)
{
	cout<<"base() is called"<<endl;
	this->a = aa;
	this->b = bb;
	this->c = cc;
	count++;
}

base::~base()
{
	cout<<"~base() is called"<<endl;
	getchar();
}
void base::print()
{
	cout << "a="<<a<<endl;
	cout << "b="<<b<<endl;
	cout << "c="<<c<<endl;
}
int base::statistic()
{
	return count;

}
int main()
{
	cout << "欢迎来到李晓的第十一次c++作业！！！！热烈欢迎！！！" << endl;
	cout << "                  计本1801" << endl;
	cout << "                201811010106" << endl;
	cout << "                    李晓" << endl;
	cout << "正式开始前对代码的测试：首先创建一个base的one对象并输出其相关的数据成员：" << endl;
	base one(1,2,3);
	one.print();
	cout << "已创建的类对象个数为：" << endl;
	cout << one.statistic() << endl;
	cout << "一、正式开始：" << endl<< "首先进行第一个问题，通过比较类的大小来论证派生类全盘接受基类的所有本类成员：" << endl;
	cout << "derived1的大小：" <<sizeof(derived1)<< endl;
	cout << "derived2的大小：" << sizeof(derived2) << endl;
	cout << "derived3的大小：" << sizeof(derived3) << endl;
	cout << "通过比较发现用三种不同继承方式派生出来的三个类的大小是相同的，所以可以论证出第一个问题：派生类全盘接受基类的所有本类成员，包括普通公有成员、保护成员和私有成员" << endl;
	cout << "二、接下来进行第二个问题：根据继承类数据成员能否在类内或类外被访问的问题，探索分析三种不同继承方式各自的特点" << endl;
	cout << "本问题的相关解释见代码的注释！！！" << endl;
#if 0
	//------------类derived1--公有继承--类base---------------
	derived d1;//派生类derived的对象

	d1.a = 200; //正确, 子类内仍然为公有成员,类内外均可访问
  //d1.b = 200; //错误,子类内仍然为保护成员,类内可直接访问,类外部可以
  //d1.c = 200; //错误,基类私有成员在子类内外均不可见

  d1.dispaly();   //正确,访问的是子类自身的公有成员
  d1.base::display();//正确, 子类内函数仍然为公有成员,类内外均可访问

#endif

#if 0
	//------------类C--保护继承--类A---------------
	derived2 d2;//派生类C的对象
	//d2.a = 300;//错误,变为子类保护成员,无法类外直接访问
	//d2.b = 300;//错误,变为子类保护成员,无法类外直接访问
	//d2.c = 300;//错误,基类私有成员在子类内外均不可见

	d2.display();    //正确,访问的是子类自身的公有成员
	//d2.base::dispaly(); //错误,变为子类的保护函数,不可类外访问


#endif

#if 0
	//------------类D--私有继承--类A---------------

	derived3 d3;//派生类D的对象

	//d3.a = 400; //报错,变为子类的私有成员,无法类外直接访问
	//d3.b = 400; //报错,变为子类的私有成员,无法类外直接访问
	//d3.c = 400; //报错,基类私有成员在子类内外均不可见

	//d3.dispaly();    //报错,变为子类私有成员,无法类外直接访问
	//d3.base::dispaly(); //错误,继承后变为子类私有函数,无法类外直接访问

	#endif
	cout << "三、接下来，进行第三个问题：派生类对象被建立时派生类是如何调用构造函数的，给出构造函数调用的次序，析构函数析构次序，并分析其中规律。" << endl;
#if 1
	base lx;
	cout << "---------------" << endl;

	derived1 lx1;
	cout << "---------------" << endl;


	derived2 lx2;
	cout << "---------------" << endl;


	derived3 lx3;
	cout << "---------------" << endl;
#endif
	cout << "当前已创建的对象个数为：" << endl;
	cout << one.statistic() << endl;
	system("pause");
	return 0;
}
