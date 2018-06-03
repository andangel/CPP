// 引用与函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	cout <<"现在a的值:"<< a <<"现在b的值:"<< b << endl;

    return 0;
}

void swap(int &a, int&b)
{
	int temp = a;
	a = b;
	b = temp;
}
