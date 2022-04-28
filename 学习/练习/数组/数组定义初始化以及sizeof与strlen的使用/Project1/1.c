#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr[] = "abc";//不完全初始化
	int a = sizeof(arr);
	int b = strlen(arr);
	printf("a=%d b=%d\n", a, b);
	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr1) / sizeof(arr1[0]));//用总大小除以元素的大小就等于元素的个数
	return 0;
	//1.sizeof和strlen没有什么关联
	//2.sizeof计算变量数组类型的大小，单位是字节。--操作符
	//3.strlen只能字符串长度，默认返回无符号整形。--库函数，必须引用头文件
}
