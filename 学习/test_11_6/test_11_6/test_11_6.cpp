#include<stdio.h>
int main()
{
	int ch = 0;
	//while ((ch=getchar()),ch<'0' || ch>'9')
	//{
	//	putchar(ch);
	//}
	//while ((ch=getchar()) != EOF)
	//{
	//	if (ch<'0' || ch>'9')
	//		continue;
	//	putchar(ch);
	//}
	//for—≠ª∑
	int i = 1;
	for ( i = 1; i <= 10; i++)
	{
		if (i==5)
		{
			continue;
		}
		printf("%d\n", i);
	}
	printf("—≠ª∑Ω· ¯\n");
	return 0;
}