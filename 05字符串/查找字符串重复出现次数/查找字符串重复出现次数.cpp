// �����ַ����ظ����ִ���.cpp : �������̨Ӧ�ó������ڵ㡣
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
		//����ƥ���ַ���,����ҵ�,����ƥ���ַ����Ĵ���
		tmp = strstr(p, "abcd");
		if (tmp==NULL)//���û���ҵ�
		{
			break;//����ѭ��
		}
		else//����ҵ�
		{
			i++;//�ۼ�
			p = tmp + strlen("abcd");
			//��������Ѱ�ҵ����
		}
	}
	printf("�ҵ�����:%d\n", i);
    return 0;
}

