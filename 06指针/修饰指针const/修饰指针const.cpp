// 修饰指针const.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int a = 1;
	int *p = &a;
	*p = 100;//等价与操作a,*p操作指针所指向的空间
	cout << "指针*p的值:" << *p << "\t" << "修改后A的值:" << a << "\t" <<"允许:*p = 100"<< endl;
	p = NULL;//操作指针的变量
	cout << "指针变量p的值:" << p << "\t" << "a的内存地址:" << &a << "\t" <<"允许:p = NULL"<< endl;

	int b = 2;
	//const int *p1 = &a;
	int const *p1 = &b;//const 修饰的是*,代表指针所指向的内存是只读
	cout << "指针变量p1的值:" << p1 << "\t" << "b的内存地址:" << &b << endl;
	//*p = 100;//这里报错,因为此时指针所指向的空间是只读的.
	p1 = NULL;//但是可以改变指针的变量,因为p没有被修饰.
	cout << "Null指针变量p1的值:" << p1 << "\t" << "b的内存地址:" << &b << "\t" <<"*p1 = 200错误无法修改"<< endl;

	int c = 3;
	int * const p2 = &c;//const 修饰的是 指针变量p2,代表指针变量是只读
	cout << "指针*p2的值:" << *p2 << "\t" << "修改后C的值:" << c << endl;
	*p2 = 300;
	//p2 = NULL;这里报错,因为此时const修饰的是P1变量,指针地址是只读
	cout << "指针变量p2的值:" << *p2 << "\t" << "c的内存地址:" << c << "\t" << "p2 = NULL错误无法修改"<<endl;
    return 0;
}

