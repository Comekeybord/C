#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int arr[], int sz)
{
	int t = 0;
	for (t = 0; t < sz - 1; t++)//ȷ��ð�ݵ�����
	{
		int i = 0;
		int flag = 1;//��������
		for (i = 0; i < sz - 1-t; i++)//ÿһ��ð�ݵĽ�������
		{
			if (arr[i]<arr[i + 1])
			{
				int a = 0;
				a = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = a;
				flag = 0;//����˵������
			}
		}
		if (flag==1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int z = 0;
	for ( z = 0; z < 10; z++)
	{
		printf("arr[%d]=%d ", z, arr[z]);
	}
	return 0;
}