// �༶ָ��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	/*
	�������һ���������͵ı���������һ��������ַ
	����Ҫ���������ַ�����ͻ����ϼ�*
	*/
	int a;
	int*p1 = &a;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	****p4 = 222;
	printf("%d\n", a);
	return 0;
}

