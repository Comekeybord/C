#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//指针，解引用操作符
//	int a=10;
//	int* p=&a;
//	int* c;
//	printf("a的修改前值为：%d\n",a);
//	printf("a的地址为：%p\n",p);
//	*p=20;
//	c=&a;
//	printf("a的修改后值为：%d\n",a);
//	printf("a的地址为：%p\n",c);
//	return 0;
//}
//struct结构体类型声明标识符
struct Book
{
	char name[20];
	short price;
};
int main()
{
	//结构体,由于事物不可能单单用数字来表示所以在c语言中用结构体来描述
	//.操作符用于结构体，用法：结构体.成员
	//->   结构体指针->成员
	struct Book c={"c语言程序设计",99};
	//printf("书名:%s\n",c.name);
	//printf("价格:%d\n",c.price);
	struct Book* pb=&c;
	//printf("书名：%s\n",(*pb).name);
	//printf("价格：%d\n",(*pb).price);
	printf("书名：%s\n",pb->name);
	printf("价格：%d\n",pb->price);
	return 0;
}