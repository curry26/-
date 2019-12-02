#include<iostream>
#include"windows.h"
#include<cstdlib>
using namespace std;

class base
{
public:
	//-----------����һ��-----------------------------------
	//base();//�޲ι��캯��
	base(int aa, int bb, int cc);//�вι��캯��
	//base(const base&other);//�������캯��
	~base();//��������

	//-----------��ͨ����----------------------------------
	void print();//���������ݳ�Ա����
	//----------ͳ��������������--------------------------
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
		//�������ݴ���̽��
		a = 200;//a_pub��Ϊ��������,�����ڿ���ֱ�ӷ���
		b = 200;//a_pro��Ϊ��������,�����ڿ���ֱ�ӷ���
		//c = 200;//����,����˽�г�Ա�����಻�ɼ�

		//���ຯ������̽��
		base::print();
		cout << "����������ݳ�Ա: x = " << x << endl;


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
		//�������ݴ���̽��
		a = 300;//a_pub��Ϊ��������,���ڿ���ֱ�ӷ���
		b = 300;//a_pro��Ϊ��������,���ڿ���ֱ�ӷ���
		//c = 300;//����,����˽�г�Ա�����಻�ɼ�

		//���ຯ������̽��
		base::print();
		cout << "����������ݳ�Ա: y = " << y << endl;


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

	void display()//̽��˽�м̳�
	{
		//�������ݴ���̽��
		a = 400;//a_pub��Ϊ˽������,�����ڿ���ֱ�ӷ���
		b = 400;//a_pro��Ϊ˽������,�����ڿ���ֱ�ӷ���
		//c = 400;//����,����˽�г�Ա�����಻�ɼ�

		//���ຯ������̽��
		base::print();
		cout << "����������ݳ�Ա: z = " << z << endl;


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
	cout << "��ӭ���������ĵ�ʮһ��c++��ҵ�����������һ�ӭ������" << endl;
	cout << "                  �Ʊ�1801" << endl;
	cout << "                201811010106" << endl;
	cout << "                    ����" << endl;
	cout << "��ʽ��ʼǰ�Դ���Ĳ��ԣ����ȴ���һ��base��one�����������ص����ݳ�Ա��" << endl;
	base one(1,2,3);
	one.print();
	cout << "�Ѵ�������������Ϊ��" << endl;
	cout << one.statistic() << endl;
	cout << "һ����ʽ��ʼ��" << endl<< "���Ƚ��е�һ�����⣬ͨ���Ƚ���Ĵ�С����֤������ȫ�̽��ܻ�������б����Ա��" << endl;
	cout << "derived1�Ĵ�С��" <<sizeof(derived1)<< endl;
	cout << "derived2�Ĵ�С��" << sizeof(derived2) << endl;
	cout << "derived3�Ĵ�С��" << sizeof(derived3) << endl;
	cout << "ͨ���ȽϷ��������ֲ�ͬ�̳з�ʽ����������������Ĵ�С����ͬ�ģ����Կ�����֤����һ�����⣺������ȫ�̽��ܻ�������б����Ա��������ͨ���г�Ա��������Ա��˽�г�Ա" << endl;
	cout << "�������������еڶ������⣺���ݼ̳������ݳ�Ա�ܷ������ڻ����ⱻ���ʵ����⣬̽���������ֲ�ͬ�̳з�ʽ���Ե��ص�" << endl;
	cout << "���������ؽ��ͼ������ע�ͣ�����" << endl;
#if 0
	//------------��derived1--���м̳�--��base---------------
	derived d1;//������derived�Ķ���

	d1.a = 200; //��ȷ, ��������ȻΪ���г�Ա,��������ɷ���
  //d1.b = 200; //����,��������ȻΪ������Ա,���ڿ�ֱ�ӷ���,���ⲿ����
  //d1.c = 200; //����,����˽�г�Ա��������������ɼ�

  d1.dispaly();   //��ȷ,���ʵ�����������Ĺ��г�Ա
  d1.base::display();//��ȷ, �����ں�����ȻΪ���г�Ա,��������ɷ���

#endif

#if 0
	//------------��C--�����̳�--��A---------------
	derived2 d2;//������C�Ķ���
	//d2.a = 300;//����,��Ϊ���ౣ����Ա,�޷�����ֱ�ӷ���
	//d2.b = 300;//����,��Ϊ���ౣ����Ա,�޷�����ֱ�ӷ���
	//d2.c = 300;//����,����˽�г�Ա��������������ɼ�

	d2.display();    //��ȷ,���ʵ�����������Ĺ��г�Ա
	//d2.base::dispaly(); //����,��Ϊ����ı�������,�����������


#endif

#if 0
	//------------��D--˽�м̳�--��A---------------

	derived3 d3;//������D�Ķ���

	//d3.a = 400; //����,��Ϊ�����˽�г�Ա,�޷�����ֱ�ӷ���
	//d3.b = 400; //����,��Ϊ�����˽�г�Ա,�޷�����ֱ�ӷ���
	//d3.c = 400; //����,����˽�г�Ա��������������ɼ�

	//d3.dispaly();    //����,��Ϊ����˽�г�Ա,�޷�����ֱ�ӷ���
	//d3.base::dispaly(); //����,�̳к��Ϊ����˽�к���,�޷�����ֱ�ӷ���

	#endif
	cout << "���������������е��������⣺��������󱻽���ʱ����������ε��ù��캯���ģ��������캯�����õĴ������������������򣬲��������й��ɡ�" << endl;
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
	cout << "��ǰ�Ѵ����Ķ������Ϊ��" << endl;
	cout << one.statistic() << endl;
	system("pause");
	return 0;
}
