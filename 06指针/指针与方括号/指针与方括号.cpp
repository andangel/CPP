// ָ���뷽����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int main()
{
	int a = 10;
	int *p = &a;
	*p = 111;
	p[0] = 222;
	printf("*p�ȼ���*(p+0),ͬʱ�ȼ���p[0]=%d", p[0]);
    return 0;
}

