//测试一下编译器是否支持c11
#include <iostream>
using namespace std;

int main()
{
    char16_t name[] = u"Uesugi Tatsuya";  //c11新增的数据类型
    cout<<"char16_t name[]="<<name<<endl;

    //新增了原始（raw）字符串
    cout<<R"(hahahaha\n不会被转义)"<<endl;
}
