#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include"add.h"
//int Add(int, int);//����������
int main()
{
	int a = 1;
	int b = 2;
	int num = Add(a, b);//��������
	printf("%d\n", num);
	return 0;
}
//int Add(int a, int b)//�����Ķ���
//{
//	return a + b;
//}