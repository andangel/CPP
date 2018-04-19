// 枚举类型enum.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

enum weekdays{ Sunday, Monday, Tuesday, Wednesday, Thusday, Friday, Saturday };

int _tmain(int argc, _TCHAR* argv[])
{
	int i;
	enum weekdays day;//enum可以省略
	cout << "0:星期日 Sunday,1:星期一 Monday,2:星期二 Tuesday,3:星期三 Wednesday,4:星期四 Thusday,5:星期五 Friday,6:星期六 Saturday" << endl;
	cin >> i;
	if (i<0 || i>6) cout << "输入值不对!" << endl;
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
		case Sunday: cout << "今天飞上海" << endl; break;
		case Monday: cout << "今天飞南京" << endl; break;
		case Tuesday: cout << "今天飞广州" << endl; break;
		case Wednesday: cout << "今天飞北京" << endl; break;
		case Thusday: cout << "今天飞深圳" << endl; break;
		case Friday: cout << "今天飞新加坡" << endl; break;
		case Saturday: cout << "今天飞厦门" << endl; break;
		}
	}
	return 0;
}

