#include<stdio.h>
#include<stdlib.h>
int main()
{
/* 	float bottom = 4;
	float high = 2;
	float area = 0;
	area = high * bottom / 2;
	printf("%.2f", area);
	//system("pause");
	return 0; */
	int bottom = 4;
	int high = 0;
	int area = 0;
	printf("请输入三角形高：" );
	scanf("%d", &high);
	area = high * bottom / 2;
	printf("三角形的面积为:%d", area);
	return 0;
}