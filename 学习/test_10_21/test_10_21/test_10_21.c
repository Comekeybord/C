#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define���峣��
#define max 100
//#define�����-������
#define MAX(X,Y) (X>Y?X:Y)
int main()
{
	//extern���������ⲿ����
	//extern int g;
	//printf("g��:%d\n",g);
	/*extern int Add(int,int);
	int d=10;
	int e=20;
	int f=Add(d,e);
	printf("f��ֵΪ��%d\n",f);*/

	//#define���峣���ͺ�
	//int a=20;
	//int b=30;
	//int c=MAX(a,b);
	//printf("������ǣ�%d\n",c);
	//ָ��
	int a=10;//4���ֽ�
	printf("a�ĵ�ַ�ǣ�%p\n",&a);
	return 0;
}