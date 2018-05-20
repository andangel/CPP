// 指针加减访问数组元素.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
void test1()
{
	int array[9];//定义一个9元素的int数组
	int *p = array;//定义一个指针,指向数组首元素
	int length = sizeof(array) / sizeof(int);//计算数组元素个数
	for (size_t i = 0; i < length; i++)
	{
		*p = i + 1;//通过指针修改元素值
		p++;//根据指针类型递增.int类型则每次递增4字节
	}
	for (size_t i = 0; i < length; i++)
	{
		printf("%d", array[i]);//打印数组
	}
	printf("\n");
	p = &array[length - 1];//通过&获取到数组的尾元素地址
	for (size_t i = 0; i < length; i++)
	{
		*p = i + 1;//通过指针修改元素值
		p--;//根据指针类型递减.int类型则每次递增4字节

	}
	for (size_t i = 0; i < length; i++)
	{
		printf("%d", array[i]);
	}
	printf("\n");
}
void test2()
{
	int array[9];//定义一个9元素的int数组
	int *p = array;//定义一个指针,指向数组首元素
	int length = sizeof(array) / sizeof(int);//计算数组元素个数
	for (size_t i = 1; i <= length; i++)
	{
		*p = i ;//通过指针修改元素值
		p++;//根据指针类型递增.int类型则每次递增4字节
	}
	for (size_t i = 0; i < length; i++)
	{
		printf("%d", array[i]);//打印数组
	}
	printf("\n");
	p = &array[length-1];//通过&获取到数组的尾元素地址 -1因为元素下标从0开始
	for (size_t i = 1; i <= length; i++)
	{
		*p = i + 1;//通过指针修改元素值
		p--;//根据指针类型递减.int类型则每次递增4字节

	}
	for (size_t i = 0; i < length; i++)
	{
		printf("%d", array[i]);
	}
	printf("\n");
}

int main()
{
	test1();
	test2();
	
    return 0;
}

