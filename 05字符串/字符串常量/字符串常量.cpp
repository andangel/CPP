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
	char *常量字符串 = "abc";//不能修改.因为此字符串存储在date区域.
	char const *常量字符串2 = "def";//跟上一句一样 不能修改指针变量指向的内存
	char tmp[100];
	strcpy(tmp, 常量字符串);//只能通过新建一个字符串把数据拷贝到数组才能对其修改
	char 字符串[] = "ghi";//这里定义的是一个char类型的字符数组.数组名是常量
	//为什么不能字符串="ghi"这样赋值呢?因为 字符串是数组名 也是数组首元素 更是常量.所以无法如此赋值.要通过for循环一个个元素赋值

	char *p = NULL;//p是变量
	"hello";//字符串常量.
	p = "hello";//p指向字符串首地址
	p = NULL;//ok的
	p = "hello";//ok的
	p = "Hello";//error编译能通过执行就报错因为 字符串是只读

}