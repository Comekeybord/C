#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int Fib(int n)//效率低,用迭代效率高
{
	if (n<=2)
	{
		return 1;
	}
	else if (n>2)
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}
int main()
{
	int n = 0;
	printf("请输入要求第几个斐波那契数列:");
	scanf("%d", &n);
	printf("这个斐波那契数是:%d", Fib(n));
	return 0;
}