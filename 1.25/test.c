#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int power(int i, int k)
{
	if (k != 0)
	{
		return i* power(i, k - 1);
	}
	else {
		return 1;
	}
		
}
int main()
{
	int i = 0;
	int k = 0;
	printf("请输入i的k次方");
	scanf("%d%d", &i, &k);
	int sum = power(i, k);
	printf("%d", sum);
	return 0;

}



//int DigitSum(int x)
//{
//	static int k = 0;
//	if (x > 9)
//	{
//		DigitSum(x / 10);
//	}
//	x = x % 10;
//	k = k + x;
//	return k;
//	
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int m = DigitSum(i);
//	printf("%d", m);
//	return 0;
//}
//
//
//
//
////int strlen2(char arr[])
////{
//	if (*arr != '\0')
//	{
//		return 1 + strlen(arr + 1);
//	}
//	
//		return 0;
//}
//
//int main()
//{
//
//	char arr[] = { "abcdefwqeqwe" };
//	int m = strlen2(arr);
//	printf("%d", m);
//	return 0;
//}
//








//int strlen1(char arr[])
//{
//	int i = 0;
//	
//	do
//	{
//		if (arr[i] != '\0')
//		{
//			
//			i++;
//		}
//		else
//		{
//			break;
//		}
//	} while (1);
//	return i;
//}
//
//int main()
//{
//	char arr[] = { "abcdef" };
//	
//	int m = strlen1(arr);
//	printf("%d", m);
//	return 0;
//}