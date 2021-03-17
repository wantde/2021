 #define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int _Int(const void* p, const void* r)
{
	return (*(int*)p - *(int*)r);
}
int _Char(const void* p, const void* r)
{
	return (*(char*)p -*(char*)r);
}
int main()
{
	int arr[] = { 1,3,4,5,32,1,2,22,345,987 };
	char arr2[] = "afedpo";
	qsort(arr2, (sizeof(arr2) / sizeof(arr2[0])), 
		sizeof(arr2[0]),
		&_Char);

	for (int i = 0; i < 6; i++)
	{
		printf("%c", arr2[i]);
	}
	return 0;
}







//void func(int xx[], int num)
//{
//	int n1, n2, pos, i, j;
//	pos = xx[9];
//	if (num > pos)
//		/**********found**********/
//		xx[10] = num;
//	else {
//		for (i = 0; i < 10; i++)
//		{
//			if (xx[i] > num) {
//				n1 = xx[i];
//				xx[i] = num;
//				for (j = i + 1; j < 11; j++) {
//					n2 = xx[j];
//					xx[j] = n1;
//					/**********found**********/
//					n1 = n2;
//				}
//				/**********found**********/
//
//			}
//		}
//	}
//}
//
//int main()
//{
//	int xx[11] = { 2,5,7,10,17,51,63,73,85,99 };
//	int i, num;
//	printf("original array is:\n");
//	for (i = 0; i < 10; i++) printf("%5d", xx[i]);
//	printf("\n");
//	printf("insert a new number:");
//	scanf("%d", &num);
//	func(xx, num);
//	for (i = 0; i < 11; i++) printf("%5d", xx[i]);
//	printf("\n");
//	return 0;
//}
//
//int main()
//{
//
//	int arr[] = { 1,22,67,89,45,67,34,56,78,2 };
//	int i = 0;
//	
//	for (i = 0; i < 10 - 1; i++)
//	{
//		for (int j = 0; j < 10 - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//
//			}
//		}
//	}
//	for (i = 0; i < 10 ;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}




