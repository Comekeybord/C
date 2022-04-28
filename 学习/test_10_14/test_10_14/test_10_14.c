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
	printf("请输入第一个数字：\n");
	scanf("%d" , &num1);
	printf("请输入第二个数字：\n" , &num2);
	scanf("%d" ,&num2);
	max = Max(num1 , num2);
	printf("最大的数是：%d\n" , max);

	/*printf("请输入第一个数字：\n");
	scanf("%d" , &num1);
	printf("请输入第二个数字：\n" , &num2);
	scanf("%d" ,&num2);
	if( num1 > num2)
		printf("最大值是：%d\n" , num1);
	else
		printf("最大值是; %d\n" , num2);
	return 0;*/
}