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
//	char tmp = *str;//��tmp���� �ַ����ĵ�һ���ַ�
//	int len = strlen(str);//��ǰ�ַ����ĳ��� ps:ÿ�εݹ飬���ȶ���仯
//	*str = *(str + len - 1);//��'\0'��ǰһ��Ԫ�ظ�����һ��
//	*(str + len - 1) = '\0';//��'\0'��ǰһ��Ԫ���ȸ���'\0'
//	if (strlen(str) > 1)//���ַ������ȴ���1���ݹ�  ps:ÿ���滻һֱ���м�ƽ�����û���ַ���ֻ��һ���ַ���ʱ�򶼲��ؼ���
//		reverse(str + 1);//���еݹ飬�׵�ַָ�����
//	*(str + len - 1) = tmp;//ȫ���ݹ���ɺ󣬽�'\0'��ԭ��ԭ�����м�Ԫ��	
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
//	printf("�������");
//	float k = 0.1;
//	int m = 0;
//	do
//	{
//		m = x % 10;
//		k = k * 10;
//		printf("%d��%fλ",m,k);
//		x = x / 10;
//		if (x < 9)
//		{
//			k = k * 10;
//			printf("%d��%fλ", m, k);
//			break;
//		}
//	} while (1);
//	printf("\n \n");
//}
//void  elect2(int x)
//{
//	printf("˳�����");
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
//	else if (x == 1)  //����
//	{
//		return 1;
//	}
//	else
//		return fib(x - 2) + fib(x - 1); //ѭ���� 
//}




