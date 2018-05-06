// main函数参数说明.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

//argv[]:它是数组,每个元素都是char * 每个元素都是字符地址
//argc:argv的元素个数
//main()函数参数,需要用户传递
int main(int argc, char *argv[])
{
	int i = 0;
	for (size_t i = 0; i < argc; i++)
	{
		printf("输出=%s\n", argv[i]);
	}
    return 0;
}

