#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int max = 0;
	printf("������a��ֵ:");
	scanf("%d", &a);
	printf("������b��ֵ:");
	scanf("%d", &b);
	max = (a > b ? a : b);
	printf("���ֵ��:%d", max);
	return 0;
}