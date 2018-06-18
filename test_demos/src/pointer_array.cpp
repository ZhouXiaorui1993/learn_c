//指针数组
#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int* p1[3]={&a};
    char* p2[3]={"hahaha","cicici","mimimi"};
    cout<<"p1[0]="<<p1[0]<<endl;
    cout<<"*p1[0=]"<<*p1[0]<<endl;
    cout<<"p2[1]="<<p2[1]<<endl;

}
