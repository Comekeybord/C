#include<stdio.h>
int main()
{
    //分支和循环2
    //for循环
    //代码：用for循环打印1到100
/*     short i; */
/*     for (i = 1; i < 101; i++)
    {
        if (i==5)
        {
            continue;//跳出循环
        }
        printf("%d\n", i);
    } */
    short i;
/*     for ( i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    } */
    //do while循环,用的最少
    i = 1;
    do
    {
        printf("i=%d\n", i);
        i++;
    } while (i<=10);
    return 0;
}