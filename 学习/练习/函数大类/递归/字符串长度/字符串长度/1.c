#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int my_strlen(char* str)
{
	if (*str!='\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}
