// typedef��������������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	typedef int ����;
	���� age = 0;
	cout << "�������������:" << endl;
	cin >> age;
	if (age>=18&&age<=200)
	{
		cout << "������"<<endl;
	}
	else if (age<=17)
	{
		cout << "Ϊ����"<<endl;
	}
	else 
	{
		cout << "������!"<<endl;
	}
	return 0;
}

