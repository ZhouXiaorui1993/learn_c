//二维数组demo
//从键盘接收9个数字，依次存入二维数组，并以矩阵的形式输出
#include <iostream>
using namespace std;

int main()
{
    float a[3][3];

    cout<<"请输入9个数字"<<endl;
    
    int i=0,j=0;
    for(i;i<3;i++)
    {
        for(j;j<3;j++)
        {
            cin>>a[i][j];  
        }
    }
    //输出
    
    cout<<"output:"<<endl;
    //i=0;j=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}

