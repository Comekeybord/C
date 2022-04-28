#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	int d = 1;
	int c = a&&b;//逻辑与
	printf("%d\n", c);
	c = a || b;//逻辑或
	printf("%d\n", c);
	c = a++&&++b;//只要左边是0那么逻辑与右边都不进行运算
	printf("%d\n", c);
	c = d++ || b++;
	printf("d=%d\nb=%d\n", d,b);//逻辑或只要第一个是一那么后面的表达式都不进行运算
	return 0;
}