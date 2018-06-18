//条件编译#ifdef的test
#include <iostream>
using namespace std;

#define M "male"

int main()
{
    #ifdef M
    {
        cout<<"you defined M: "<<M<<endl;
    }
    #else
        cout<<"you haven't defined male."<<endl;
    #endif
}
