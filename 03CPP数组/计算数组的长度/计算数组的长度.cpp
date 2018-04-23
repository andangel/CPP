// 计算数组的长度.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int arrayi[10];
	char arrayc[20];
	int len = sizeof(arrayi) / sizeof(int);
	//元素个数:总大小/数据类型
	cout << "array数组的长度是:" << len << endl;
	int len2 = sizeof(arrayc) / sizeof(arrayc[0]);
	//元素个数:数组总大小/某个元素大小
	cout << "array数组的长度是:" << len2 << endl;
	return 0;
}

