//冒泡排序
//实现数字从大到小排列
#include <iostream>
using namespace std;
//打印数列
void print_nums(int nums[],int len)
{
    for(int i=0;i<len;i++)
        cout<<nums[i]<<"\t";
    cout<<endl;
}

int main()
{
    int nums[]={123,231,12,34,31,2,11,53,90,87};
    int len_nums=10;
    //先打印出初始数列
    cout<<"before sort:\n";
    print_nums(nums,len_nums);
    //双重循环
    int i,j;
    int temp;  //定义中间变量，便于交换
    for(i=0;i<len_nums-1;i++)
    {
        for(j=i;j<len_nums-1;j++)
        {
            if(nums[j]<nums[j+1])  //如果相比较小，则往后移动
            {
               temp=nums[j];
               nums[j]=nums[j+1];
               nums[j+1]=temp;
            }
        }
    }
    cout<<"after sort:\n";
    print_nums(nums,len_nums);
}
