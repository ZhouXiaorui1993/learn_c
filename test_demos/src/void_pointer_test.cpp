//void指针
#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int* p1=&a;
    cout<<"int* p1=&a;\n"<<"p1="<<p1<<endl;
    void* p2;  //声明一个void指针
    p2=p1;  //可以直接赋值，但此时p2依然是一个void指针
    cout<<"将p1赋值给void指针p2"<<endl;
    cout<<"由于赋值未改变p2是void指针的性质，故如果要输出*p2，编译器会报错"<<endl;
    cout<<"但可以输出p2此时存储的地址（void指针仅仅用来存储地址）"<<endl;
    cout<<"p2="<<p2<<endl;

    float* p3;
    p3=(float*) p2;  //强制类型转换 
    cout<<"将void指针强制类型转换，得到\nfloat* p3="<<p3<<endl;
    cout<<"*p3="<<*p3<<endl;
    cout<<"由于p3和p1数据类型不同，故此时p3指向的不再是a"<<endl;

    int* p4;
    p4=(int*) p2;
    cout<<"再尝试将void指针p2转换为int类型，得到:"<<endl;
    cout<<"*p4="<<*p4<<endl;

}
