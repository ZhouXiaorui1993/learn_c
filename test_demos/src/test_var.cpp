#include <iostream>  //预处理输入输出头文件
using namespace std;
int main()  //主函数
{
    int a = 0;  // 全局变量
    int b = 0;
    a++;
    b++;
    cout<<"a="<<a<<","<<"b="<<b<<endl; // 输出a和b的值
    {
        float a = 3;  // 局部变量
        a++;
        b++;
        cout<<"a="<<a<<",b="<<b<<endl;  // 输出a和b的值
    }
    a++;
    b++;
    cout<<"a="<<a<<",b="<<b<<endl;
    return 0;
}
