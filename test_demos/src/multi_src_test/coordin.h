// coordin.h -- �ṹ�������Լ�����ԭ��

// �ṹ��ԭ��
#ifndef COORDIN_H_  // ���������û�ж��壬������������䣬��ֹ�ظ����� 
#define  COORDIN_H_

struct polar
{
	double distance;  // �����꣬���� 
	double angle;  // �����꣬�Ƕ� 
};


struct rect  // ֱ������
{
	double x;
	double y;	
}; 

// ����ԭ��
polar rect_to_polar(rect xy_pos);
void show_polar(polar da_pos);
 
#endif

