#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
short is_leap_year(short n)
{
	if ((n%4==0&&n%100!=0) || (n%400==0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	short i = 0;
	for ( i = 2000; i <= 3000; i++)
	{
		if (is_leap_year(i)==1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
