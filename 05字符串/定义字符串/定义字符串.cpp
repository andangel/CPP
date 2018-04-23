// 定义字符串.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char c1[] = { 'a', 'b', 'c' };
	cout <<"c1乱码因为没有结束符:"<< c1<<endl;
	char c2[] = { 'a', 'b', 'c',0 };
	cout << "c2数组的结尾添加0:" << c2 << endl;
	char c3[] = { 'a', 'b', 'c', '\0' };
	cout << "c3数组的结尾添加(斜杠0):" << c3 << endl;
	char c4[10] = { 'a', 'b', 'c' };
	cout << "c4数组因为后面自动填充0:" << c4 << endl;
	char c5[] = "abcd";
	cout << "c5才是常用的字符串初始化,会在最后填充斜杠0:" << c5 << endl;
	cout << "sizeof(c5)占用多少字节:" << sizeof(c5) << endl;
	char c6[10] = "abcdefghi";
	cout << "但是如果超出数组则乱码:" << c6 << endl;
	return 0;
}

