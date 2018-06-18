//初始化数组
#include <iostream>
using namespace std;

int main()
{
    char a[5]={'a','b','c'};
    int b[]={0,1,2,3};
    
    cout<<"a:"<<endl;

    for(int i=0;i<5;i++)
        cout<<a[i]<<"\t";

    cout<<"\nb:"<<endl;

    for(int i=0;i<4;i++)
        cout<<b[i]<<"\t";
    cout<<endl;
}
