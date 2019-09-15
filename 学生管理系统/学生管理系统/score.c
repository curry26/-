#define  _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "SCORE.h"

void read(St s[], int N)
{
	printf("请依次输入学号,姓名,平时成绩,实验成绩，期末成绩\n");
	for (int i = 0; i < N; i++)
	{
		printf("第%d个学生:", i+1 );
		scanf("%s %s %f %f %f", &s[i].number, &s[i].name, &s[i].usualScore, &s[i].experiScore,&s[i].finalScore);
		printf("\n");
	}
	printf("录入完成\n");
}

St* readFile(int *N)
{
	printf("\n\n--…**………**…----Step 1 : 从文件中读取学生的成绩信息---…**………**……-----\n\n");

	St *s;
	FILE *fp = NULL;
	int amount = 0;
	int index = 0;

	fp = fopen("data.txt", "r");

	if (fp != NULL){
		fscanf(fp, "%d", &amount);
		*N = amount;
	}else{
		printf("无法读取文件！！！！！！！\n");
		getchar();
	}
	printf("--------------------***学生数目为:%d***--------------------- \n", amount);
	
	s = (St*)malloc(amount * sizeof(St));
	while ((!feof(fp)))
	{	
		fscanf(fp, "%s%s%f%f%f\n", (s[index].number), (s[index].name), &s[index].usualScore, &s[index].experiScore, &s[index].finalScore);
		printf("* 学号：%s	姓名:%s		平时成绩：%4.2f分	实验成绩：%4.2f分	期末成绩:%4.2f分\n", (s[index].number), (s[index].name), s[index].usualScore,s[index].experiScore, s[index].finalScore);
		index++;
	}
	getchar();
	fclose(fp);
	return s;
}

void calculate(St s[], int N)   //计算总成绩 
{
	printf("\n\n--…**………**…-----------Step 2 : 计算每个学生的总成绩---…**………**……-----\n\n");
	for (int i = 0; i < N; i++)
	{
		s[i].allScore = 0.2*s[i].usualScore + 0.2*s[i].experiScore+0.6*s[i].finalScore;
		printf("--*&*--学号：%s	姓名:%s		总成绩:%4.2f分\n", (s[i].number), (s[i].name), s[i].allScore);
	}
	getchar();
}

int cmpBigtoSmall(const void *a, const void *b)   //排名
{
	St *aa = (St *)(a);
	St *bb = (St *)(b);
	if ((*aa).allScore < (*bb).allScore)  return 1;
	else if ((*aa).allScore > (*bb).allScore)  return -1;
	else
		return 0;
}
void sort(St s[], int N)
{
	qsort(&(s[0]), N, sizeof(s[0]), cmpBigtoSmall);
}
void print(St s[], int N)     //输出信息
{
	printf("\n\n--…**………**…----------------Step 3 : 输出排名------------…**………**……-----\n\n");
	for (int i = 0; i < N; i++)
	{
		printf("第%d名信息 学号：%s	姓名:%s		总成绩:%4.2f分\n", i + 1, &(s[i].number[0]), &(s[i].name[0]), s[i].allScore);
	}
	getchar();
}

void findstudent(St s[], int N)
{
	char a[11];
	printf("\n\n--…**………**…-----------Step 4 : 查询某个学生的成绩信息---…**………**……-----\n\n");
	printf("请输入你想要查询的学生的学号：\n");
	scanf("%s", a);
	for (int i = 0; i < N; i++)
	{
		if (strcmp(a, s[i].number) == 0)
			printf("学号：%s	姓名:%s平时成绩：%4.2f分 实验成绩：%4.2f分 期末成绩:%4.2f分 总成绩：%4.2f分 \n", s[i].number, s[i].name, s[i].usualScore, s[i].experiScore, s[i].finalScore, s[i].allScore);
	}
	system("pause");

}

void average(St s[], int N) {
	printf("\n\n--…**………**…-----------Step 5 : 计算班级学生的成绩均值---…**………**……-----\n\n");
	float v1, v2, v3, v4, n1, n2, n3, n4;
	float a1 = 0, a2 = 0, a3 = 0, a4 = 0;
	float b1 = 0, b2 = 0, b3 = 0, b4 = 0;
	for (int i = 0; i < N; i++) {
		a1 = s[i].allScore + a1;
	}
	v1 = a1 / 6;
	for (int i = 0; i < N; i++) {
		b1= (v1 - s[i].usualScore)*(v1 - s[i].usualScore) + b1;
	}
	n1 = b1 / 6;
	printf("***---该班级的  总成绩平均值是:%f---***该班级的  总成绩的方差是：%f\n\n", v1,n1);
	for (int i = 0; i < N; i++) {
		a2 = s[i].usualScore + a2;
	}
	v2 = a2 / 6;
	for (int i = 0; i < N; i++) {
		b2 = (v2 - s[i].usualScore)*(v2 - s[i].usualScore) + b2;
	}
	n2 = b2 / 6;
	printf("***---该班级的平时成绩平均值是:%f---***该班级的平时成绩的方差是：%f\n\n", v2,n2);
	for (int i = 0; i < N; i++) {
		a3 = s[i].experiScore + a3;
	}
	v3 = a3 / 6;
	for (int i = 0; i < N; i++) {
		b3= (v3 - s[i].usualScore)*(v3 - s[i].usualScore) + b3;
	}
	n3 = b3 / 6;
	printf("***---该班级的实验成绩平均值是:%f---***该班级的实验成绩的方差是:%f\n\n", v3,n3);
	for (int i = 0; i < N; i++) {
		a4 = s[i].finalScore + a4;
	}
	v4 = a4/ 6;
	for (int i = 0; i < N; i++) {
		b4 = (v4 - s[i].usualScore)*(v4 - s[i].usualScore) + b4;
	}
	n4 = b4 / 6;
	printf("***---该班级的期末成绩平均值是:%f---***该班级的期末成绩的方差是:%f\n\n", v4,n4);
	printf("对该班级的成绩分布做简要分析：\n");
	printf("该班级同学期末成绩较高，实验成绩较低；\n");
	printf("该班级同学的期末成绩分布不稳定差距较大，实验成绩与总成绩较稳定，平时成绩最为稳定！\n");
}
