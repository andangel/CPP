// ǰ������ַ�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<string.h>

//���������Ҳ���ֿո�����㲻׼ȷ
//��ʵ����ȥ��ͷβ�Ŀո�
int main()
{
	char *p = "     1234   6789     ";
	char *start = p;//�ַ�����Ԫ�ص�ַ
	char *end = p + strlen(p) - 1;//βԪ�ص�ַ
	//��������
	while(*start == ' '&&*start != '\0')//start���ڿ��ַ�����start�����ڽ����ַ�
	{
		start++;
	}
	printf("=====================================================\n");
	//���ҵ���
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

