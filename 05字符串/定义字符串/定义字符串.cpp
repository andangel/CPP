// �����ַ���.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char c1[] = { 'a', 'b', 'c' };
	cout <<"c1������Ϊû�н�����:"<< c1<<endl;
	char c2[] = { 'a', 'b', 'c',0 };
	cout << "c2����Ľ�β���0:" << c2 << endl;
	char c3[] = { 'a', 'b', 'c', '\0' };
	cout << "c3����Ľ�β���(б��0):" << c3 << endl;
	char c4[10] = { 'a', 'b', 'c' };
	cout << "c4������Ϊ�����Զ����0:" << c4 << endl;
	char c5[] = "abcd";
	cout << "c5���ǳ��õ��ַ�����ʼ��,����������б��0:" << c5 << endl;
	cout << "sizeof(c5)ռ�ö����ֽ�:" << sizeof(c5) << endl;
	char c6[10] = "abcdefghi";
	cout << "���������������������:" << c6 << endl;
	return 0;
}

