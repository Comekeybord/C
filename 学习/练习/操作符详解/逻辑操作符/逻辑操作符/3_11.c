#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	int d = 1;
	int c = a&&b;//�߼���
	printf("%d\n", c);
	c = a || b;//�߼���
	printf("%d\n", c);
	c = a++&&++b;//ֻҪ�����0��ô�߼����ұ߶�����������
	printf("%d\n", c);
	c = d++ || b++;
	printf("d=%d\nb=%d\n", d,b);//�߼���ֻҪ��һ����һ��ô����ı��ʽ������������
	return 0;
}