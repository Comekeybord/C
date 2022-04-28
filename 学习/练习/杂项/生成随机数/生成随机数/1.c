#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	srand((unsigned)time(NULL));
	int s[10] = {1};
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		s[i] = rand();
		printf("s[%d]= %d ", i, s[i]);
	}
	return 0;
}