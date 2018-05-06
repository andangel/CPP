// 形参中的数组不是数组而是指针变量.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <typeinfo>
using namespace std;

void PrintArray(int array[10000], int length)//这里是为来提高效率,没必要复制一个数组过来.因为数组在内存里是连续存放的
{
	//形参中的数组不是数组而是指针变量
	for (size_t i = 0; i < length; i++)
	{
		if (array[i]==1)//偷偷把1改为100 函数外面的a数组会跟着改吗?跟着改了.
		{
			array[i] = 100;
		}
		cout << array[i] << endl;
	}
}

int main()
{
	int a []= { 1,2,3,4,5,6,7,8,9 };
	cout << typeid(a).name() << endl;
	int length = sizeof(a) / sizeof(int);
	PrintArray(a, length);//传递的是数组首元素地址
	for (size_t i = 0; i < length; i++)
	{

		cout << a[i] << endl;
	}

    return 0;
}

