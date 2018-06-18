/*全局变量的例子*/
#include <iostream>
using namespace std;

float v,s;  //定义全局变量
void clac_vs(float, float, float);

int main()
{
    float l,w,h;  //定义长宽高
    cout<<"long:";
    cin>>l;
    cout<<"width:";
    cin>>w;
    cout<<"height:";
    cin>>h;

    clac_vs(l, w, h);  //计算立方体的体积和表面积
    cout<<"体积："<<v<<endl;
    cout<<"表面积："<<s<<endl;
}

void clac_vs(float a, float b, float c)
{
    v = a*b*c;  //计算体积，存储到全局变量v
    s = (a*b+a*c+b*c)*2; //计算表面积，存储到s
}


