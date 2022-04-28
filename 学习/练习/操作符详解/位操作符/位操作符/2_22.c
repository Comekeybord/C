#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	//按位与 & 两个0得0，两个1得1，一个1一个0得0，相当于做乘法
	//按位或 | 相当于做加法
	//按位异或 ^ 相同为0不同为1
	//操作数都必须是整数
	int a = 5;
	int b = 3;
	int c = a&b;
	printf("%d\n", c);
	c = a | b;
	printf("%d\n", c);
	c = a^b;
	printf("%d\n", c);
	//不使用临时变量交换a和b
	//a = a + b;
	//b = a - b;
	//a = a - b;//这种算法有一个缺点，a+b时可能会溢出
	//异或的方法
	a = a^b;//异或的结果相当于一个密码，用这个密码异或b就等于原来的a，用这个密码异或原来的a就等于原来的b
	b = a^b;//这种算法缺陷是可读性不高并且运算效率比创建中间变量要低
	a = a^b;
	printf("a:%d\nb:%d\n", a, b);
	return 0;
}