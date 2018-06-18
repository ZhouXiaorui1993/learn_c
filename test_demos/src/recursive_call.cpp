/*递归demo：阶乘*/
#include<iostream>
using namespace std;
int calc(int n);  // 声明函数

int main()
{
    int n;
    cout<<"please enter n:";
    cin>>n;
    if (n<0)
    {
        cout<<"invalid value!"<<endl;
    }
    else
    {
        cout<<"n!="<<calc(n)<<endl;
    }
    return 0;
}

int calc(int n)
{
    int res;
    if (n==1||n==0)
    {  
        res = n;
    }
    else if (n>=1)
    {
        res = n*calc(n-1);
    }
    return res;
}

