// ָ�븳ֵ.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a = 10;
	cout << "a��ǰֵ:" << a << endl;
	int *p=&a;//ָ���ʼ����ʱ����ø�ֵ,����Ұָ��.
	int b = *p;
	cout << "b��ǰֵ:" << b << endl;
	*p = 100;
	cout << "a��ָ��*p�޸ĺ��ֵ:" << a <<"   "<<"b��ǰ��ֵ:"<<b<< endl;
	return 0;
}

