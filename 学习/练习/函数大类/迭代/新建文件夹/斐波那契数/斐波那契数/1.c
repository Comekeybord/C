#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
//用迭代写,迭代也是比较重要的
int Fib(int a)
{
	int b = 1;
	int c = 1;
	int d = 1;
	while (a>2)
	{
		d = b + c;
		b = c;
		c = d;
		a--;
	}
	return d;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d", Fib(a));
	return 0;
}