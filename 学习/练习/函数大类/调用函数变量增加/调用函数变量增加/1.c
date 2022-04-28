#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int Add(int a,int b,int* pnum)
{
	*pnum += 1;
	return a + b;
}
int main()
{
	int num = 0;
	int* pnum = &num;
	int a = 2;
	int b = 3;
	int ret = Add(a, b,pnum);
	printf("ret=%d num=%d", ret,num);
	return 0;
}
