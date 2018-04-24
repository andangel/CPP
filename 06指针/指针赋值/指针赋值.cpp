// 指针赋值.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a = 10;
	cout << "a当前值:" << a << endl;
	int *p=&a;//指针初始化的时候最好赋值,避免野指针.
	int b = *p;
	cout << "b当前值:" << b << endl;
	*p = 100;
	cout << "a被指针*p修改后的值:" << a <<"   "<<"b当前的值:"<<b<< endl;
	return 0;
}

