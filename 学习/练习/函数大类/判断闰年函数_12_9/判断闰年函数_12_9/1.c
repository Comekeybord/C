#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
//�����жϹ���1.�ܱ�4�������ǲ��ܱ�100����2.�ܱ�400��������������һ���������꣩
void pd(int a)
{
	if (((a%4==0)&&(a%100!=0)) || (a%400==0))
	{
		printf("%d������", a);
	}
	else
	{
		printf("%d��������", a);
	}
}
int main()
{
	int year = 0;
	printf("��������Ҫ�жϵ����>:");
	scanf("%d", &year);
	pd(year);
	return 0;
}