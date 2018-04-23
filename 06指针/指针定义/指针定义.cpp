// 指针定义.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a = 0;//a是int类型的变量
	cout << "A:" << a << endl;
	int * p = &a;
	*p = 200;//这里才是通过指针去修改变量的值.
	cout << "指针变量P的值是:"<<p <<" "<<"取A变量的地址是:"<<&a<< endl;
	cout << "A:" << a << endl;
	int *q;
	q = p;//这里的p是int*(指针)类型的变量
	cout << "指针变量Q的值是:" << q << " " << "指针变量P的值是:" << p << endl;
	*q = 333;
	cout << "A:" << a << endl;
	system("pause");
	return 0;
}

