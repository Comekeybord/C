#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//ָ�룬�����ò�����
//	int a=10;
//	int* p=&a;
//	int* c;
//	printf("a���޸�ǰֵΪ��%d\n",a);
//	printf("a�ĵ�ַΪ��%p\n",p);
//	*p=20;
//	c=&a;
//	printf("a���޸ĺ�ֵΪ��%d\n",a);
//	printf("a�ĵ�ַΪ��%p\n",c);
//	return 0;
//}
//struct�ṹ������������ʶ��
struct Book
{
	char name[20];
	short price;
};
int main()
{
	//�ṹ��,�������ﲻ���ܵ�������������ʾ������c�������ýṹ��������
	//.���������ڽṹ�壬�÷����ṹ��.��Ա
	//->   �ṹ��ָ��->��Ա
	struct Book c={"c���Գ������",99};
	//printf("����:%s\n",c.name);
	//printf("�۸�:%d\n",c.price);
	struct Book* pb=&c;
	//printf("������%s\n",(*pb).name);
	//printf("�۸�%d\n",(*pb).price);
	printf("������%s\n",pb->name);
	printf("�۸�%d\n",pb->price);
	return 0;
}