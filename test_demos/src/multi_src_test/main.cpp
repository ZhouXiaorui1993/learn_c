#include <iostream>
#include "coordin.h"  // 自定义的头文件，用双引号形式包含，会优先从当前目录下查找 
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	rect r_place;
	polar p_place;
	
	cout<<"please enter the x and y values: ";
	while(cin>>r_place.x>>r_place.y)
	{
		p_place = rect_to_polar(r_place);
		show_polar(p_place);
		cout<<"Next two numbaers (q to quit): ";
	}
	cout<<"Bye!"<<endl;
	return 0;
}
