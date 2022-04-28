#include<stdio.h>
#include<stdlib.h>
int main()
{
	///*int ch = 0;*/
	//EOF-end of file文件结束标志
	//while ((ch=getchar()) != EOF)
	//{
	//	putchar(ch);
	//}
	//int ret = 0;
	//char password[20] = {0};
	//printf("请输入密码>");
	//scanf_s("%s", password);//输入函数，会进入输入缓冲区
	//printf("请输入是否确认>Y/N");
	//ret = getchar();//这里读取了输入缓冲区里的换行，所以没有停留
	//if (ret == 'Y')
	//{
	//	printf("登录成功！");
	//}
	//else
	//{
	//	printf("取消登录");
	//}
	//解决方法
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码>");
	scanf_s("%s", password);//输入函数，会进入输入缓冲区
	//while ((ch=getchar()) != '\n')
	//{
	//	getchar();
	//}
	getchar();
	printf("请输入是否确认>Y/N");
	ret = getchar();//这里读取了输入缓冲区里的换行，所以没有停留
	if (ret == 'Y')
	{
		printf("登录成功！");
	}
	else
	{
		printf("取消登录");
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
//		printf("请输入三角形高：");
//		scanf_s("%d", &high);
//		area = high * bottom / 2;
//		printf("三角形的面积为:%d", area);
		return 0;
}