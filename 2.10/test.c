#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdio.h>
#include<string.h>



#include<stdio.h>
#include<stdlib.h>
int pop(int m)
{
	if (m / 2 == 0)
	{
		return 0;
	}
	else 
		return m/2+pop(m / 2);
}
int main()
{
	int m = 0;
	scanf("%d", &m);
	int mum=pop(m);
	printf("%d", mum+m);
	return 0;
}










//void PrintLine(int blank_count, int start_count) {
//	int i = 0;
//	for (; i < blank_count; i++) {
//		printf(" ");  //打印空格
//	}
//	for (i = 0; i < start_count; i++) {
//		printf("*");
//	}
//	printf("\n");
//}
//void  PrintLingxing(int n) {
//	//打印上半部分
//	int i = 1;
//	for (i = 1; i < n; i++) {
//		PrintLine(n - i, 2 * i - 1);  // 打印每一行的空格和每一行的星号
//	}
//	//打印中间部分
//	PrintLine(0, 2 * n - 1);
//	//打印下半部分
//	for (i = n - 1; i > 0; i--) {
//		PrintLine(n - i, 2 * i - 1);
//	}
//}
//int main() {
//	PrintLingxing(7);    //对半的行数
//	system("pause");
//	return 0;
//}
//



//int water(int m)
//{
//	int sum = 0;
//	int sz = 0;
//	int k = 0;
//	sz=log10(m);
//	for (int i = 1; i < sz+1; i++)
//	{
//		k = m % (i * 10);
//		sum = sum + (k * k * k);
//     }
//	if (sum == m)
//	{
//		return m;
//
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0; i < 100001; i++)
//	{
//		k=water(i);//水仙花数返回本数 否则返回0
//		if (k != 0)
//		{
//			printf("水仙数%d  ", k);
//		}
//		
//			
//	}
//	return 0;
//}














//make(int m, int p)
//{
//	int i = 0;
//	long long k = 0;
//	for ( i = 0;i <= p; i++)
//	{
//		k = k + i * 10 * m;
//	}
//	return k;
//}
//int main()
//{
//	long long m,n = 0;
//	long long num = 0;
//	int i = 0;
//	long long sum = 0;
//	printf("m的n项");
//	scanf("%d %d", &m, &n);
//	for ( i = 0; i < n; i++)
//	{
//		num = make(m, i);
//		sum = sum + num;
//	}
//	printf("%lld", sum);
//	
//	return 0;
//}









//void reverse_string(char arr[])
//{
//	int sz = strlen(arr);
//	int tmp = *arr;
//	*arr = *(arr + sz - 1);
//	*(arr + sz - 1) = '\0';
//	if (strlen(arr) > 1)
//	{
//		reverse_string(arr + 1);
//	}
//
//
//	*(arr + sz - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "I am a student";
//	reverse_string(arr);
//	printf("%s\n", arr);
//}
//stu(char arr[], int sz)
//{
//	char tmp ;
//	for (int i = 0; i < sz ; i++)
//	{
//		tmp = arr[i];
//		arr[i] = arr[sz-i];
//		arr[sz - i] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = {"I am a student"};
//	int sz = strlen(arr);
//	stu(arr,sz);
//	printf("%s", arr);
//	return 0;
//}




//void print(int* arr)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d  ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	print(arr);
//	return 0;
//}
