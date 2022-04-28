#include<stdio.h>
int main()
{
	/*short a=1;
	short i=1;
	while(i<=100)
	{
		if(i%2 == 1)
		{
			printf("%d������!!\n",i);
		}
		i=i++;
	}*/
	short a;
	printf("请输入今天星期几：\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("工作日\n");
			break;
		case 6:
		case 7:
			printf("休息日");
			break;
		default:
			printf("请输入正确的星期数");
	}
	system("pause");
	return 0;
}