//测试一下sizeof
//用于计算数据对应的数据类型所占用的字节数

#include<iostream>
using namespace std;

int main()
{
    int a=10,b=5;
    cout<<"sizeof(5)="<<sizeof(b)<<endl;
    cout<<"sizeof(10)="<<sizeof(a)<<endl;

    float c=12.34;
    cout<<"sizeof(12.34)="<<sizeof(c)<<endl;

    int arr1[]={1,2,3};
    double arr2[]={1,2,3};
    cout<<"int sizeof({1,2,3})="<<sizeof(arr1)<<endl;
    cout<<"double sizeof({1,2,3})="<<sizeof(arr2)<<endl;
}
