#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 1;
	int c = 0;
	c = (a, b, a > b, b = b + c);//���ű��ʽ�����������μ��㣬���������ʽ��ֵ�����һ�����ʽ��ֵ
	printf("%d\n", c);
	return 0;
}