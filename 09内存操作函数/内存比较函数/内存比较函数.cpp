// 内存比较函数.cpp : 定义控制台应用程序的入口点。
//一般用于比较数据是否相等
//其中一个大就是大

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

