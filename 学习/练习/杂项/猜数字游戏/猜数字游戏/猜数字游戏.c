#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
void menu()
{
	printf("**********************************\n");
	printf("***   1.������Ϸ   0.�˳���Ϸ  ***\n");
	printf("**********************************\n");
}
void game()
{
	//1.����һ�������
	//2.������
	int ret = 0;
	int c = 0;
	ret = rand();
	while (c!=ret)
	{
		printf("�������>:");
		scanf("%d", &c);
		if (c>ret)
		{
			printf("�´��ˣ�");
		}
		else if (c<ret)
		{
			printf("��С�ˣ�");
		}
	}
	printf("�¶��ˣ�����");
}
int main()
{
	srand((unsigned)time(NULL));//�ص�,�����������㲻ͬ
	short m = 0;
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &m);//��ѡ���ֵ����m
		switch (m)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ��");
				break;
			default:
				printf("�������!");
				break;
		}
	} while (m);
	return 0;
}
