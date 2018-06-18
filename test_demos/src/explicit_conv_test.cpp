#include <iostream>
using namespace std;

int main()
{
    char ch1 = 'a';
    int b = int(ch1);
    cout<<"char 'a' is converted to: "<<b<<endl;

    const int c = 100;
    int* d = const_cast<int*>(&c);  // type_id must be a pointer or reference
    // c = 99; // 会报错，不能改变c的值
    *d = 99;
    cout<<"c = "<<c<<endl;
    cout<<"*d = "<<*d<<endl;
    cout<<"address of c is: "<<&c<<endl;
    cout<<"pointer d: "<<d<<endl;
}

