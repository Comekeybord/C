#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//&arrȡ��������arr�ĵ�ַ�����д&arr+1��ֱ��������������ĵ�ַ
	//sizeof(arr)����������Ĵ�С
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	printf("%d\n", &arr);
	printf("%d\n", &arr+1);
	return 0;
}
