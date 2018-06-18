//函数重载（参数类型不同的例子）
#include <iostream>
using namespace std;

int add(int, int);
double add(double, double);  //声明了参数类型不同的重载函数

int main()
{
    cout<<"add(2,2)="<<add(2,2)<<endl;
    cout<<"add(2.3,4.5)="<<add(2.3,4.5)<<endl;

    return 0;
}


int add(int a, int b)
{
    return a+b;
}

double add(double a, double b)
{
    return a+b;
}
