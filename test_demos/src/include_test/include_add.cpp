#include <iostream>
#include "add.cpp"  //用引号括起来会优先在当前目录查询
using namespace std;

int main()
{
    double a,b,e,f;
    a = 3;
    b = 2;
    e = add(a,b);
    f = add(a*a, b*b);
    cout<<e<<"\t"<<f<<endl;
}
