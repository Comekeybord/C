#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//列标不能省略
	int arr[3][4] = { {1,2,3,4},{1,2} };
	char ch[][2] = { {1,2} };
	int i = 0;
	int t = 0;
	printf("V:\n");
	for ( i = 0; i < 3; i++)//打印每个元素的值
	{
		for ( t= 0; t < 4; t++)
		{
			if (t==3)
			{
				printf("arr[%d][%d]=%d\n", i, t, arr[i][t]);
			}
			else
			{
				printf("arr[%d][%d]=%d ", i, t, arr[i][t]);
			}
		}
	}
	printf("\nP:\n");//地址按行递增
	for (i = 0; i < 3; i++)//打印每个元素的地址
	{
		for (t = 0; t < 4; t++)
		{
			if (t == 3)
			{
				printf("arr[%d][%d]=%d\n", i, t, &arr[i][t]);
			}
			else
			{
				printf("arr[%d][%d]=%d ", i, t, &arr[i][t]);
			}
		}
	}
	//第一行arr[0][j],第二行arr[1][j]以此类推
	return 0;
}