#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
//int add(int x, int y)//��ͺ���
//{
//	int sum = x + y;
//	return sum;
//}
//�������õ����ַ�ʽ��1.��ֵ���ã��βε��޸Ĳ�Ӱ��ʵ�Σ�2.��ַ���ã��βε��޸�Ӱ��ʵ�Σ�
void exchange(int* pa, int* pb)//����,��ָ�����
//Ϊʲô������a��b��
//��ʵ�δ����βε�ʱ���β���ʵ��ʵ�ε�һ����ʱ���������βε��޸Ĳ���Ӱ��ʵ��
{
	int t;
	t = *pa;
	*pa = *pb;
	*pb = t;
}
int main()
{
	//�Զ��庯��
	//ret_type fun_name(part1,*)
	//{
	//	statement;�����
	//}
	int a = 2;
	int b = 3;
	int* c = &a;
	int* d = &b;
	exchange(c, d);
	printf("%d %d\n", a,b);
	return 0;
}
//���庯��ʱ���������ź�Ĳ���Ϊ��ʽ����
//�����ݵĲ���Ϊʵ�ʲ�����������ȷ����ֵ
