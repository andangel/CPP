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
	char *�����ַ��� = "abc";//�����޸�.��Ϊ���ַ����洢��date����.
	char const *�����ַ���2 = "def";//����һ��һ�� �����޸�ָ�����ָ����ڴ�
	char tmp[100];
	strcpy(tmp, �����ַ���);//ֻ��ͨ���½�һ���ַ��������ݿ�����������ܶ����޸�
	char �ַ���[] = "ghi";//���ﶨ�����һ��char���͵��ַ�����.�������ǳ���
	//Ϊʲô�����ַ���="ghi"������ֵ��?��Ϊ �ַ����������� Ҳ��������Ԫ�� ���ǳ���.�����޷���˸�ֵ.Ҫͨ��forѭ��һ����Ԫ�ظ�ֵ

	char *p = NULL;//p�Ǳ���
	"hello";//�ַ�������.
	p = "hello";//pָ���ַ����׵�ַ
	p = NULL;//ok��
	p = "hello";//ok��
	p = "Hello";//error������ͨ��ִ�оͱ�����Ϊ �ַ�����ֻ��

}