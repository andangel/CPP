// �ڴ�ȽϺ���.cpp : �������̨Ӧ�ó������ڵ㡣
//һ�����ڱȽ������Ƿ����
//����һ������Ǵ�

#include "stdafx.h"


int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9 };
	int b[10] = { 1,11,12,13,14,15,16,17,18,19 };
	int flag = memcmp(a, b, 10 * sizeof(int));
	if (flag<0)
	{
		printf("a<b\n");
	}
	else if (flag>0)
	{
		printf("a>b\n");
	}
	else
	{
		printf("a==b\n");
	}
    return 0;
}

