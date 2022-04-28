#include<stdio.h>
int main()
{
	/*int num1;
	int num2;
	int sum;
	scanf("%d%d",&num1,&num2);
	sum = num1 + num2;
	printf("sum  =%d\n", sum);*/
	extern int g_val;
	printf("g_val = %d\n",g_val);//全局变量的作用范围是整个工程
	return 0;
}
//变量有生命周期，变量的声明周期就是其作用域
//全局变量的生命周期是整个程序的生命周期