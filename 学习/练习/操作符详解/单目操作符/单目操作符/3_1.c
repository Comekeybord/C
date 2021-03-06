#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	//---------------------------
	int a = 0;
	int* p = &a;//取地址操作符
	*p = 1;//解引用操作符
	printf("%d\n", a);
	//---------------------------
	char b = 'c';
	int arr[10] = { 0 };
	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(b));//1
	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(int [10]));//int [10]就是数组arr的类型
	short s = 0;
	a = 5;
	printf("%d\n", sizeof(s=a+5));//2
	printf("%d\n", s);//0,上一步中不进行真实的运算
	printf("%d\n", ~a);//按二进制位取反,所以位都取反
	//5的
	//原码 - 00000000000000000000000000000101
	//反码 - 00000000000000000000000000000101
	//补码 - 00000000000000000000000000000101
	//补码取反 - 11111111111111111111111111111010
	//反码 - 11111111111111111111111111111001 等于补码减一
	//原码 - 10000000000000000000000000000110 等于负六
	//原码与反码之间的转换，正数相等，负数则符号位不变其他位全部取反
	a = a | (1 << 1);//将1向左移一位再或上a那么a的第二位就变成1
	printf("%d\n", a);
	//强制类型转换
	b = (int)3.14;
	printf("%d\n", b);
	return 0;
}