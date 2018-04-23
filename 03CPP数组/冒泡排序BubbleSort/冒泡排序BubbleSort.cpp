// 冒泡排序BubbleSort.cpp : 定义控制台应用程序的入口点。
// 基本思想：两个数比较大小，较大的数下沉，较小的数冒起来。
//
/*
过程：

1.比较相邻的两个数据，如果第二个数小，就交换位置。
2.从后向前两两比较，一直到比较最前两个数据。最终最小数被交换到起始的位置，这样第一个最小数的位置就排好了。
3.继续重复上述过程，依次将第2.3...n-1个最小数排好位置。
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int array[] = { 22, 99, 33, 77, 666, 88, 55, 22, 66, 10000 };
	int length = sizeof(array) / sizeof(int);
	int temp;//数组交换临时变量
	for (size_t i = 0; i < length-1; i++)//数组最后一个不用比所以减一
	{
		for (size_t j = 0; j < length-1-i; j++)//i是循环次数
		{
			if (array[j]>array[j+1])//如果元素j比第二个元素j+大则进入循环交换
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

	for (size_t i = 0; i < length; i++)
	{
		cout << array[i]<<'\t';
	}
	return 0;
}

