// һά��������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int array[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

	int length = sizeof(array) / sizeof(int);
	int i = 0;//��Ԫ���±�
	int j = length - 1;//βԪ���±�
	int temp;//���齻����ʱ����
	while (i<j)
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		i++;
		j--;

	}

	for (size_t i = 0; i < length; i++)
	{
		cout << array[i];
	}
	return 0;
}