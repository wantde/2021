 #define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*p)[10] = &arr;
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *((*p) + i));
		printf("%d ", p[0][i]);
		printf("%d ", (*p)[i]);
	}
	return 0;
}