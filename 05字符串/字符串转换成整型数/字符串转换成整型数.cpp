// �ַ���ת����������.cpp : �������̨Ӧ�ó������ڵ㡣
//����atoi�������ַ���ת��������

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int my_atoi(char *str)
{
	char *tmp = str;
	int flag = 0;//0�������� 1������
	if (*tmp =='-')
	{
		flag = 1;
		tmp = tmp + 1;//�ӵڶ����ַ���ʼ
	}
	else if (*tmp=='+')
	{
		tmp = tmp + 1;
	}
	int num = 0;
	while (*tmp !='\0')
	{
		num = num * 10 + (*tmp - '0');//��10��λ��
		tmp++;
	}
	if (0== flag)
	{
		return num;//���������
	}
	else
	{
		return -num;//����Ǹ���
	}
}

int main()
{
	
	char str[] = "123456789" ;
	 int sum=	my_atoi(str);
	 printf("%d\n", sum);

    return 0;
}

