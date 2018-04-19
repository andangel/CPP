// typedef定义类型新名称.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	typedef int 整型;
	整型 age = 0;
	cout << "请输入你的年龄:" << endl;
	cin >> age;
	if (age>=18&&age<=200)
	{
		cout << "成年人"<<endl;
	}
	else if (age<=17)
	{
		cout << "为成年"<<endl;
	}
	else 
	{
		cout << "哇厉害!"<<endl;
	}
	return 0;
}

