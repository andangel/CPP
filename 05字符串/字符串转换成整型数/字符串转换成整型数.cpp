// 字符串转换成整型数.cpp : 定义控制台应用程序的入口点。
//不用atoi函数将字符串转换成整型

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int my_atoi(char *str)
{
	char *tmp = str;
	int flag = 0;//0代表正数 1代表负数
	if (*tmp =='-')
	{
		flag = 1;
		tmp = tmp + 1;//从第二个字符开始
	}
	else if (*tmp=='+')
	{
		tmp = tmp + 1;
	}
	int num = 0;
	while (*tmp !='\0')
	{
		num = num * 10 + (*tmp - '0');//乘10是位数
		tmp++;
	}
	if (0== flag)
	{
		return num;//如果是正数
	}
	else
	{
		return -num;//如果是负数
	}
}

int main()
{
	
	char str[] = "123456789" ;
	 int sum=	my_atoi(str);
	 printf("%d\n", sum);

    return 0;
}

