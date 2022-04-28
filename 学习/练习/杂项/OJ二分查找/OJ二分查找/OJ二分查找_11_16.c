#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int arr1[5] = {0,0,0,0,0};
	scanf("%d", &n);
	int i = 0;
	for ( i = 0; i < n; i++)
	{
		scanf("%d",&arr1[i]);
	}
	scanf("%d", &m);
	for ( i = 0; i < 11; i++)
	{
		int left = 0;
		int right = n - 1;
		int c = 0;
		int mid=0;
		scanf("%d", &c);
		while (left<=right)
		{
			mid = left+((right-left) / 2);
			if (c<arr1[mid])
			{
				left = mid+1;
			}
			else if (c>arr1[mid])
			{
				right = mid-1;
			}
			else if (c == arr1[mid])
			{
				printf("%d\n", mid);
				break;
			}
		}
		if(left>right)
		{
			printf("Not found!\n");
		}
	}
	return 0;
}