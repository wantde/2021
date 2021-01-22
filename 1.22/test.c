#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
float average(float* arr[7])
{
	for (int i = 0; i < 7 - 1; i++)
	{
		for (int j = 0; j < 7 - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{        // 相邻元素两两对比
				float temp = *arr[j + 1];        // 元素交换
				*arr[j + 1] = *arr[j];
				*arr[j] = temp;
			}
		}
	}
	arr[6] = 0;
	arr[0] = 0;
	int num = 0;
	for (int k = 0; k < 7; k++)
	{
		
	}
}
int main()
{
	float arr[7] = { 0 };
	int i = 0;
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	float k = average(arr[7]);
	return 0;
}




//void print(int x)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < x+1; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			printf("%2d*%2d=%2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}
//












//void chage(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	chage(&a,&b);
//	printf("%d %d", a, b);
//	return 0;
//}
//








//int year(int x)
//{
//	if ((x % 4 != 0) || (x % 100 == 0 && x % 400 != 0))
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int j = year(i);//是闰年返回1 不是闰年 返回0
//	if (j == 1)
//	{
//		printf("%d是闰年", i);
//	}
//	else
//		printf("%d不是闰年", i);
//	return 0;
//}






//int prime(int x)
//{
//	int j = 0;
//	int k = 0;
//	for (j = 2; j < (int)sqrt((double)x); j++)
//	{
//		if (x % j == 0)
//		{
//			k++;
//		}
//	}
//	if (k == 0)
//	{
//		return x;
//	}
//	else
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 201; i++)
//	{
//		int k = prime(i);//如果 输入的i为素数则返回素数 否则返回0
//		if (k != 0) {
//			printf("%d  ", k);
//		}
//		
//	}
//	return 0;
//	
//}