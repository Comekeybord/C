#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<math.h>
int huiwenshu(int t)
{
	int i = 0;
	int z = 0;
	int arr[5] = { 0 };
	int num1 = 0;
	for ( i = 1; i <= 5; i++)
	{
		arr[i - 1] = t % 10;//这个容易写成嵌套循环
		t /= 10;
	}
	for (i = 0; i < 3; i++)//这里容易写成i < 5
	{
		if (arr[i] == arr[4 - i])
		{
			num1++;
		}
	}
	if (num1 == 3)
	{
		return 1;
	}
	else if(num1 !=3)
	{
		return 0;
	}
}

int zhishu(int x)
{
	int num2 = 0;
	int i = 0;
	for ( i = 2; i <= (int)sqrt(x); i++)
	{
		if (x % i == 0)
		{
			num2++;
		}
	}
	if (num2 != 0)
	{
		return 0;
	}
	else if(num2 == 0)
	{
		return 1;
	}
}
int main()
{
	int i = 0;
	int num = 0;
	for ( i = 10000; i <= 99999; i++)
	{
		if ((huiwenshu(i) && zhishu(i)) == 1)
		{
			num++;
		}
	}
	printf("%d\n", num);
	return 0;
}