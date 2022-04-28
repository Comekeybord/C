#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char r[20] = {0};
	system("shutdown -s -t 60");//执行系统命令
	//while (1)
	//{
	//	printf("你的电脑将在一分钟内关机，请输入“我是猪”取消关机\n请输入>:");
	//	scanf("%s", r);
	//	if (strcmp(r, "我是猪") == 0)
	//	{
	//		system("shutdown -a");
	//		break;
	//	}
	//}
	again:
		printf("你的电脑将在一分钟内关机，请输入“我是猪”取消关机\n请输入>:");
		scanf("%s", r);
		if (strcmp(r, "我是猪") == 0)
		{
			system("shutdown -a");
		}
		else
		{
			goto again;
		}
	return 0;
}