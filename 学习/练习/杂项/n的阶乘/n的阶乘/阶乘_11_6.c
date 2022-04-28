#include<stdio.h>
int main()
{
	//自己写的：
	//int i = 1;
	//for ( i = 1; i=1 ; i++)
	//{
	//	int i = 1;
	//	int a = 1;
	//	long int j = 1;
	//	int z = 1;
	//	printf("请输入阶乘的次数：");
	//	scanf_s("%d", &a);
	//	z = a - 1;
	//	j = a;
	//	for (i = 1; i <= a; i++)
	//	{
	//		if (z >= 1)
	//		{
	//			j = j*z;
	//			z--;
	//		}
	//	}
	//	printf("j=%d\n", j);
	//}
	//比特的答案
	int i = 1;
	int n = 1;
	int ret = 1;
	scanf_s("%d", &n);
		for (i = 1; i <= n; i++)
		{
			ret = ret*i;
		}
	printf("a=%d", ret);
	return 0;
}