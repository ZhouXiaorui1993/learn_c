#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i=0, j=1;
    bool k = (i>j);
    cout<<"0>1 return: "<<k<<endl;
    // test for condition operator
    int a=0,b=3,c;
    c = a>b?a:b;  // get the bigger one
    cout<<"the bigger one is: "<<c<<endl;

    string d;
    d = c?"ok":"no";  // c can as a bool?
    cout<<"int can as a bool?\n"<<d<<endl;

    // test for sizeof
    int n1,n2;
    n1 = sizeof("hahahaha");
    n2 = sizeof(double);
    cout<<"sizeof(\"hahahaha\")="<<n1<<endl<<"sizeof(double)="<<n2<<endl;
}

