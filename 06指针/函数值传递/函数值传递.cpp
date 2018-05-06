// 函数值传递.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void sumA(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	
}
void sumB(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a=10;
	int b = 20;
	int sum = 0;
	sumA(a, b);//传递的是值.值又没有地址.所以无法修改ab原来的值.
	cout<<"a="<<a<<"b="<<b<<endl;
	sumB(&a, &b);//传递的是地址.而函数内通过指针修改内存数值.所以ab被交换
	cout << "a=" << a << "b=" << b<<endl;
    return 0;
}

