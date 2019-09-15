#ifndef __SCORE_H__
#define __SCORE_H__

#include <stdio.h>

typedef struct sdent
{
	char name[10];          //学生的姓名
	char number[10];       //学生的学号
	float usualScore;      //学生的平时成绩
	float experiScore;     //学生的实验成绩
	float finalScore;      //学生的期末成绩
	float allScore;        //学生的总评成绩
}St;

void read(St s[], int N);
St* readFile(int *N);            //读取信息

void calculate(St s[], int N);   //计算总成绩

void sort(St s[], int N);        //得出排名

void print(St s[], int N);       //输出信息

void average(St s[], int N);     //求成绩平均值及方差

void findstudent(St s[], int N);        //查询学生成绩信息
#endif
