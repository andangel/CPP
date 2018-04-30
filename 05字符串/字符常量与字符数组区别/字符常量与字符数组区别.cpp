// 字符常量与字符数组区别.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	char *p = "Hello";//字符串常量
	char str[] = "Hello";//字符数组把字符串常量一个个存入数组,数组是存放在栈中所以可以修改
	printf("p=%d\n", p);
	printf("str[0]%d\n", &str);
    return 0;
}

