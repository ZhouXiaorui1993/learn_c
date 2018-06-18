//cin.get()函数的使用
#include <iostream>
using namespace std;

int main()
{
    const int Arsize = 20;
    char name[Arsize];
    char movie[Arsize];

    cout<<"your name: \n";
    cin.get(name, Arsize);  //读取一行
    cin.get(); //读取换行符
    cout<<"your favorite movie:\n";
    cin.get(movie, Arsize);  //读取另一行
    cout<<"let's go to watch "<<movie<<", "<<name<<"!\n";

}
