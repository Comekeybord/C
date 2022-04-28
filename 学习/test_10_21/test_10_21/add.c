#define _CRT_SECURE_NO_WARNINGS 1
//static修饰全局变量,改变作用域
//变量有两个属性，一个是生命周期，一个是作用域
//当static修饰局部变量时改变其生命周期
//static改变函数的链接属性，由外部链接属性变为内部链接属性
int g=10;
int Add(int a,int b)
{
	int c =a+b;
	return c;
}
	