// �ڴ���պ���.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int main()
{
	int a = 10;
	printf("�ڴ�����֮ǰ:%d\n", a);
	memset(&a, 0, sizeof(a));
	printf("�ڴ�����֮��:%d\n", a);
	int b[] = {1,2,3,5,6,7};
	int length = sizeof(b) / sizeof(int);
	for (size_t i = 0; i < length; i++)
	{
		printf("�ڴ�����֮ǰ:%d\n", b[i]);
	}
	
	memset(b, 0, sizeof(b));
	for (size_t i = 0; i < length; i++)
	{
		printf("�ڴ�����֮��:%d\n", b[i]);
	}
    return 0;
}

