#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	int a[18] = { 70,65,85,88,32,80,65,83,83,87,79,82,68,32,72,65,72,65 };
	for ( i = 0; i < 17; i++)
	{
		printf("%c", (char)a[i]);
	}
	return 0;
}