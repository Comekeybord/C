#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int get_num(int a)
{
	if (a>1)
	{

	}
}
int main()
{
	int a = 0;
	printf("请输入汉诺塔层数:");
	scanf("%d",&a);
	printf("需要用%d次才能完成", get_num(a));
	return 0;
}