#include<stdio.h>
#include<stdlib.h>
int main()
{
	///*int ch = 0;*/
	//EOF-end of file�ļ�������־
	//while ((ch=getchar()) != EOF)
	//{
	//	putchar(ch);
	//}
	//int ret = 0;
	//char password[20] = {0};
	//printf("����������>");
	//scanf_s("%s", password);//���뺯������������뻺����
	//printf("�������Ƿ�ȷ��>Y/N");
	//ret = getchar();//�����ȡ�����뻺������Ļ��У�����û��ͣ��
	//if (ret == 'Y')
	//{
	//	printf("��¼�ɹ���");
	//}
	//else
	//{
	//	printf("ȡ����¼");
	//}
	//�������
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("����������>");
	scanf_s("%s", password);//���뺯������������뻺����
	//while ((ch=getchar()) != '\n')
	//{
	//	getchar();
	//}
	getchar();
	printf("�������Ƿ�ȷ��>Y/N");
	ret = getchar();//�����ȡ�����뻺������Ļ��У�����û��ͣ��
	if (ret == 'Y')
	{
		printf("��¼�ɹ���");
	}
	else
	{
		printf("ȡ����¼");
	}
//int main()
//{
//		/* 	float bottom = 4;
//		float high = 2;
//		float area = 0;
//		area = high * bottom / 2;
//		printf("%.2f", area);
//		//system("pause");
//		return 0; */
//		int bottom = 4;
//		int high = 0;
//		int area = 0;
//		printf("�����������θߣ�");
//		scanf_s("%d", &high);
//		area = high * bottom / 2;
//		printf("�����ε����Ϊ:%d", area);
		return 0;
}