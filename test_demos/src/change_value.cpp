/*exchange the value of a and b, and don't use the third variable*/
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    // enter two number to a and b
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;

    cout<<"before exchange: a="<<a<<", b="<<b<<endl;
    a = a+b;
    b = a-b;  // b get value_a
    a = a-b;  // a get value_b
    cout<<"after exchange: a="<<a<<", b="<<b<<endl;
}
