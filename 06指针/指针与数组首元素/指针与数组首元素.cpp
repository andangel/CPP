// ָ����������Ԫ��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
void test1()
{
	//������ָ���ϵ���
	char str[] = { "Hello" };
	printf("str=%s\n", str);
	str[0] = 'W';
	str[1] = 'o';
	str[2] = 'r';
	str[3] = 'l';
	str[4] = 'd';
	printf("str=%s\n", str);
	char *p = NULL;//����һ����ָ��
	p = str;//������������Ԫ�ص�ַ
	*p = 'H';
	p++;
	*p = 'e';
	p++;
	*p = 'l';
	p++;
	*p = 'l';
	p++;
	*p = 'o';
	printf("str=%s\n", str);
}
void test2()
{


}

int main()
{
	test2();
    return 0;
}

