// 指针与数组首元素.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
void test1()
{
	//数组与指针关系拆解
	char str[] = { "Hello" };
	printf("str=%s\n", str);
	str[0] = 'W';
	str[1] = 'o';
	str[2] = 'r';
	str[3] = 'l';
	str[4] = 'd';
	printf("str=%s\n", str);
	char *p = NULL;//定义一个空指针
	p = str;//数组名就是首元素地址
	*p = 'H';
	p++;
	*p = 'e';
	p++;
	*p = 'l';
	p++;
	*p = 'l';
	p++;
	*p = 'o';
	printf("str=%s\n", str);
}
void test2()
{


}

int main()
{
	test2();
    return 0;
}

