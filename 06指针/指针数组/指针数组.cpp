// ָ������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <typeinfo>
using namespace std;

//void fun(int a[10])
//void fun(int a[])
void fun(int *a)
{

}
//void print_array(char *p[100], int length)
//void print_array(char * *p, int length)
void print_array(char *p[], int length)
{
	for (size_t i = 0; i < length; i++)
	{
		printf("%s\n", p[i]);
	}
}

//argv[]:��������,ÿ��Ԫ�ض���char * ÿ��Ԫ�ض����ַ���ַ
//argc:argv��Ԫ�ظ���
//main()��������,��Ҫ�û�����
int main(int argc,char *argv[])
{
	//char *str = "Hello";
	//char *str2 = "Word";
	//char *str3 = "New";
	char *p[] = { "Hello","Word","C ����" };//����ָ�����鲢��ʼ�������ַ���
	int length = sizeof(p) / sizeof(*p);
	cout <<"p������������:"<< typeid(p).name() << endl;
	print_array(p, length);
	//*p[0] = { "a" };�޷��޸��ַ������ڴ��ֵ
	int a[10];
    return 0;
}

