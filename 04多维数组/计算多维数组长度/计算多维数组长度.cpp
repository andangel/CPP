// �����ά���鳤��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int array[3][10];
	//�������ǳ���,�����޸�
	cout <<"array��ά����Ԫ���ܺ�:" <<sizeof(array)<<endl;
	cout << "array[0]һά�����Ԫ���ܺ�:"<<sizeof(array[0]) << endl;//int=4�ֽ� 4*10=40
	cout << "array[0][0]һά����Ԫ�ظ�����С:"<<sizeof(array[0][0]) << endl;//int=4�ֽ�
	cout << "array��ά��������:" << sizeof(array) / sizeof(array[0]) << " ��" << endl;
	cout << "array��ά��������:" << sizeof(array[0]) / sizeof(array[0][0]) << " ��" << endl;
	return 0;
}

