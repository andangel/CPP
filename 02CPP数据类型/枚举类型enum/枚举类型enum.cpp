// ö������enum.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

enum weekdays{ Sunday, Monday, Tuesday, Wednesday, Thusday, Friday, Saturday };

int _tmain(int argc, _TCHAR* argv[])
{
	int i;
	enum weekdays day;//enum����ʡ��
	cout << "0:������ Sunday,1:����һ Monday,2:���ڶ� Tuesday,3:������ Wednesday,4:������ Thusday,5:������ Friday,6:������ Saturday" << endl;
	cin >> i;
	if (i<0 || i>6) cout << "����ֵ����!" << endl;
	else
	{
		switch (i)
		{
		case 0: day = Sunday; break;
		case 1: day = Monday; break;
		case 2: day = Tuesday; break;
		case 3: day = Wednesday; break;
		case 4: day = Thusday; break;
		case 5: day = Friday; break;
		case 6: day = Saturday; break;
		}

		switch (day)
		{
		case Sunday: cout << "������Ϻ�" << endl; break;
		case Monday: cout << "������Ͼ�" << endl; break;
		case Tuesday: cout << "����ɹ���" << endl; break;
		case Wednesday: cout << "����ɱ���" << endl; break;
		case Thusday: cout << "���������" << endl; break;
		case Friday: cout << "������¼���" << endl; break;
		case Saturday: cout << "���������" << endl; break;
		}
	}
	return 0;
}

