#include<stdio.h>
int main()
{
	//�ҵĽⷨ�������������Χ�ڴ�һ�Ľ׳˼ӵ��κ����Ľ׳�
	//int i = 1;
	//int n = 1;
	//int a = 0;
	//int t = 1;
	//scanf_s("%d", &n);
	//int b = n;
	//for (t = 1; t <= b; t++)
	//{
	//	int ret = 1;
	//	for (i = 1; i <= n; i++)
	//	{
	//		ret = ret*i;
	//	}
	//	n = n--;
	//	a = a + ret;
	//}
	//printf("a=%d", a);
	//���صĽⷨ�����һ�Ľ׳˼ӵ�ʮ�Ľ׳�
	int i = 1;
	int n = 1;
	int a = 0;
	int ret = 1;
	for ( i = 1; i <= 10; i++)
	{
		ret = ret*i;
		a = a + ret;
		printf("%d\n", a);
	}
	return 0;
}