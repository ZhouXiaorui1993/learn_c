#define M (b*b+4*a*c)  //定义一个宏表达式
#include <iostream>
using namespace std;
    
int main()
{
    int a, b, c;
    cout<<"equation ax^2+bx+c, please enter param a,b,c :"<<endl;
    cin>>a>>b>>c;
    if (M<0)
    {
        cout<<"方程无实数解"<<endl;
    }
    else
        cout<<"方程存在实数解"<<endl;
}
