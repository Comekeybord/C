#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>//闰年规则1.能被4整除但是不能被100整除2.能被400整除（满足其中一个既是闰年）
int main()
{
	short year = 0;
	for ( year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
			printf("%d ",year);
	}
	return 0;
}