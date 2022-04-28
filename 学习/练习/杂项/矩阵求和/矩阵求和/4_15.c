#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
void getarr(int t,int arr[10])
{
	for (t = 0; t < 5; t++)
	{
		scanf("%d %d %d %d %d", &arr[t][0], &arr[t][1], &arr[t][2], &arr[t][3], &arr[t][4]);
	}
	
	return 0;
}
int main()
{
	int arr[10][10] = { 0 };
	int num = 0;
	scanf("%d", &num);
	getarr(num,arr);
	return 0;
}