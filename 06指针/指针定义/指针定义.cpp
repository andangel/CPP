// ָ�붨��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a = 0;//a��int���͵ı���
	cout << "A:" << a << endl;
	int * p = &a;
	*p = 200;//�������ͨ��ָ��ȥ�޸ı�����ֵ.
	cout << "ָ�����P��ֵ��:"<<p <<" "<<"ȡA�����ĵ�ַ��:"<<&a<< endl;
	cout << "A:" << a << endl;
	int *q;
	q = p;//�����p��int*(ָ��)���͵ı���
	cout << "ָ�����Q��ֵ��:" << q << " " << "ָ�����P��ֵ��:" << p << endl;
	*q = 333;
	cout << "A:" << a << endl;
	system("pause");
	return 0;
}

