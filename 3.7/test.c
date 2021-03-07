 #define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


void print(int x)
{
	printf("%d", x);
}

int main()
{
	int i = 12;
	print(i);




	void (*pf)(int) = &print;
	
	
	
	
	return 0;
}













//void print(int(*parr)[5], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(parr + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4 },{2,3,4,5,6},{3,4,5,6,7} };
//	print(&arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; 
//	int(*parr)[10] = &arr;
//	int* p = &arr[0];
//		return 0;
//}