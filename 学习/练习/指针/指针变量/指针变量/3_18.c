#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
int main()
{
	//指针是个变量存放内存单元的地址(存放在指针中的值被当做地址来处理)
	//指针大小在32位平台为4个字节，在64位平台为8个字节
	int a = 0;
	int* pa = &a;//pa就是指针变量
	return 0;
}