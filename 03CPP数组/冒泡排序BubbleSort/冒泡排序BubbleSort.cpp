// ð������BubbleSort.cpp : �������̨Ӧ�ó������ڵ㡣
// ����˼�룺�������Ƚϴ�С���ϴ�����³�����С����ð������
//
/*
���̣�

1.�Ƚ����ڵ��������ݣ�����ڶ�����С���ͽ���λ�á�
2.�Ӻ���ǰ�����Ƚϣ�һֱ���Ƚ���ǰ�������ݡ�������С������������ʼ��λ�ã�������һ����С����λ�þ��ź��ˡ�
3.�����ظ��������̣����ν���2.3...n-1����С���ź�λ�á�
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int array[] = { 22, 99, 33, 77, 666, 88, 55, 22, 66, 10000 };
	int length = sizeof(array) / sizeof(int);
	int temp;//���齻����ʱ����
	for (size_t i = 0; i < length-1; i++)//�������һ�����ñ����Լ�һ
	{
		for (size_t j = 0; j < length-1-i; j++)//i��ѭ������
		{
			if (array[j]>array[j+1])//���Ԫ��j�ȵڶ���Ԫ��j+�������ѭ������
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

	for (size_t i = 0; i < length; i++)
	{
		cout << array[i]<<'\t';
	}
	return 0;
}

