#include<stdio.h>
max3(int i, int j, int k)
{
	if (i < j)
	{
		i = j;
	}
	if (i > k)
	{
		return i;
	}
	if (k > i)
	{
		return k;
	}
}
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int a = 0;
	scanf_s("%d%d%d", &i,&j,&k);


                               	a = max3(i + j, j, k);int c= (max3(i, j + k, k) + max3(i, j, j + k));
	double m = a/c;
	printf("%f", m);








	/*int i = 0;
	for (i = 0; i < 5; i++)
	{
		int a = 0;
		for (a = 0; a < 5- i; a++)
		{
			printf(" ");
		}
		
		int b = 0;
		for (b = 0; b <= i; b++)
		{
			printf("1 ");
	    }
		printf("\n"); 
	}*/
	return 0;
}
	