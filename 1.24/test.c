#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
void reverse_string(char arr[])
{
	int sz = strlen(arr);
	int tmp = *arr;
	*arr = *(arr + sz - 1);
	*(arr + sz - 1) = '\0';
	if (strlen(arr) > 1)
	{
		reverse_string(arr + 1);
	}
		
	
	*(arr + sz - 1) = tmp;
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
}

//#include<stdio.h>
//#include<string.h>
//void reverse(char* str)
//{
//	char tmp = *str;//用tmp存入 字符串的第一个字符
//	int len = strlen(str);//求当前字符串的长度 ps:每次递归，长度都会变化
//	*str = *(str + len - 1);//将'\0'的前一个元素赋给第一个
//	*(str + len - 1) = '\0';//将'\0'的前一个元素先赋成'\0'
//	if (strlen(str) > 1)//当字符串长度大于1，递归  ps:每次替换一直向中间逼近，当没有字符或只有一个字符的时候都不必继续
//		reverse(str + 1);//进行递归，首地址指针后移
//	*(str + len - 1) = tmp;//全部递归完成后，将'\0'还原成原来的中间元素	
//}
//int main()
//{
//	char str[] = "!gnosoahoah olleH";
//	reverse(str);
//	printf("%s\n", str);
//	return 0;
//}



//void  reverse_string(char arr[], int sz)
//{
//	int len = strlen(arr);
//	printf("%d", len);
//}
//
//
//int main()
//{
//	char arr[] = { "abcdef" };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", sz);
//	reverse_string(arr, sz);
//	return 0;
//}
//
//
//
//
//
//
//
//
//void  elect(int x)
//{
//	printf("逆序输出");
//	float k = 0.1;
//	int m = 0;
//	do
//	{
//		m = x % 10;
//		k = k * 10;
//		printf("%d是%f位",m,k);
//		x = x / 10;
//		if (x < 9)
//		{
//			k = k * 10;
//			printf("%d是%f位", m, k);
//			break;
//		}
//	} while (1);
//	printf("\n \n");
//}
//void  elect2(int x)
//{
//	printf("顺序输出");
//	int digit = log10(x) ;
//	
//	int i = 0;
//	int m = 0;
//	for (i = pow(10, digit); i >0; i = i / 10)
//	{
//		m = x / i;
//		printf("%d  ", m);
//		x = x % i;
//	}
//	
//}
//void elect(int x)
//{
//
//	if (x > 9)
//	{
//		elect(x / 10);
//
//	}
//	printf("%d  ", x % 10);
//
//}
//
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	elect(k);
//	elect2(k);
//	return 0;
//}
//





//int fib(int x)
//{
//	int i = 0;
//	int j = 1;
//	int k = 0;
//	int m = 0;
//	for (m = 0; m < x-1; m++)
//	{
//		k = i + j;
//		i = j;
//		j = k;
//	}
//	return k;
//}
//
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int sum = fib(k);
//	printf("%d", sum);
//	return 0;
//}
//int fib(int x)
//{
//	if (x == 0)
//	{
//		return 0;
//
//	}
//	else if (x == 1)  //出口
//	{
//		return 1;
//	}
//	else
//		return fib(x - 2) + fib(x - 1); //循环体 
//}




