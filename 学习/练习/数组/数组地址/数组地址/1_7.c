#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//&arr取的是数组arr的地址，如果写&arr+1会直接跳过整个数组的地址
	//sizeof(arr)求整个数组的大小
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	printf("%d\n", &arr);
	printf("%d\n", &arr+1);
	return 0;
}
