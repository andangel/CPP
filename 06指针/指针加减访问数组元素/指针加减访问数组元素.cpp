// ָ��Ӽ���������Ԫ��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
void test1()
{
	int array[9];//����һ��9Ԫ�ص�int����
	int *p = array;//����һ��ָ��,ָ��������Ԫ��
	int length = sizeof(array) / sizeof(int);//��������Ԫ�ظ���
	for (size_t i = 0; i < length; i++)
	{
		*p = i + 1;//ͨ��ָ���޸�Ԫ��ֵ
		p++;//����ָ�����͵���.int������ÿ�ε���4�ֽ�
	}
	for (size_t i = 0; i < length; i++)
	{
		printf("%d", array[i]);//��ӡ����
	}
	printf("\n");
	p = &array[length - 1];//ͨ��&��ȡ�������βԪ�ص�ַ
	for (size_t i = 0; i < length; i++)
	{
		*p = i + 1;//ͨ��ָ���޸�Ԫ��ֵ
		p--;//����ָ�����͵ݼ�.int������ÿ�ε���4�ֽ�

	}
	for (size_t i = 0; i < length; i++)
	{
		printf("%d", array[i]);
	}
	printf("\n");
}
void test2()
{
	int array[9];//����һ��9Ԫ�ص�int����
	int *p = array;//����һ��ָ��,ָ��������Ԫ��
	int length = sizeof(array) / sizeof(int);//��������Ԫ�ظ���
	for (size_t i = 1; i <= length; i++)
	{
		*p = i ;//ͨ��ָ���޸�Ԫ��ֵ
		p++;//����ָ�����͵���.int������ÿ�ε���4�ֽ�
	}
	for (size_t i = 0; i < length; i++)
	{
		printf("%d", array[i]);//��ӡ����
	}
	printf("\n");
	p = &array[length-1];//ͨ��&��ȡ�������βԪ�ص�ַ -1��ΪԪ���±��0��ʼ
	for (size_t i = 1; i <= length; i++)
	{
		*p = i + 1;//ͨ��ָ���޸�Ԫ��ֵ
		p--;//����ָ�����͵ݼ�.int������ÿ�ε���4�ֽ�

	}
	for (size_t i = 0; i < length; i++)
	{
		printf("%d", array[i]);
	}
	printf("\n");
}

int main()
{
	test1();
	test2();
	
    return 0;
}

