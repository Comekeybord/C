#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
struct Stu//������һ������
{
	//��Ա����
	char name[20];
	int age;
	char id[20];
};
int main()
{
	struct Stu s1 = { "����",16,"032140915" };
	printf("����:%s\n", s1.name);//�ṹ�����.��Ա��
	printf("����:%d\n", s1.age);
	printf("ѧ��:%s\n", s1.id);
	struct Stu* pb = &s1;
	printf("����:%s\n", (*pb).name);
	printf("����:%s\n", pb->name);//�ṹ��ָ��->��Ա��
	return 0;
}