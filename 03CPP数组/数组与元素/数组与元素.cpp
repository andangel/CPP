// 数组与元素.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int array[10];
	cout << "array的内存地址是:" << array <<"\t"<< "&array[0]的内存地址是:" << &array[0] << endl;
	cout << "所以数组名就是数组元素的首地址" << endl;
	return 0;
}

