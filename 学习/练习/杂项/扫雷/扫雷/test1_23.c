#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("***************************************\n");
	printf("******1.play         0.exit************\n");
	printf("***************************************\n");
	printf("��ѡ���Ƿ�ʼ��Ϸ:");
}
void test()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("�Ƿ�����!!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}