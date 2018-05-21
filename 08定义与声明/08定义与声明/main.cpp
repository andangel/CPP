#include "main.h"
/*
 编译器在main函数调用其他函数,只会往上找函数的定义
 如果找不到函数的定义 则找函数声明,如果没有函数声明,编译器则会警告 c++会报错
 如果调用一个没有定义的函数则会报错
*/
int main(int argc, char * argv[])//argv类型是char * 的数组,其实就是二维字符串数组
{
	char str[] = { "Hello!" };
	int length = sizeof(str) / sizeof(char);
	//数组传递的是指针.所以不能在数组里面判断数组元素.因为它返回的都是指针的长度
	OutputString(length, str);
	char strs[3][100] = { 
	{"哈哈哈"},
	{"你是煞笔"},
	{"草你妹"}
	};
	char *p[3] = {strs[0],strs[1],strs[2]};//将字符数组的第一个元素指针赋值给指针数组的第一个元素
	//p[0] = strs[0];//将字符数组的第一个元素指针赋值给指针数组的第一个元素
	//cout << p << endl;
		////p[0] = &strs[0][0];
		////cout << p << endl;
	//p[1] = strs[1];
	//p[2] = strs[2];
	OutputStrings(3, p);
	system("pause");
	return 0;
}