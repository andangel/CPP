// 指针与方括号.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int a = 10;
	int *p = &a;
	*p = 111;
	p[0] = 222;
	printf("*p等价于*(p+0),同时等价于p[0]=%d", p[0]);
    return 0;
}

