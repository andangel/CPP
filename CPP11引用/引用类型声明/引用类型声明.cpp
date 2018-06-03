// 引用类型声明.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

int main()
{
	int a = 10;
	int &a1 = a;
	a1 = 23;
	cout << "a的值:" << a << endl;
    return 0;
}

