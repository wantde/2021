#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int size = 0;
	size = sizeof(arr) / sizeof(arr[0]);
	int right = size - 1;
	int left = 0;
	int mid = 0;
	int k = 0;
	scanf("%d", &k);
	while (left <= right)
	{
		mid = (right + left) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if(arr[mid]==k)
		{
			printf("第%d个元素的%d", mid, k);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到");
	}
}






//int main()
//{
//	int i = 0;
//	int k = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		j = 1;
//		for (j = 1; j < i + 1; j++)
//		{
//			printf("%d*%d=%d  ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}






//int main()
//{
//	float m = 0;
//	
//	float i = 0;
//	float j = 0;
//	int k = 0;
//	for (i = 1; i < 51; i++)
//	{
//		m = m + (1 / i);
//		i++;
//	}
//	for (j = 2; j < 52; j++)
//	{
//		m = m - (1 / j);
//		j++;
//	}
//	printf("%.4f", m);
//	return 0;
//}




//int main()
//{
//	
//	int i = 0;
//	int m = 0;
//	int j = 0;
//	int k = 0;
//	int n = 0;
//	for (i = 0; i < 100; i++)
//	{
//		m = i % 10;
//		if (m == 9)
//		{
//			j++;
//		}
//		n = i % 100;
//		if (n == 9)
//		{
//			j++;
//		}
//	}
//	printf("%d", j);
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	printf("请输入被求数\n");
//	scanf("%d %d", &i, &j);
//	for (; i % 2 == 0 && j % 2 == 0;)
//	{
//		i = i / 2;
//		j = j / 2;
//		m++;
//	}
//	if (j > i)
//	{
//		a = i;
//		i = j;
//		j = a;
//	}
//	a = 0;
//	int b = 0;
//	for (; ; )
//	{
//		b = i - j;
//
//
//		if (j == b)
//		{
//			break;
//		}
//		if (b > j)
//		{
//			a = j;
//			j = b;
//			b = a;
//		}
//		i = j;
//		j = b;
//
//	}
//	if (m > 0)
//	{
//		n = 2 * m * b;
//		printf("最大公约数是%d", n);
//	}
//	else
//		printf("最大公约数是%d", j);
//}




//int main()
//{
//	int arr[40] = { 0 };
//	int i = 0;
//	int k = 3;
//	for (i = 1; i < 34; i++)
//	{
//		arr[i] = arr[i] + k * i;
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}