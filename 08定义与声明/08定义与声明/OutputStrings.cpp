#include"main.h"
void OutputStrings(int length, char *str[])//类型是char * 的数组
{
	for (int i = 0; i < length; i++)
	{
		cout << str[i]<<endl;
	}
}