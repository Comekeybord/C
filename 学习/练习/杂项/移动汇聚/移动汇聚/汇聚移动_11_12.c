#include<stdio.h>
#include<Windows.h>
int main()
{
	char arr1[] = { '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'};
	char arr2[] = { 'w','e','l','c','o','m','e',' ','t','o',' ','p','e','o','p','e','l','e' };
	int sz = sizeof(arr2);
	int sz1 = sizeof(arr1);
	int i = 0;
	int t = 17;
	//printf("%d", sz);
	for ( i = 0; i < 10; i++,t--)
	{
		
		printf("%s\n", arr1);
		arr1[i] = arr2[i];
		arr1[t] = arr2[t];
		Sleep(200);
	}
	return 0;
}