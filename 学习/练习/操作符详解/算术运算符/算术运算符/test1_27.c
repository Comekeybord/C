#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
void main()
{
	 //加法
	int a = 5 + 2;
	printf("加法:\n");
	printf("%d\n", a);
	//减法
	a = 5 - 2;
	printf("减法:\n");
	printf("%d\n", a);
	//乘法
	a = 5 * 2;
	printf("乘法:\n");
	printf("%d\n", a);
	//除法
	a = 5 / 2;
	printf("除法得商:\n");
	printf("%d\n", a);
	//取模
	a = 5 % 2;
	printf("取模得余数余数:\n");//注意只有模运算不能用浮点型数据，其他算术运算可以用浮点型数据
	printf("%d\n", a);
}