//指针作为函数的参数，完成两个数的交换

#include <iostream>
using namespace std;

void swap2(int *, int *);  //交换函数，形参也是指针

int main()
{
    int a,b;
    //int* pa=&a;
    //int* pb=&b;

    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    
    //swap2(a,b);  // 错误的写法，传入的参数应为地址
    swap2(&a,&b);

    cout<<"交换后为："<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    // 测试c++自带的swap函数
    cout<<"测试自带的swap函数:"<<endl;
    swap(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}

void swap2(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
