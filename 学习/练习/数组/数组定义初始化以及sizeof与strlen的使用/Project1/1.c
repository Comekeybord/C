#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr[] = "abc";//����ȫ��ʼ��
	int a = sizeof(arr);
	int b = strlen(arr);
	printf("a=%d b=%d\n", a, b);
	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr1) / sizeof(arr1[0]));//���ܴ�С����Ԫ�صĴ�С�͵���Ԫ�صĸ���
	return 0;
	//1.sizeof��strlenû��ʲô����
	//2.sizeof��������������͵Ĵ�С����λ���ֽڡ�--������
	//3.strlenֻ���ַ������ȣ�Ĭ�Ϸ����޷������Ρ�--�⺯������������ͷ�ļ�
}
