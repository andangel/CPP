// ָ�벽��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int str[10] = {};
	int length = sizeof(str) / sizeof(int);
	int *p = str;
	//cout << "ָ�����p�ڵ�ֵ:"<<p << "\t"<<"����str�����ڴ��ַ��:"<<&str[0]<<endl;
	//p[0] = 1;
	//cout << "p[0]��ֵ��:" << p[0] << "\t" << "����str[0]��ֵ��:" << str[0] << endl;
	//cout << "ָ���1������Ԫ�صڶ���Ԫ��һ��.������֮���4λ,��Ϊint������4ֱ��.����ָ�벽���Ǹ��ݶ�Ӧ����������\n";
	//cout << "ָ�����p[1]�ڵ�ֵ:" << p+1 << "\t" << "����str[1]�ڴ��ַ��:" << &str[1] << endl;
	//p[1] = 2;
	//cout << "p[1]��ֵ��:" << p[1] << "\t" << "����str[0]��ֵ��:" << str[1] << endl;
	for (size_t i = 0; i < length; i++)
	{
		cout << "ָ�����p[" << i << "]��ֵ:" << p << "\t" << "����str[" << i << "]�ڴ��ַ��:" << &str[i] << endl;
		p[i] = i+1;
		//*(p + i)=i;
		cout << "*p["<< i <<"]��ֵ��:" << p[i] << "\t" << "����str["<< i <<"]��ֵ��:" << str[i] << endl;
	}
    return 0;
}

