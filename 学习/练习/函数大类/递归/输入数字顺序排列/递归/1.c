#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
//�ݹ飺�����Լ������Լ�
//�ݹ鳣������ջ���
//��һ�����ְ�λ�ո��ӡ
//�ݹ�������1.��������2.ÿ�ε���Խ��Խ�ӽ�����
void print(int a)
{
	if (a>9)//��������
	{
		print(a / 10);//Խ��Խ�ӽ���������
	}
	printf("%d ", a%10);
	return 0;
}
int main()
{
	unsigned int a = 0;
	scanf("%d", &a);
	print(a);
	return 0;
}
