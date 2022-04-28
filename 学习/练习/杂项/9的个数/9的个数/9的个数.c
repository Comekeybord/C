#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	short count = 0;
	for (short i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i/10==9)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}