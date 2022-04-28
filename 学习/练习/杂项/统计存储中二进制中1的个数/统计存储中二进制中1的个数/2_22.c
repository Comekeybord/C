#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	//也就是计算整数补码中1的个数
	int num = 0;
	scanf("%d", &num);
	int i = 0;
	int count = 0;
	for ( i = 0; i < 32; i++)//一个数按位与上1最低位如果为零那么结果也为零，最低位如果为一那么结果也为一
	{
		num >> i;
		if ((num & 1)==1)
			count++;
	}
	printf("%d", count);
	return 0;
}