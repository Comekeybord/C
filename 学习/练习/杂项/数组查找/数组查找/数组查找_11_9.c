#include<stdio.h>
int main()
{
	//二分查找思想
	//1.一个一个找
	//int i = 0;
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int a = sizeof(arr) / sizeof(arr[0]);
	//for ( i = 0; i < a; i++)
	//{
	//	if (6 == arr[i])
	//		printf("找到了，下标是：%d\n", i);
	//}
	//2.二分法查找
	//int k = 0;
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("请输入要查找的整形元素：\n");
	//scanf_s("%d", &k);
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int left = 0;
	//int right = sz - 1;
	//int mid = 0;
	//while (left<right)
	//{
	//	mid = (right + left) / 2;
	//	if (k<arr[mid])
	//	{
	//		right = mid;
	//	}
	//	else if (k>arr[mid])
	//	{
	//		left = mid;
	//	}
	//	else if (k == arr[mid])
	//	{
	//		printf("找到了，下标为：%d", mid);
	//		break;
	//	}
	//}
	//if (left>right)
	//{
	//	printf("找不到这个元素");
	//}
	return 0;
}