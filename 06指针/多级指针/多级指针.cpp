// 多级指针.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	/*
	如果定义一个合适类型的变量保存另一个变量地址
	在需要报错变量地址的类型基础上加*
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

