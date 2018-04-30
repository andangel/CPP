// 字符串常量.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void fun()
{
	printf("fun=%p\n", "Hello");
}

int main()
{
	printf("s1=%s\n", "Hello");
	printf("s2=%p\n", "Hello");
	fun();
    return 0;
}

void fun1()
{
	char *p = NULL;//p是变量
	"hello";//字符串常量.
	p = "hello";//p指向字符串首地址
	p = NULL;//ok的
	p = "hello";//ok的
	p = "Hello";//error编译能通过执行就报错因为 字符串是只读

}