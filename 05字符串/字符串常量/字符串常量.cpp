// �ַ�������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void fun()
{
	printf("fun=%p\n", "Hello");
}

int main()
{
	printf("s1=%s\n", "Hello");
	printf("s2=%p\n", "Hello");
	fun();
    return 0;
}

void fun1()
{
	char *p = NULL;//p�Ǳ���
	"hello";//�ַ�������.
	p = "hello";//pָ���ַ����׵�ַ
	p = NULL;//ok��
	p = "hello";//ok��
	p = "Hello";//error������ͨ��ִ�оͱ�����Ϊ �ַ�����ֻ��

}