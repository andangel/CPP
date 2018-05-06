// test1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <typeinfo>
using namespace std;


int main()
{
	char *str= "Hello word!";
	//int is[] = { 1, 23, 4, 5 };
	printf("str=%p\n", str);
	printf("%s\n", str);
	char *str1[2] = { "Hello word!" ,"111111111111"};
	cout << typeid(str1).name() << endl;
	int length = sizeof(str1) / sizeof(*str1);
	for (size_t i = 0; i < length; i++)
	{
		printf("%s\n", str1[i]);
	}
    return 0;
}

