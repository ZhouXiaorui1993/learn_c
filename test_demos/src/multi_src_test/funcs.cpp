// funcs.cpp -- 包括函数定义
#include <iostream>
#include <cmath>
#include "coordin.h"  // 包含结构体声明、函数原型声明

// 将直角坐标转换为极坐标的函数 
polar rect_to_polar(rect xy_pos)
{	
		using namespace std;  // 可以将命名空间写在这里 
		polar res;
		
		res.distance = sqrt(pow(xy_pos.x, 2) + pow(xy_pos.y, 2));
		res.angle = atan2(xy_pos.y, xy_pos.x);
		
		return res;
} 

// 输出极坐标
void show_polar(polar da_pos)
{
	using namespace std;
	const double rad_to_deg = 57.29577951;
	
	cout<<"distance="<<da_pos.distance<<endl;
	cout<<"angle="<<da_pos.angle*rad_to_deg<<"degrees."<<endl;
	
}
