#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>//ÊÔ³ý·¨
#include<math.h>
int main()
{
	//int i = 0;
	//for ( i = 100; i <= 200; i++)
	//{
	//	int k = (int)sqrt((double)i);
	//	int t = 0;
	//		for(t = 2; t <= k; t++)
	//		{
	//			if (i%t == 0)
	//				break;
	//		}
	//	if (t>k)
	//	{
	//		printf("%d ", i);
	//	}
	//}
	//return 0;
	int i;
	for ( i = 101; i <= 200; i+=2)
	{
		int t = 0;
		for ( t=2;  t<= sqrt(i); t++)
		{
			if (i%t==0)
			{
				break;
			}
		}
		if (t>sqrt(i))
		{
			printf("%d ", i);
		}
	}
}