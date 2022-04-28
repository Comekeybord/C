#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int ou = 0;
	int ji = 0;
	int i = 0;
	for ( i = 0; i < 7; i++)
	{
		if (i<6)
		{
			scanf("%d ", &arr[i]);
		}
		else if (i>5)
		{
			scanf("%d",&arr[i]);
		}
	}
	for ( i = 0; i < 6; i++)
	{
		if (arr[i] % 2 == 0)
		{
			ou++;
		}
		else
		{
			ji++;
		}
	}
	printf("%d %d", ji, ou);
	return 0;
}