#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ָ��Ĳ�����ָ��������һ���ģ�int����Ϊ4�ֽڣ�char����Ϊ1�ֽڣ�double����Ϊ8�ֽ�
	//int* p = arr;
	char* p = arr;
	for ( i = 0; i < sz; i++)
	{
		*(p + i) = 1;
	}
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}