// 指针大小.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//指针类型的大小都是固定大小
	int a = sizeof(int *);
	int b = sizeof(char *);
	double *p = NULL;
	int c = sizeof(p);
	cout << "int指针大小:" << a << "char指针大小:" << b << "double指针大小:" << c<<endl;
	//64位则都是8字节
	return 0;
}

