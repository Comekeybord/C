#define _CRT_SECURE_NO_DEPRECATE
#include"game.h"
void menu()
{
	printf("*******************************************\n");
	printf("******** 1.������Ϸ **** 0.�˳���Ϸ *******\n");
	printf("*******************************************\n");
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ!\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}