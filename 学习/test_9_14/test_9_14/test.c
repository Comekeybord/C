#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//#define MAX 10
////枚举常量enum
//enum Color
//{
//	red,
//	blue,
//	black
//};
//int main()
//{
//	enum Color a = red;
//	const int age = 456;//const表示变量拥有了常属性，值不可再变
//	//printf("请输入年龄:");
//	//scanf("%d",&age);
//	//printf("年龄是:%d\n",age);
//	//3;//字面常量
//	//#define定义的标识符常量
//	printf("MAX=%d\n",MAX);
//	printf("%d\n",a);
//	return 0;
//}
//int main()
//{
//	//char arr1[] = "abcdefg";
//	//char arr2[] = {'a','b','\0'};//0实际上是'\0'字符串结束的标志,\与其他东西组合组成转义字符比如"\n,\0"等
//	//printf("%d\n",strlen(arr1));//strlen标识符区字符长度
//	//printf("%d\n",strlen(arr2));//\t为水平制表符即tab键
//	printf("%d\n",strlen("d:\c\test_9_14"));//结果为12
//	printf("%d\n",strlen("d:\\c\\test_9_14"));//结果为14
//	printf("d:\\c\\test_9_14");
//	printf("\x61\n");//斜杠后面跟x为十六进制数字
//	return 0;
//}
//关于注释有两种一种是c语言的方式/**/，另一种是c++的注释方式//,现在也可在c语言中使用。两种注释有区别，c语言自带的方式不能嵌套注释
//int main()
//{
//	int p = 0;
//	printf("好好学习输入1,否则输入其他数:");
//	scanf("%d\n",&p);
//	if(p == 1)
//		printf("Do a good job!");
//	else
//		printf("Not good!");
//	return 0;
//}
//int main()
//{
//	int p = 0;
//	while(p <= 20000)
//	{
//		printf("加油小伙子，继续努力!!%d\n",p);
//		p++;
//	}
//	printf("恭喜你完成了人生的初试炼,希望你在今后的人生道路上不要忘记本心!");
//	return 0;
//}