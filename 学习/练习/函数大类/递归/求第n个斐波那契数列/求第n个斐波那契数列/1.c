#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int Fib(int n)//Ч�ʵ�,�õ���Ч�ʸ�
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
	printf("������Ҫ��ڼ���쳲���������:");
	scanf("%d", &n);
	printf("���쳲���������:%d", Fib(n));
	return 0;
}