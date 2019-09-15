#ifndef __SCORE_H__
#define __SCORE_H__

#include <stdio.h>

typedef struct sdent
{
	char name[10];          //ѧ��������
	char number[10];       //ѧ����ѧ��
	float usualScore;      //ѧ����ƽʱ�ɼ�
	float experiScore;     //ѧ����ʵ��ɼ�
	float finalScore;      //ѧ������ĩ�ɼ�
	float allScore;        //ѧ���������ɼ�
}St;

void read(St s[], int N);
St* readFile(int *N);            //��ȡ��Ϣ

void calculate(St s[], int N);   //�����ܳɼ�

void sort(St s[], int N);        //�ó�����

void print(St s[], int N);       //�����Ϣ

void average(St s[], int N);     //��ɼ�ƽ��ֵ������

void findstudent(St s[], int N);        //��ѯѧ���ɼ���Ϣ
#endif
