// �β��е����鲻���������ָ�����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <typeinfo>
using namespace std;

void PrintArray(int array[10000], int length)//������Ϊ�����Ч��,û��Ҫ����һ���������.��Ϊ�������ڴ�����������ŵ�
{
	//�β��е����鲻���������ָ�����
	for (size_t i = 0; i < length; i++)
	{
		if (array[i]==1)//͵͵��1��Ϊ100 ���������a�������Ÿ���?���Ÿ���.
		{
			array[i] = 100;
		}
		cout << array[i] << endl;
	}
}

int main()
{
	int a []= { 1,2,3,4,5,6,7,8,9 };
	cout << typeid(a).name() << endl;
	int length = sizeof(a) / sizeof(int);
	PrintArray(a, length);//���ݵ���������Ԫ�ص�ַ
	for (size_t i = 0; i < length; i++)
	{

		cout << a[i] << endl;
	}

    return 0;
}

