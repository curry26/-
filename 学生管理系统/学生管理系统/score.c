#define  _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "SCORE.h"

void read(St s[], int N)
{
	printf("����������ѧ��,����,ƽʱ�ɼ�,ʵ��ɼ�����ĩ�ɼ�\n");
	for (int i = 0; i < N; i++)
	{
		printf("��%d��ѧ��:", i+1 );
		scanf("%s %s %f %f %f", &s[i].number, &s[i].name, &s[i].usualScore, &s[i].experiScore,&s[i].finalScore);
		printf("\n");
	}
	printf("¼�����\n");
}

St* readFile(int *N)
{
	printf("\n\n--��**������**��----Step 1 : ���ļ��ж�ȡѧ���ĳɼ���Ϣ---��**������**����-----\n\n");

	St *s;
	FILE *fp = NULL;
	int amount = 0;
	int index = 0;

	fp = fopen("data.txt", "r");

	if (fp != NULL){
		fscanf(fp, "%d", &amount);
		*N = amount;
	}else{
		printf("�޷���ȡ�ļ���������������\n");
		getchar();
	}
	printf("--------------------***ѧ����ĿΪ:%d***--------------------- \n", amount);
	
	s = (St*)malloc(amount * sizeof(St));
	while ((!feof(fp)))
	{	
		fscanf(fp, "%s%s%f%f%f\n", (s[index].number), (s[index].name), &s[index].usualScore, &s[index].experiScore, &s[index].finalScore);
		printf("* ѧ�ţ�%s	����:%s		ƽʱ�ɼ���%4.2f��	ʵ��ɼ���%4.2f��	��ĩ�ɼ�:%4.2f��\n", (s[index].number), (s[index].name), s[index].usualScore,s[index].experiScore, s[index].finalScore);
		index++;
	}
	getchar();
	fclose(fp);
	return s;
}

void calculate(St s[], int N)   //�����ܳɼ� 
{
	printf("\n\n--��**������**��-----------Step 2 : ����ÿ��ѧ�����ܳɼ�---��**������**����-----\n\n");
	for (int i = 0; i < N; i++)
	{
		s[i].allScore = 0.2*s[i].usualScore + 0.2*s[i].experiScore+0.6*s[i].finalScore;
		printf("--*&*--ѧ�ţ�%s	����:%s		�ܳɼ�:%4.2f��\n", (s[i].number), (s[i].name), s[i].allScore);
	}
	getchar();
}

int cmpBigtoSmall(const void *a, const void *b)   //����
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
void print(St s[], int N)     //�����Ϣ
{
	printf("\n\n--��**������**��----------------Step 3 : �������------------��**������**����-----\n\n");
	for (int i = 0; i < N; i++)
	{
		printf("��%d����Ϣ ѧ�ţ�%s	����:%s		�ܳɼ�:%4.2f��\n", i + 1, &(s[i].number[0]), &(s[i].name[0]), s[i].allScore);
	}
	getchar();
}

void findstudent(St s[], int N)
{
	char a[11];
	printf("\n\n--��**������**��-----------Step 4 : ��ѯĳ��ѧ���ĳɼ���Ϣ---��**������**����-----\n\n");
	printf("����������Ҫ��ѯ��ѧ����ѧ�ţ�\n");
	scanf("%s", a);
	for (int i = 0; i < N; i++)
	{
		if (strcmp(a, s[i].number) == 0)
			printf("ѧ�ţ�%s	����:%sƽʱ�ɼ���%4.2f�� ʵ��ɼ���%4.2f�� ��ĩ�ɼ�:%4.2f�� �ܳɼ���%4.2f�� \n", s[i].number, s[i].name, s[i].usualScore, s[i].experiScore, s[i].finalScore, s[i].allScore);
	}
	system("pause");

}

void average(St s[], int N) {
	printf("\n\n--��**������**��-----------Step 5 : ����༶ѧ���ĳɼ���ֵ---��**������**����-----\n\n");
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
	printf("***---�ð༶��  �ܳɼ�ƽ��ֵ��:%f---***�ð༶��  �ܳɼ��ķ����ǣ�%f\n\n", v1,n1);
	for (int i = 0; i < N; i++) {
		a2 = s[i].usualScore + a2;
	}
	v2 = a2 / 6;
	for (int i = 0; i < N; i++) {
		b2 = (v2 - s[i].usualScore)*(v2 - s[i].usualScore) + b2;
	}
	n2 = b2 / 6;
	printf("***---�ð༶��ƽʱ�ɼ�ƽ��ֵ��:%f---***�ð༶��ƽʱ�ɼ��ķ����ǣ�%f\n\n", v2,n2);
	for (int i = 0; i < N; i++) {
		a3 = s[i].experiScore + a3;
	}
	v3 = a3 / 6;
	for (int i = 0; i < N; i++) {
		b3= (v3 - s[i].usualScore)*(v3 - s[i].usualScore) + b3;
	}
	n3 = b3 / 6;
	printf("***---�ð༶��ʵ��ɼ�ƽ��ֵ��:%f---***�ð༶��ʵ��ɼ��ķ�����:%f\n\n", v3,n3);
	for (int i = 0; i < N; i++) {
		a4 = s[i].finalScore + a4;
	}
	v4 = a4/ 6;
	for (int i = 0; i < N; i++) {
		b4 = (v4 - s[i].usualScore)*(v4 - s[i].usualScore) + b4;
	}
	n4 = b4 / 6;
	printf("***---�ð༶����ĩ�ɼ�ƽ��ֵ��:%f---***�ð༶����ĩ�ɼ��ķ�����:%f\n\n", v4,n4);
	printf("�Ըð༶�ĳɼ��ֲ�����Ҫ������\n");
	printf("�ð༶ͬѧ��ĩ�ɼ��ϸߣ�ʵ��ɼ��ϵͣ�\n");
	printf("�ð༶ͬѧ����ĩ�ɼ��ֲ����ȶ����ϴ�ʵ��ɼ����ܳɼ����ȶ���ƽʱ�ɼ���Ϊ�ȶ���\n");
}
