#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "score.h"

int main()
{

	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^Welcome!!!!^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^           ^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("         ���һ�ӭ��ʹ��������Ƶ�ѧ���ɼ�����ϵͳ��������\n");
	printf("             �Ʊ� 1801   201811010106    ����            \n");
	printf("***************************************************************\n");
	
	int N = 0;            
	St  *sd = NULL;    
	sd = readFile(&N);         //��ȡѧ������Ϣ

	calculate(sd, N);          //���ݼ��㹫ʽ�ó�ѧ�����ܳɼ�

	sort(sd, N);               //�ó�ѧ���ɼ�����

	print(sd, N);              //���ݵó����������ѧ����Ϣ
	  
	findstudent(sd, N);        //��ѯѧ���ɼ���Ϣ
	
	average(sd, N);            //��ƽ��ֵ���������Ҫ����
	
	free(sd);
	system("pause");
	return 0;
}
