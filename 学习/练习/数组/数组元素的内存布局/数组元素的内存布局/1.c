#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
//所有的数组都是由连续的内存位置组成
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		int* p = &arr[i];
		printf("%p\n", p);
	}
	return 0;
}