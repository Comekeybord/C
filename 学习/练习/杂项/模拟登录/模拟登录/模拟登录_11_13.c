#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<string.h>
int main()
{
	printf("三次错误则退出程序!!\n");
	char zh[] = "0";
	char mm[] = "0";
	int i = 1;
	while (i<=1)
	{
		printf("请输入12位账号：");
		scanf("%s", zh);
		if (strlen(zh) >= 13)
		{
			printf("账号小于等于12位数，请重新输入账号！\n");
			continue;
		}
		i++;
	}
	int t = 1;
	while (t<=3)
	{
		printf("请输入16位以下密码：");
		scanf("%s", mm);
		if (strlen(mm) >= 17)
		{
			printf("密码超出长度，请重新输入！！\n");
			continue;
		}
		else if (strcmp(mm,"13142zcT") != 0)
		{
			printf("错误%d次，连续错误三次就会销毁程序!!\n", t);
			t++;
		}
		else if (strcmp(mm,"13142zcT") == 0)
		{
			printf("欢迎来到public world!!!\n");
			break;
		}
	}
		if (t == 3)
		{
			EOF;
		}
	return 0;
}