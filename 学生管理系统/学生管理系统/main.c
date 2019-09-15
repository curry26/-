#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "score.h"

int main()
{

	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^Welcome!!!!^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^           ^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("         热烈欢迎您使用李晓设计的学生成绩管理系统！！！！\n");
	printf("             计本 1801   201811010106    李晓            \n");
	printf("***************************************************************\n");
	
	int N = 0;            
	St  *sd = NULL;    
	sd = readFile(&N);         //读取学生的信息

	calculate(sd, N);          //根据计算公式得出学生的总成绩

	sort(sd, N);               //得出学生成绩排名

	print(sd, N);              //根据得出的排名输出学生信息
	  
	findstudent(sd, N);        //查询学生成绩信息
	
	average(sd, N);            //求平均值及方差并作简要分析
	
	free(sd);
	system("pause");
	return 0;
}
