/*数组作为函数的参数进行传递
 实现输入10个学生的成绩，求出平均成绩，并将低于平均成绩的学生分数打印出来*/

#include <iostream>
#include <cstring>
using namespace std;

//函数声明
//下面三种数组作为函数形参的方式等价
void read_data(float *, int len);//指针
float calc_aver(float [], int len);//调用时，数组会自动转换为指针，指向第一个元素
void print_lower(float [10], int len, float aver);//编译器会忽略一维数组的长度,所以将数组长度作为第二个形参，便于遍历

int main()
{
    float score[10];
    int len=10;  //将一维数组的长度存储，便于在后面的函数中遍历
    float aver;
    cout<<"请依次输入10位学生的成绩："<<endl;
    //从标准输入读取数据
    read_data(score,len);//数组名作为参数传递，此时传递的是数组的地址
    //计算平均成绩
    aver = calc_aver(score,len);
    cout<<"平均成绩为："<<aver<<endl;
    //打印小于平均成绩的分数
    cout<<"未达到平均成绩的有："<<endl;
    print_lower(score,len,aver);
}

void read_data(float *score, int len)
{
    for(int i=0; i<len; i++)
    {
        cin>>score[i];
    }
}

float calc_aver(float score[], int len)
{
    float sum=0,aver=0;
    for(int i=0; i<len; i++)
    {
        sum=sum+score[i];
    }
    aver = sum/len;
    return aver;
}

void print_lower(float score[],int len, float aver)
{
    for(int i=0; i<len; i++)
    {
        if(score[i]<aver)
            cout<<score[i]<<"\t";
    }
    cout<<endl;
}
