#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("***************************************\n");
	printf("******1.play         0.exit************\n");
	printf("***************************************\n");
	printf("请选择是否开始游戏:");
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
			printf("退出游戏!\n");
			break;
		default:
			printf("非法输入!!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}