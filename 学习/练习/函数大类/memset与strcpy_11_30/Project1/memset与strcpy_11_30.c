#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<string.h>
int main()
{
	//�⺯����c���Ա���ʹ��ĺ�������ֱ�ӵ���
	char arr[] = "*********";
	char arr1[] = "##########";
	//strcpy(arr1, arr);
	//printf("%s", arr1);
	memset(arr1, 42, 9);
	printf("%s", arr1);
	return 0;
}