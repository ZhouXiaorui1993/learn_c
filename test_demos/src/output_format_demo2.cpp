/*用流成员函数实现*/
#include<iostream>
using namespace std;

int main()
{
	int a = 21;
	cout.setf(ios::showbase); //显示基数符号
	cout<<"dec:"<<a<<endl;
	cout.unsetf(ios::dec); //终止十进制格式
	cout.setf(ios::hex);  //设置为16进制
	cout<<"hex:"<<a<<endl;
	cout.unsetf(ios::hex);  //终止16进制
	
	const char* pt="zhouxr";
	cout.width(10);  //指定输出宽度
	cout.fill('*');  //空白处填充‘*’
	cout<<pt<<endl;
}

