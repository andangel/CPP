// 前后查找字符.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<string.h>

//如果数组中也出现空格则计算不准确
//其实就是去掉头尾的空格
int main()
{
	char *p = "     1234   6789     ";
	char *start = p;//字符串首元素地址
	char *end = p + strlen(p) - 1;//尾元素地址
	//从左往右
	while(*start == ' '&&*start != '\0')//start等于空字符并且start不等于结束字符
	{
		start++;
	}
	printf("=====================================================\n");
	//从右到左
	while (*end==' '&&end!=p)
	{
		end--;
	}
	int n = end - start + 1;
	printf("n=%d\n", n);
	char str[100] = {0};
	strncpy_s(str,start,n);
	str[n] = 0;
	printf("str=%s\n", str);
    return 0;
}

