//指针型函数——函数的返回值为一个指针

#include <iostream>
#include <cstring>
using namespace std;

char* max(char*, char*);  //声明一个指针型函数，返回一个char类型指针

int main()
{
    char s1[]="asakura minami";
    char s2[]="uesugi tatsuya";
    
    char* p = max(s1,s2);
    cout<<"the bigger one is: "<<p<<endl;
}

char* max(char* a, char* b)
{
    return(strcmp(a,b)?a:b);
}
