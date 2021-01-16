#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i = 0;
	while (i < 10)
	{
		i++;
		if (i == 5)
		{
			continue;
		}
		printf("%d", i);
		
	}




	/*int k = 1;
	int i = 0;
	int arr[100] = { 0 };
	for (i = 0; i < 100; i++)
	{
		arr[i] = k++;
		if (arr[i] % 2 != 0)
		{
			printf("%d  ", arr[i]);
		}
	}
	return 0;*/
}