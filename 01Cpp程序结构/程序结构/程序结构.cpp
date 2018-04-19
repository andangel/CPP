// 程序结构.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
/*stdafx.h中没有函数库，只是定义了一些环境参数，使得编译出来的程序能在操作系统环境下运行。
Windows和MFC的include文件都非常大，即使有一个快速的处理程序，编译程序也要花费相当长的时间来完成工作。由于每个.CPP文件都包含相同的include文件，为每个.CPP文件都重复处理这些文件就显得很傻了。
为避免这种浪费，AppWizard和VisualC++编译程序一起进行工作，如下所示：
◎AppWizard建立了文件stdafx.h，该文件包含了所有当前工程文件需要的MFCinclude文件。且这一文件可以随被选择的选项而变化。
◎AppWizard然后就建立Stdafx.cpp。这个文件通常都是一样的。
◎然后AppWizard就建立起工程文件，这样第一个被编译的文件就是stdafx.cpp。
◎当VisualC++编译stdafx.cpp文件时，它将结果保存在一个名为stdafx.pch的文件里。(扩展名pch表示预编译头文件。)
◎当VisualC++编译随后的每个.cpp文件时，它阅读并使用它刚生成的.pch文件。VisualC++不再分析Windowsinclude文件，除非你又编辑了stdafx.cpp或stdafx.h。
在这个过程中你必须遵守以下规则：
◎你编写的任何.cpp文件都必须首先包含stdafx.h。
◎如果你有工程文件里的大多数.cpp文件需要.h文件，顺便将它们加在stdafx.h(后部)上，然后预编译stdafx.cpp。
◎由于.pch文件具有大量的符号信息，它是你的工程文件里最大的文件。
如果你的磁盘空间有限，你就希望能将这个你从没使用过的工程文件中的.pch文件删除。执行程序时并不需要它们，且随着工程文件的重新建立，它们也自动地重新建立。
通俗一点说
当我们使用AppWizard来自动生成某些项目的时候,系统会自动把所需要include的头文件在stdafx.h中先include一下,
这样,我们只需要直接include这个stdafx.h文件即可.
因为同一个项目中的不同源文件CPP都包含相同的include文件,
这样,为每个.CPP文件都重复include这些文件就显得很傻了。当然如果你不用MFC的话就不用了。即：在每个.cpp文件中都include stdafx.h 就相当于包含了其他的如iostream.h等文件
*/
#include <iostream>
//C++ 语言定义了一些头文件，这些头文件包含了程序中必需的或有用的信息。上面这段程序中，包含了头文件 <iostream>。
using namespace std;
//using namespace std; 告诉编译器使用 std 命名空间。命名空间是 C++ 中一个相对新的概念。

int _tmain(int argc, _TCHAR* argv[])
//main() 是程序开始执行的地方 是一个单行注释。单行注释以 // 开头，在行末结束。
//int main() 是主函数，程序从这里开始执行。
{
	cout << "Hello World"<<endl; // 输出 Hello World
	//cout << "Hello World"; 会在屏幕上显示消息 "Hello World"。
	system("pause");
	//system就是调用从程序中调用系统命令
	return 0;
	// return 0; 终止 main( )函数，并向调用进程返回值 0。
}

