// ������������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
using namespace std;

int main()
{
	int a = 10;
	int &a1 = a;
	a1 = 23;
	cout << "a��ֵ:" << a << endl;
    return 0;
}

