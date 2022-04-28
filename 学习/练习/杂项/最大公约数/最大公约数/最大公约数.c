#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>//Õ·×ªÏà³ý·¨
int main()
{
	int m = 0;
	int n = 0;
	int r = 0;
	scanf("%d%d", &m, &n);
	while (r=m%n)
	{
		m = n;
		n = r;
	}
	printf("%d\n", n);
	return 0;
}