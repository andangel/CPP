// ָ���С.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//ָ�����͵Ĵ�С���ǹ̶���С
	int a = sizeof(int *);
	int b = sizeof(char *);
	double *p = NULL;
	int c = sizeof(p);
	cout << "intָ���С:" << a << "charָ���С:" << b << "doubleָ���С:" << c<<endl;
	//64λ����8�ֽ�
	return 0;
}

