#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int binary_search(int arr[], int a,int sz)//这里的arr本质上是一个指针
{
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = left + ((left + right) / 2);
		if (arr[mid]>a)
		{
			right = mid-1;
		}
		else if (arr[mid]<a)
		{
			left = mid+1;
		}
		else if(arr[mid]==a)
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	//二分查找
	//在一个有序数组中查找具体的某个值
	//函数第一个参数指定查找对象，第二个参数指定需要查找的数,第三个参数是数组元素个数
	//找到返回下标，找不到返回-1
	int a = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("Please enter what you want find:>");
	scanf("%d", &a);
	int ret=binary_search(arr, a,sz);//传递过去的arr是数组首元素的地址
	if (ret ==-1)
	{
		printf("没有要找的数字.");
	}
	else
	{
		printf("找到了下标是：%d ", ret);
	}
	return 0;
}