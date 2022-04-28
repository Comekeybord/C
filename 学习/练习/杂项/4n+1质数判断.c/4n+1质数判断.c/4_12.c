#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int getnum(int n)
{
	int i = 1;
	int num = 0;
	for (i = 2; i<n; i++)
	{
		if ((i - 1) % 4 == 0)
		{
			if (panduan(i)==1)
			{
				num++;
			}
		}
	}
	return num;
}
int panduan(int t)
{
	int i = 1;
	int r = 0;
	for (i = 2; i <= (int)sqrt(t); i++)
	{
		if (t%i == 0)
		{
			r++;
		}
	}
	if (r==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		printf("%d\n", getnum(n));
	}
	return 0;
}