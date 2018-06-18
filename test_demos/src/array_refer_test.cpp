//当形参定义为数组的引用时，不会转化为指针

#include<iostream>
using namespace std;

void change1(int (&arr)[10]);//定义为引用
void change2(int []);//普通定义，会转化为指针
void change3(int *arr);//指针定义
void print_array(int array[])
{   
    for(int i=0;i<10;i++)
        cout<<array[i]<<"\t";
    cout<<endl;
}
int main()
{
    int a[10]={1,2};
    cout<<"before change:\n";
    print_array(a);
    //change1
    cout<<"after change1(define by reference):"<<endl;
    change1(a);
    print_array(a);
    cout<<"after change2(usual define):"<<endl;
    change2(a);
    print_array(a);
    cout<<"after change3(defined by pointer):"<<endl;
    change3(a);
    print_array(a);
}

void change1(int (&arr)[10])
{
    for(int i=0;i<10;i++)
        arr[i]=i;
}

void change2(int arr[])
{
    for(int i=0; i<10; i++)
        arr[i]=i+1;
}

void change3(int *arr)
{
    for(int i=0; i<10; i++)
        //arr[i]=i+2;
        *(arr+i)=i+2;
}
