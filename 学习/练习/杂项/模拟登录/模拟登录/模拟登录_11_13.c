#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<string.h>
int main()
{
	printf("���δ������˳�����!!\n");
	char zh[] = "0";
	char mm[] = "0";
	int i = 1;
	while (i<=1)
	{
		printf("������12λ�˺ţ�");
		scanf("%s", zh);
		if (strlen(zh) >= 13)
		{
			printf("�˺�С�ڵ���12λ���������������˺ţ�\n");
			continue;
		}
		i++;
	}
	int t = 1;
	while (t<=3)
	{
		printf("������16λ�������룺");
		scanf("%s", mm);
		if (strlen(mm) >= 17)
		{
			printf("���볬�����ȣ����������룡��\n");
			continue;
		}
		else if (strcmp(mm,"13142zcT") != 0)
		{
			printf("����%d�Σ������������ξͻ����ٳ���!!\n", t);
			t++;
		}
		else if (strcmp(mm,"13142zcT") == 0)
		{
			printf("��ӭ����public world!!!\n");
			break;
		}
	}
		if (t == 3)
		{
			EOF;
		}
	return 0;
}