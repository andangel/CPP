// �ַ��������ַ�ָ������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

void test1()
{
	char str[] = { "This is an array of characters." };
	int length = sizeof(str) / sizeof(char);
	for (int i = 0; i < length; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		printf("%c", str[i]);
	}
	printf("\n");
	/*printf("%s", str);
	printf("\n");*/
}
void test2()
{
	char *str = { "12345." };
	printf("%s", str);

}

int main()
{
	test1();
	test2();
    return 0;
}

