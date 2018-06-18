//指针变量
#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int* p=&a;  //定义指针变量指向a
    //打印不同格式的含义
    cout<<"we have:\nint a=10;\nint* p=&a;\nthen:"<<endl;
    cout<<"p="<<p<<endl;
    cout<<"*p="<<*p<<endl;
    cout<<"&p="<<&p<<endl;
}
