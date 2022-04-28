#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void ss(int a)
{
	int i = 0;
	for ( i = 2; i <=(double)sqrt(a); i++)
	{
		if (a%i==0)
		{
			printf("不是素数");
			goto end;
		}
	}
	printf("%d是素数", a);
end:;
}
int main()
{
	int num = 0;
	printf("请输入素数>:");
	scanf("%d", &num);
	ss(num);
	return 0;
}