#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
struct Stu//创建了一个类型
{
	//成员变量
	char name[20];
	int age;
	char id[20];
};
int main()
{
	struct Stu s1 = { "李四",16,"032140915" };
	printf("姓名:%s\n", s1.name);//结构体变量.成员名
	printf("年龄:%d\n", s1.age);
	printf("学号:%s\n", s1.id);
	struct Stu* pb = &s1;
	printf("姓名:%s\n", (*pb).name);
	printf("姓名:%s\n", pb->name);//结构体指针->成员名
	return 0;
}