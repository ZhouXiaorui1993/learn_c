//c++里的string类
#include <iostream>
#include <string>
using namespace std;  //string类也在命名空间std下

int main()
{
    string str1="zhouxiaorui";
    string str2="too fat!";
    string str3;
    bool flag;
    flag = (str1==str2);
    str3 = str1+" "+str2;
    cout<<"str1="<<str1<<"\nstr2="<<str2<<endl;
    cout<<"str3=str1+str2="<<str3<<endl;
    cout<<"str3.size()="<<str3.size()<<endl;
    cout<<"str2==str1?\n"<<flag<<endl;

    string name,book;  //测试输入
    cout<<"enter your name:\n";
    //cin>>name;  //这种输入方式会从空格处断开，cin认为空格是此行的结束符
    getline(cin, name); //string类输入一行，区别于字符数组的cin.getline()
    cout<<"enter your favoraite book:\n:";
    //cin>>book;
    getline(cin, book);
    cout<<name<<" is a so interesting man, and "<<book<<" is also my love."<<endl;

}
