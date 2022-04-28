#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>//99³Ë·¨¿Ú¾÷±í
int main()
{
	short i = 0;
	for ( i = 1; i <= 9; i++)
	{
		for (short t = 1; t <= i; t++)
		{
			printf("%d*%d=%-2d ", i, t, i*t);
		}
		printf("\n");
	}
	return 0;
}