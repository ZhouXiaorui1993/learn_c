#include <iostream>
using namespace std;
double PI=3.1416;  //声明常量
double calc_s(double);  //声明圆面积计算函数
double calc_l(double);  //声明圆周长的计算函数

int main()
{
    double r;
    cout<<"请输入圆的半径 r = ";
    cin>>r;

    // 输出周长
    cout<<"圆周长为："<<calc_l(r)<<endl;
    // 输出面积
    cout<<"圆面积为："<<calc_s(r)<<endl;
}

double calc_l(double r)
{
    return 2*PI*r;
}

double calc_s(double r)
{
    return PI*r*r;
}
