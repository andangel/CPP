// main��������˵��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

//argv[]:��������,ÿ��Ԫ�ض���char * ÿ��Ԫ�ض����ַ���ַ
//argc:argv��Ԫ�ظ���
//main()��������,��Ҫ�û�����
int main(int argc, char *argv[])
{
	int i = 0;
	for (size_t i = 0; i < argc; i++)
	{
		printf("���=%s\n", argv[i]);
	}
    return 0;
}

