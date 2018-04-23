// 二维数组的定义.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
/*
	1.有多少[]就有多少维
	2.内存中没有多维,都只有一维,多维数组是特殊的一维数组
	5.二维数组,可以理解为行和列
	number of rows 行数 = sizeof(array)/sizeof(array[0]);
	number of columns 列数 = sizeof(array[0])/sizeof(array[0][0]);
*/
int _tmain(int argc, _TCHAR* argv[])
{
	int array[3][4];//定义了3个一维数组每个一维数组4个元素
	int 列 = sizeof(array) / sizeof(array[0]);
	int 行 = sizeof(array[0]) / sizeof(array[0][0]);
	for (size_t i = 0; i < 列; i++)
	{
		for (size_t j = 0; j < 行; j++)
		{
			array[i][j] = j;
			cout << array[i][j] << endl;
		}
		
	}
	return 0;
}

