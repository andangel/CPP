// ��������ĳ���.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int arrayi[10];
	char arrayc[20];
	int len = sizeof(arrayi) / sizeof(int);
	//Ԫ�ظ���:�ܴ�С/��������
	cout << "array����ĳ�����:" << len << endl;
	int len2 = sizeof(arrayc) / sizeof(arrayc[0]);
	//Ԫ�ظ���:�����ܴ�С/ĳ��Ԫ�ش�С
	cout << "array����ĳ�����:" << len2 << endl;
	return 0;
}

