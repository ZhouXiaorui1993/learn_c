#include <iostream>
#include <cstring>  // string类没有strcmp？？
using namespace std;

int main(int argc, char *argv[])  // 带参数的main
{
    cout<<"可执行文件所在路径："<<argv[0]<<endl;
    if (argc>2)
    {
        cout<<"输入的参数太多了，一个就好"<<endl;
    }
    else if (argc==2)
    {
        if (!strcmp(argv[1], "--help"))
        {
        	cout<<"可用参数如下:\n"
                <<"-a：汪汪汪\n"
                <<"-b：喵喵喵\n"
                <<endl;
        }
        else if (!strcmp(argv[1],"-a"))
        {
            cout<<"you meet a dog!"<<endl;
        }
        else if (!strcmp(argv[1],"-b"))
        {
            cout<<"kawayiyi neko desu."<<endl;
        }
        else
            cout<<"输错啦，试试\"--help\"吧!"<<endl;
    }
    else
    	cout<<"另外，你好像没有输入参数，可以试一下随便输点什么"<<endl;

    return 0;
}

