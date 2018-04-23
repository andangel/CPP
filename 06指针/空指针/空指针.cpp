// 空指针.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a = 10;
	cout << "a的值:" << a << endl;
	int *p = NULL;
	if (p==NULL)
	{
		p = & a;
		*p = 100;
		cout << "a的值:" << a << endl;
	}
	else
	{
		cout << "指针变量值NULL:" <<p<< endl;
	}
	return 0;
}

