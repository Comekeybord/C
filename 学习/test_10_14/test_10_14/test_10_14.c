#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Max(num1 , num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}
int main()
{
	int num1;
	int num2;
	int max;
	printf("�������һ�����֣�\n");
	scanf("%d" , &num1);
	printf("������ڶ������֣�\n" , &num2);
	scanf("%d" ,&num2);
	max = Max(num1 , num2);
	printf("�������ǣ�%d\n" , max);

	/*printf("�������һ�����֣�\n");
	scanf("%d" , &num1);
	printf("������ڶ������֣�\n" , &num2);
	scanf("%d" ,&num2);
	if( num1 > num2)
		printf("���ֵ�ǣ�%d\n" , num1);
	else
		printf("���ֵ��; %d\n" , num2);
	return 0;*/
}