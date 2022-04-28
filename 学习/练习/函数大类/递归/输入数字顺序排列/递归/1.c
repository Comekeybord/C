#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
//递归：函数自己调用自己
//递归常见错误：栈溢出
//将一个数字按位空格打印
//递归必须包含1.限制条件2.每次调用越来越接近条件
void print(int a)
{
	if (a>9)//限制条件
	{
		print(a / 10);//越来越接近限制条件
	}
	printf("%d ", a%10);
	return 0;
}
int main()
{
	unsigned int a = 0;
	scanf("%d", &a);
	print(a);
	return 0;
}
