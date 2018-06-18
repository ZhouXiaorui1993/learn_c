#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char ch1 = 'a';
    char hz[] = "周";  //能存储下吗
    char str[20] = "I am a string.";
    int ch3;
    int len;

    ch3 = 'b';
    cout<<"sizeof(hz)="<<sizeof(hz)<<endl;
    cout<<"len(hz)="<<sizeof(hz)/sizeof(char)<<endl;
    cout<<"ch1="<<ch1<<endl;
    cout<<"hz="<<hz<<endl;
    cout<<"str="<<str<<endl;
    cout<<"strlen(str)="<<strlen(str)<<endl;
    cout<<"ch3="<<ch3<<endl;
    return 0;
}
