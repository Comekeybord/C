#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	int g = 0;
	int b = 0;
	int s = 0;
	int ret = 0;
	scanf("%d", &n);
	b = n / 100;
	s = n % 100 / 10;
	g = n - b * 100 - s * 10;
	ret = g * 100 + s * 10 + b;
	printf("%d", ret);
	return 0;
}