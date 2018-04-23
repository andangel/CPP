// 计算多维数组长度.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int array[3][10];
	//数组名是常量,不能修改
	cout <<"array多维数组元素总和:" <<sizeof(array)<<endl;
	cout << "array[0]一维数组的元素总和:"<<sizeof(array[0]) << endl;//int=4字节 4*10=40
	cout << "array[0][0]一维数组元素个数大小:"<<sizeof(array[0][0]) << endl;//int=4字节
	cout << "array多维数组中有:" << sizeof(array) / sizeof(array[0]) << " 行" << endl;
	cout << "array多维数组中有:" << sizeof(array[0]) / sizeof(array[0][0]) << " 列" << endl;
	return 0;
}

