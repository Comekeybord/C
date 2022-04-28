#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	float sum = 0.0;
	short sign = 1;
	for (short i = 1; i <=100 ; i++)
	{
		sum += sign*1.0 / i;
		//sign = -sign;
	}
	for (short t = 2; t <=100 ; t+=2)
	{
		sum = sum-2.0 / t;
	}
	printf("%f", sum);
	return 0;
}