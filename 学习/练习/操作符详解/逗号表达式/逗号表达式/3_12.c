#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 1;
	int c = 0;
	c = (a, b, a > b, b = b + c);//逗号表达式从左向右依次计算，但整个表达式的值是最后一个表达式的值
	printf("%d\n", c);
	return 0;
}