#include "main.h"
/*
 �������ڵ���
*/
int main(int argc, char * argv[])
{
	char str[] = { "Hello!" };
	int length = sizeof(str) / sizeof(char);
	
	OutputString(length, str);

	system("pause");
	return 0;
}