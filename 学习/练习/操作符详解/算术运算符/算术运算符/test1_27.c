#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
void main()
{
	 //�ӷ�
	int a = 5 + 2;
	printf("�ӷ�:\n");
	printf("%d\n", a);
	//����
	a = 5 - 2;
	printf("����:\n");
	printf("%d\n", a);
	//�˷�
	a = 5 * 2;
	printf("�˷�:\n");
	printf("%d\n", a);
	//����
	a = 5 / 2;
	printf("��������:\n");
	printf("%d\n", a);
	//ȡģ
	a = 5 % 2;
	printf("ȡģ����������:\n");//ע��ֻ��ģ���㲻���ø��������ݣ�����������������ø���������
	printf("%d\n", a);
}