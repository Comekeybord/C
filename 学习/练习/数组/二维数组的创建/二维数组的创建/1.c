#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//�б겻��ʡ��
	int arr[3][4] = { {1,2,3,4},{1,2} };
	char ch[][2] = { {1,2} };
	int i = 0;
	int t = 0;
	printf("V:\n");
	for ( i = 0; i < 3; i++)//��ӡÿ��Ԫ�ص�ֵ
	{
		for ( t= 0; t < 4; t++)
		{
			if (t==3)
			{
				printf("arr[%d][%d]=%d\n", i, t, arr[i][t]);
			}
			else
			{
				printf("arr[%d][%d]=%d ", i, t, arr[i][t]);
			}
		}
	}
	printf("\nP:\n");//��ַ���е���
	for (i = 0; i < 3; i++)//��ӡÿ��Ԫ�صĵ�ַ
	{
		for (t = 0; t < 4; t++)
		{
			if (t == 3)
			{
				printf("arr[%d][%d]=%d\n", i, t, &arr[i][t]);
			}
			else
			{
				printf("arr[%d][%d]=%d ", i, t, &arr[i][t]);
			}
		}
	}
	//��һ��arr[0][j],�ڶ���arr[1][j]�Դ�����
	return 0;
}