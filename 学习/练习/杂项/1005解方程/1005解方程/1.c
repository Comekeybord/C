#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	double x1 = 0.0;
	double x2 = 0.0;
	scanf("%lf %lf %lf", &a,& b,& c);
	x1 = (((-b) - sqrt((b*b - 4 * a*c))) / (2 * a));
	x2 = (((-b) - sqrt((b*b - 4 * a*c))) / (2 * a));
	if (x1>x2)
	{
		printf("%.5lf", x1);
	}
	else
	{
		printf("%.5llf", x2);
	}
	return 0;
}

