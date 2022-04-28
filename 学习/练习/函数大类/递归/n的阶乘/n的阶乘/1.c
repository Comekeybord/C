#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int Fac(int n)
{
	if (n>1)
	{
		return n*Fac(n-1);
	}
	return n;
}
void main()
{
	int n = 0;
	printf("请输入需要求的阶乘:");
	scanf("%d", &n);
	printf("%d", Fac(n));
}