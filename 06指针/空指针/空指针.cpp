// ��ָ��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a = 10;
	cout << "a��ֵ:" << a << endl;
	int *p = NULL;
	if (p==NULL)
	{
		p = & a;
		*p = 100;
		cout << "a��ֵ:" << a << endl;
	}
	else
	{
		cout << "ָ�����ֵNULL:" <<p<< endl;
	}
	return 0;
}

