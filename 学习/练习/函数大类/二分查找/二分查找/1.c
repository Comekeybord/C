#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int binary_search(int arr[], int a,int sz)//�����arr��������һ��ָ��
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
	//���ֲ���
	//��һ�����������в��Ҿ����ĳ��ֵ
	//������һ������ָ�����Ҷ��󣬵ڶ�������ָ����Ҫ���ҵ���,����������������Ԫ�ظ���
	//�ҵ������±꣬�Ҳ�������-1
	int a = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("Please enter what you want find:>");
	scanf("%d", &a);
	int ret=binary_search(arr, a,sz);//���ݹ�ȥ��arr��������Ԫ�صĵ�ַ
	if (ret ==-1)
	{
		printf("û��Ҫ�ҵ�����.");
	}
	else
	{
		printf("�ҵ����±��ǣ�%d ", ret);
	}
	return 0;
}