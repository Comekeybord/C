#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	short arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	short sz = sizeof(arr) / sizeof(arr[0]);
	short i = 0;
	short max = arr[0];
	for ( i = 0; i < sz; i++)
	{
		if (max<arr[i])
		{
			max = arr[i];
		}
	}
	printf("%d", max);
	return 0;
}