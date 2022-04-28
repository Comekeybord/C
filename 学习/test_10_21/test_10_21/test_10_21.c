#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define定义常量
#define max 100
//#define定义宏-带参数
#define MAX(X,Y) (X>Y?X:Y)
int main()
{
	//extern用来声明外部符号
	//extern int g;
	//printf("g是:%d\n",g);
	/*extern int Add(int,int);
	int d=10;
	int e=20;
	int f=Add(d,e);
	printf("f的值为：%d\n",f);*/

	//#define定义常量和宏
	//int a=20;
	//int b=30;
	//int c=MAX(a,b);
	//printf("大的数是：%d\n",c);
	//指针
	int a=10;//4个字节
	printf("a的地址是：%p\n",&a);
	return 0;
}