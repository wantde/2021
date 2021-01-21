#define _CRT_SECURE_NO_WARNINGS
 



















//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//binary_search(int arr[1],int k,int i)
//{
//	int right = i-1;
//	int left = 0;
//	int mid = 0;
//while (left <= right)
//{
//	  mid = left+(right -left) / 2;
//	if (arr[mid] > k)
//	{
//		right = mid - 1;
//	}
//	else if (arr[mid] < k)
//	{
//		left = mid + 1;
//	}
//	else if (arr[mid] == k)
//	{
//		return k;
//		break;
//	}
//}
//if (left > right)
//{
//	return -1;
//}

//int main()
//{
//	//有序的
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//二分查找的
//	//找到了，返回下标
//	//找不到，返回 -1
//	int ret = binary_search(arr, k, size );
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}


//int main()
//{
//	int i, j, k;
//	k = 100;
//	int arr[101] = { 0 };
//	for (i = 0; i < 101; i++)
//	{
//		arr[i] = k++;//通过这个给数组每个元素附上100-200
//		for (j = 2; j < arr[i]; j++)
//		{
//			if (arr[i] % j == 0)//判断arr[i]这个元素是否是合数
//			{
//				arr[i] = 0;
//				break;
//			}
//		}
//	}
//	int m = 0;
//	for (m = 0; m < 101; m++)
//	{
//		if (arr[m] != 0)//排除掉被置零的元素
//		{
//			return 1;
//		}
//	}
//	return 0;
//}







//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
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
//		n = i / 10;
//		n = i % 10;
//		if (n == 9)
//		{
//			j++;
//		}
//	}
//	printf("%d", j);
//	return 0;
//}
//main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i < 201; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//	}
//}