#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<math.h>
int main()
{
	float h1 = 0;
	float h2 = 0;
	float xb = 0;
	scanf("%f %f", &h1, &h2);
	xb = (float)sqrt((double)((h1*h1)+(h2*h2)));
	printf("%.5f",xb);
	return 0;
}