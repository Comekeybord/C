#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include"add.h"
//int Add(int, int);//函数的声明
int main()
{
	int a = 1;
	int b = 2;
	int num = Add(a, b);//函数调用
	printf("%d\n", num);
	return 0;
}
//int Add(int a, int b)//函数的定义
//{
//	return a + b;
//}