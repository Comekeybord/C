#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char r[20] = {0};
	system("shutdown -s -t 60");//ִ��ϵͳ����
	//while (1)
	//{
	//	printf("��ĵ��Խ���һ�����ڹػ��������롰������ȡ���ػ�\n������>:");
	//	scanf("%s", r);
	//	if (strcmp(r, "������") == 0)
	//	{
	//		system("shutdown -a");
	//		break;
	//	}
	//}
	again:
		printf("��ĵ��Խ���һ�����ڹػ��������롰������ȡ���ػ�\n������>:");
		scanf("%s", r);
		if (strcmp(r, "������") == 0)
		{
			system("shutdown -a");
		}
		else
		{
			goto again;
		}
	return 0;
}