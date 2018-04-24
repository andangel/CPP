// 万能指针void.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int a = 10;
	void *p = NULL;
	p = &a;
	*(int*)p = 100;//要转化成对应的数据类型,因为指针变量存放的是首地址,并不知道结束的地址是多少.
	printf("要转化成对应的数据类型,因为指针变量存放的是首地址,并不知道结束的地址是多少.A的值是:%d\n", a);
    return 0;
}

