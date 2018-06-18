/*输出格式化示例程序，包括用类成员格式控制函数和格式控制符两种形式的格式化方法*/

#include <iostream>
#include <iomanip>  // 包含输出格式的头文件
#include <string>
using namespace std;

int main()
{
    int a=100;
    cout<<"十进制:"<<dec<<a<<endl; //以十进制形式输出整数，默认即为十进制，故可省略
    cout<<"十六进制："<<hex<<a<<endl; //以十六进制的形式输出
    cout<<"八进制："<<oct<<a<<endl;
 	// cout<<"二进制："<<setbase(2)<<a<<endl; //没有二进制的输出格式
 	// 控制输出宽度
 	string b="zhouxr";
 	cout<<"指定宽度为10："<<setw(10)<<b<<endl;
 	cout<<"指定宽度为10，空白处用*号填充："<<setfill('*')<<setw(10)<<b<<endl;
 	//浮点数输出，也可以用以上方法指定宽度，这里略过
 	double pi=22.0/7.0;
 	cout<<"默认输出：pi = "<<pi<<endl;
 	cout<<"指数形式输出："<<setiosflags(ios::scientific)<<setprecision(8);  //指数形式输出，保留八位小数
 	cout<<pi<<endl;
 	cout<<"改为4位小数："<<setprecision(4)<<pi<<endl;
 	cout<<"取消指数输出设置，改为小数形式输出："<<setiosflags(ios::fixed)<<pi<<endl;
 		
}
