// ��ά����Ķ���.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
/*
	1.�ж���[]���ж���ά
	2.�ڴ���û�ж�ά,��ֻ��һά,��ά�����������һά����
	5.��ά����,�������Ϊ�к���
	number of rows ���� = sizeof(array)/sizeof(array[0]);
	number of columns ���� = sizeof(array[0])/sizeof(array[0][0]);
*/
int _tmain(int argc, _TCHAR* argv[])
{
	int array[3][4];//������3��һά����ÿ��һά����4��Ԫ��
	int �� = sizeof(array) / sizeof(array[0]);
	int �� = sizeof(array[0]) / sizeof(array[0][0]);
	for (size_t i = 0; i < ��; i++)
	{
		for (size_t j = 0; j < ��; j++)
		{
			array[i][j] = j;
			cout << array[i][j] << endl;
		}
		
	}
	return 0;
}

