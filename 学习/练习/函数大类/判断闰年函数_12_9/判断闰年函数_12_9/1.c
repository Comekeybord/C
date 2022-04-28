#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
//闰年判断规则1.能被4整除但是不能被100整除2.能被400整除（满足其中一个既是闰年）
void pd(int a)
{
	if (((a%4==0)&&(a%100!=0)) || (a%400==0))
	{
		printf("%d是闰年", a);
	}
	else
	{
		printf("%d不是闰年", a);
	}
}
int main()
{
	int year = 0;
	printf("请输入需要判断的年份>:");
	scanf("%d", &year);
	pd(year);
	return 0;
}