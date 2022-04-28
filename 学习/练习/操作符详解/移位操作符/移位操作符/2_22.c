#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	//算术右移：最右边的位丢弃，最高位补原来的符号位，逻辑右移最高位直接补零
	int a = -16;
	int b=a >> 1;//算术右移
	printf("%d\n", b);
	//整数的二进制形式有三种：原码、反码、补码
	//计算机中整数补码的形式存储，正整数的三个码相同
	//例如-1的三码
	//源码 10000000000000000000000000000001
	//反码 11111111111111111111111111111110 反码等于源码除符号位以外的位取反
	//补码 11111111111111111111111111111111 补码等于反码加一
	//无论什么左移右边最低位都补0
	//注意不要移动负数位，例如移动-1位
	return 0;
}