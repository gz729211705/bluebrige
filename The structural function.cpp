#include <stdio.h>

struct Point
{
	int x,y;
	Point(){
	}//��;��������ʼ���Ķ���
	Point(int _x, int _y):x(_x),y(_y){
	}//��;���ṩx,y��ʼ���Ķ��� 
}pt[10];

int main()
{
	int num = 0;
	for(int i = 1;i <= 3; i++)
	{
		for(int j = 1;j <= 3; j++)
		{
			pt[num++] = Point(i, j);
		}
	}
	
	for(int i = 0; i < num; i++)
	{
		printf("Point%d is (%d,%d)\n", i+1, pt[i].x,pt[i].y );
	}
	
	return 0;
}
