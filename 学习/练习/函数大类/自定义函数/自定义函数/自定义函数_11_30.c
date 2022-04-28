#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
//int add(int x, int y)//求和函数
//{
//	int sum = x + y;
//	return sum;
//}
//函数调用的两种方式：1.传值调用（形参的修改不影响实参）2.传址调用（形参的修改影响实参）
void exchange(int* pa, int* pb)//交换,用指针变量
//为什么不能用a，b：
//当实参传给形参的时候形参其实是实参的一份临时拷贝，对形参的修改不会影响实参
{
	int t;
	t = *pa;
	*pa = *pb;
	*pb = t;
}
int main()
{
	//自定义函数
	//ret_type fun_name(part1,*)
	//{
	//	statement;语句项
	//}
	int a = 2;
	int b = 3;
	int* c = &a;
	int* d = &b;
	exchange(c, d);
	printf("%d %d\n", a,b);
	return 0;
}
//定义函数时函数名括号后的参数为形式参数
//被传递的参数为实际参数，必须有确定的值
