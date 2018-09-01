// funcs.cpp -- ������������
#include <iostream>
#include <cmath>
#include "coordin.h"  // �����ṹ������������ԭ������

// ��ֱ������ת��Ϊ������ĺ��� 
polar rect_to_polar(rect xy_pos)
{	
		using namespace std;  // ���Խ������ռ�д������ 
		polar res;
		
		res.distance = sqrt(pow(xy_pos.x, 2) + pow(xy_pos.y, 2));
		res.angle = atan2(xy_pos.y, xy_pos.x);
		
		return res;
} 

// ���������
void show_polar(polar da_pos)
{
	using namespace std;
	const double rad_to_deg = 57.29577951;
	
	cout<<"distance="<<da_pos.distance<<endl;
	cout<<"angle="<<da_pos.angle*rad_to_deg<<"degrees."<<endl;
	
}
