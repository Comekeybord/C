#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
int main()
{
	//1.�ֲ�����δ��ʼ��
	int a;//�ֲ���������ʼ����Ĭ�����ֵ
	int* p = &a;//ָ��ҲĬ�����ֵ
	//2.ָ��Խ�����
	int arr[10] = { 0 };
	int* pa = arr;
	int i = 0;
	for ( i = 0; i < 11; i++)
	{
		//��ָ��ָ��ķ�Χ�������鷶Χʱ��p��ΪҰָ�룬Ϊָ��Խ�����
		*(p++) = i;
	}
	//3.ָ��ָ��Ŀռ��ͷţ��ֲ���������
	
	return 0;
}