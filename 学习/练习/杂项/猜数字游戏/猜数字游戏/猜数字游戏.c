#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
void menu()
{
	printf("**********************************\n");
	printf("***   1.进入游戏   0.退出游戏  ***\n");
	printf("**********************************\n");
}
void game()
{
	//1.生成一个随机数
	//2.猜数字
	int ret = 0;
	int c = 0;
	ret = rand();
	while (c!=ret)
	{
		printf("请猜数字>:");
		scanf("%d", &c);
		if (c>ret)
		{
			printf("猜大了！");
		}
		else if (c<ret)
		{
			printf("猜小了！");
		}
	}
	printf("猜对了！！！");
}
int main()
{
	srand((unsigned)time(NULL));//重点,让随机数的起点不同
	short m = 0;
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &m);//把选择的值赋给m
		switch (m)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏！");
				break;
			default:
				printf("输入错误!");
				break;
		}
	} while (m);
	return 0;
}
