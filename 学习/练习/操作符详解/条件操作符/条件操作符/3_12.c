#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int max = 0;
	printf("请输入a的值:");
	scanf("%d", &a);
	printf("请输入b的值:");
	scanf("%d", &b);
	max = (a > b ? a : b);
	printf("最大值是:%d", max);
	return 0;
}