// ����ֵ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void sumA(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	
}
void sumB(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a=10;
	int b = 20;
	int sum = 0;
	sumA(a, b);//���ݵ���ֵ.ֵ��û�е�ַ.�����޷��޸�abԭ����ֵ.
	cout<<"a="<<a<<"b="<<b<<endl;
	sumB(&a, &b);//���ݵ��ǵ�ַ.��������ͨ��ָ���޸��ڴ���ֵ.����ab������
	cout << "a=" << a << "b=" << b<<endl;
    return 0;
}

