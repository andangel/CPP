// �����뺯��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	cout <<"����a��ֵ:"<< a <<"����b��ֵ:"<< b << endl;

    return 0;
}

void swap(int &a, int&b)
{
	int temp = a;
	a = b;
	b = temp;
}
