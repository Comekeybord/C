#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	//Ҳ���Ǽ�������������1�ĸ���
	int num = 0;
	scanf("%d", &num);
	int i = 0;
	int count = 0;
	for ( i = 0; i < 32; i++)//һ������λ����1���λ���Ϊ����ô���ҲΪ�㣬���λ���Ϊһ��ô���ҲΪһ
	{
		num >> i;
		if ((num & 1)==1)
			count++;
	}
	printf("%d", count);
	return 0;
}