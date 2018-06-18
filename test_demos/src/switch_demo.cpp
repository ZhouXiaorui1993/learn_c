#include <iostream>
using namespace std;

int main()
{
    int score,level;
    cout<<"请输入成绩，应为整数："<<endl;
    cin>>score;
    level = score/10;
    switch(level)
    {
        case 10:
            cout<<"perfect!"<<endl;
            break;
        case 9:
            cout<<"excellent!"<<endl;
            break;
        case 8:
        case 7:
            cout<<"good!"<<endl;
            break;
        case 6:
            cout<<"pass."<<endl;
            break;
        default:
            cout<<"failed."<<endl;
            break;
    }
}
