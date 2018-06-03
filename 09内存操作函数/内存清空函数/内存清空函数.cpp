// 内存清空函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int a = 10;
	printf("内存清零之前:%d\n", a);
	memset(&a, 0, sizeof(a));
	printf("内存清零之后:%d\n", a);
	int b[] = {1,2,3,5,6,7};
	int length = sizeof(b) / sizeof(int);
	for (size_t i = 0; i < length; i++)
	{
		printf("内存清零之前:%d\n", b[i]);
	}
	
	memset(b, 0, sizeof(b));
	for (size_t i = 0; i < length; i++)
	{
		printf("内存清零之后:%d\n", b[i]);
	}
    return 0;
}

