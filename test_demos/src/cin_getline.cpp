// 用getline函数读入一行数据（中间有空格）
#include <iostream>
using namespace std;

int main()
{
    const int Arsize=20;
    char name[Arsize];
    char movie[Arsize];

    cout<<"Enter your name:\n";
    cin.getline(name, Arsize);  //两个参数，一个是数组名，一个是大小
    cout<<"Enter your favorite movie:\n";
    cin.getline(movie, Arsize);
    cout<<"I have a ticket of "<<movie<<" for you, "<<name<<endl;
}

