//数组指针与指针数组

#include <iostream>
using namespace std;

int main()
{
    int a[5]={1,2,3,4,5};
    int (*p)[5];  //定义了一个指针变量p，指向一个包含5个元素的一维数组
    cout<<"a="<<a<<endl;
    p=&a;
    cout<<"令p=&a，则："<<endl;
    cout<<"p="<<p<<endl;
    cout<<"*p[0]="<<*p[0]<<endl;

    int* p2=a;
    cout<<"令int* p2=a，则："<<endl;
    cout<<"p2[0]="<<p2[0]<<endl;
    cout<<"p2[1]="<<p2[1]<<endl;

}
