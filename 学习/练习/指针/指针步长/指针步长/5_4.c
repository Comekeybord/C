#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//指针的步长根指针类型是一样的，int步长为4字节，char步长为1字节，double步长为8字节
	//int* p = arr;
	char* p = arr;
	for ( i = 0; i < sz; i++)
	{
		*(p + i) = 1;
	}
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}