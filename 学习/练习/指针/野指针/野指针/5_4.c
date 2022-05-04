#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
int main()
{
	//1.局部变量未初始化
	int a;//局部变量不初始化，默认随机值
	int* p = &a;//指针也默认随机值
	//2.指针越界访问
	int arr[10] = { 0 };
	int* pa = arr;
	int i = 0;
	for ( i = 0; i < 11; i++)
	{
		//当指针指向的范围超出数组范围时，p就为野指针，为指针越界访问
		*(p++) = i;
	}
	//3.指针指向的空间释放，局部变量销毁
	
	return 0;
}