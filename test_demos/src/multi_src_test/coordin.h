// coordin.h -- 结构体声明以及函数原型

// 结构体原型
#ifndef COORDIN_H_  // 如果该名称没有定义，则编译下面的语句，防止重复编译 
#define  COORDIN_H_

struct polar
{
	double distance;  // 极坐标，距离 
	double angle;  // 极坐标，角度 
};


struct rect  // 直角坐标
{
	double x;
	double y;	
}; 

// 函数原型
polar rect_to_polar(rect xy_pos);
void show_polar(polar da_pos);
 
#endif

