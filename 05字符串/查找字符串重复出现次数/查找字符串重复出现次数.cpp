// 查找字符串重复出现次数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string.h>

int main()
{
	char *p = "11abcd111122abcd333abcd3322abcd3333322qqq";
	int i = 0;
	char *tmp = NULL;
	while (true)
	{
		//查找匹配字符串,如果找到,返回匹配字符串的次数
		tmp = strstr(p, "abcd");
		if (tmp==NULL)//如果没有找到
		{
			break;//跳出循环
		}
		else//如果找到
		{
			i++;//累加
			p = tmp + strlen("abcd");
			//重新设置寻找的起点
		}
	}
	printf("找到次数:%d\n", i);
    return 0;
}

