#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
int main()
{
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(short*));

	int a = 0x11223344;
	int* pa = &a;
	char* pb = &a;
	//printf("%p\n", pa);
	//printf("%p\n", pb);
	//*pa = 0;
	*pb = 0;//如果指针类型不匹配，只会修改一部分字节的值
	printf("%p\n", a);
	
	return 0;
}