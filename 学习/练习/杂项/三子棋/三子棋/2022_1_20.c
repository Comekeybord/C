#define _CRT_SECURE_NO_DEPRECATE
#include"game.h"
void menu()
{
	printf("*******************************************\n");
	printf("******** 1.进入游戏 **** 0.退出游戏 *******\n");
	printf("*******************************************\n");
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏!\n");
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}