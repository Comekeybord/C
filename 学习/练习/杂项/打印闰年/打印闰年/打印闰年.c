#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>//�������1.�ܱ�4�������ǲ��ܱ�100����2.�ܱ�400��������������һ���������꣩
int main()
{
	short year = 0;
	for ( year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
			printf("%d ",year);
	}
	return 0;
}