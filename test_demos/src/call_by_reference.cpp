#include <iostream>
using namespace std;

void swap(int &x, int &y);  //函数声明
int main()
{
    int a,b;
    // 输入a和b的值
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    // 调用swap()函数交换a和b的值
    swap(a,b);
    cout<<"after swap:\n"<<"a="<<a<<",b="<<b<<endl;

    return 0;
}

void swap(int &x, int &y)
{
    int t;
    t = x;
    x = y;
    y = t;
}
