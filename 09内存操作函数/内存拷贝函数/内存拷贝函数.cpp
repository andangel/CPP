// 内存拷贝函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<string.h>

int main()
{
	char str1[] = { "Hello!" };
	printf("%s\n", str1);
	char str2[100];
	memset(str2, 0, sizeof(str2));
	printf("%s\n", str2);
	memcpy(str2, str1, sizeof(str1));
	printf("%s\n", str2);
    return 0;
}

