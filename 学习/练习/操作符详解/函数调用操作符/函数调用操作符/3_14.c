#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>


int get_max(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);//�����()Ϊ�������ò�������������������һ��
	printf("max = %d\n", max);
	return 0;
}