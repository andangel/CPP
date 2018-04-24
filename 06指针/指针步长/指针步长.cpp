// 指针步长.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int str[10] = {};
	int length = sizeof(str) / sizeof(int);
	int *p = str;
	//cout << "指针变量p内的值:"<<p << "\t"<<"数组str的首内存地址是:"<<&str[0]<<endl;
	//p[0] = 1;
	//cout << "p[0]的值是:" << p[0] << "\t" << "数组str[0]的值是:" << str[0] << endl;
	//cout << "指针加1与数组元素第二个元素一致.与以上之间差4位,因为int类型是4直接.所以指针步长是根据对应的数据类型\n";
	//cout << "指针变量p[1]内的值:" << p+1 << "\t" << "数组str[1]内存地址是:" << &str[1] << endl;
	//p[1] = 2;
	//cout << "p[1]的值是:" << p[1] << "\t" << "数组str[0]的值是:" << str[1] << endl;
	for (size_t i = 0; i < length; i++)
	{
		cout << "指针变量p[" << i << "]的值:" << p << "\t" << "数组str[" << i << "]内存地址是:" << &str[i] << endl;
		p[i] = i+1;
		//*(p + i)=i;
		cout << "*p["<< i <<"]的值是:" << p[i] << "\t" << "数组str["<< i <<"]的值是:" << str[i] << endl;
	}
    return 0;
}

