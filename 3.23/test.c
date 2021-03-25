 #define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>


int main()
{
	int m = 9;
	int arr[4] = { 11,15,2,7 };

	for (int i = 0; i < 4; i++)
	{
		int j = 3;
		for (j ; j > 3 - i; j--)
		{
			if (arr[i] + arr[j] == m)
			{
				printf("[%d,%d]",i, j);

			}
		}
	}
	
	return 0;
}