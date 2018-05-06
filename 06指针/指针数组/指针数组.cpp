// 指针数组.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <typeinfo>
using namespace std;

//void fun(int a[10])
//void fun(int a[])
void fun(int *a)
{

}
//void print_array(char *p[100], int length)
//void print_array(char * *p, int length)
void print_array(char *p[], int length)
{
	for (size_t i = 0; i < length; i++)
	{
		printf("%s\n", p[i]);
	}
}

//argv[]:它是数组,每个元素都是char * 每个元素都是字符地址
//argc:argv的元素个数
//main()函数参数,需要用户传递
int main(int argc,char *argv[])
{
	//char *str = "Hello";
	//char *str2 = "Word";
	//char *str3 = "New";
	char *p[] = { "Hello","Word","C 语言" };//定义指针数组并初始化常量字符串
	int length = sizeof(p) / sizeof(*p);
	cout <<"p的数据类型是:"<< typeid(p).name() << endl;
	print_array(p, length);
	//*p[0] = { "a" };无法修改字符常量内存的值
	int a[10];
    return 0;
}

