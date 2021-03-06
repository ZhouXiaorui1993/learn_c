// 结构体demo
#include<iostream>
using namespace std;

enum Sex  //声明一个枚举类型
{
	female,male,other  //默认为0,1,2
}; 

struct student  //定义一个结构描述
{   
    char name[20];
    enum Sex sex;  //枚举变量
    int age;
    float height;
};


int main()
{
    //创建结构变量
    struct student bob= 
    {
    	"Bob",  //name value
    	male, //sex
    	12,  //age
    	160  //height
    };
    //创建同时初始化
    student lisa=
    {
    	"Lisa",
    	female,
    	11,
    	155
    };  //也可以省略struct关键字
    
    //通过成员运算符.来访问各个成员
    cout<<bob.name<<"'s age is "<<bob.age<<endl;
    cout<<lisa.name<<"'s sex is "<<lisa.sex<<endl;
    
    //可以改变成员的值吗
    bob.age=13;
    cout<<bob.name<<"'s age is "<<bob.age<<". Oh! He has grown up!"<<endl;
    
    //可以进行成员赋值
    student anny=lisa;
    cout<<"new member anny.name="<<anny.name<<endl;
} 
