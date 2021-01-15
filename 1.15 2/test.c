  #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int arr[10] = { 0 };
	int i, j, k;//十个数传入数组
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int m, n;
	for (m = 0; m < 10; m++)
	{//冒泡排序 输出最后一个即可
		for (n = 0; n < 10 - m - 1; n++)
		{
			if (arr[n] > arr[n + 1])
			{
				k=arr[n];
				arr[n ] = arr[n+1];
				arr[n + 1] = k; 

			}
		}
	}
	printf("%d", arr[9]);
	return 0;
}





//int main()
//{
//	int arr[101] = { 0 };
//	int i, j, k;
//	k = 1900;
//	for (i =0; i < 101; i++)
//	{
//		arr[i] = k++;
//		//第一个条件
//		if (arr[i] % 4 == 0 && arr[i] % 100 != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//		if (arr[i] % 400 == 0 && arr[i] % 100 == 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}








//int main()
//{
//	int i, j, k, m;
//	float n,p,q;
//	printf("请将方程化成标准形式AX^2+BX+C=0");
//	printf("请依次输入A,B,C");
//	scanf("%d %d %d", &i, &j, &k);
//	m=j * j - 4 * i * k ;
//	
//	if (m < 0)
//	{
//		printf("没有实数根");
//	}
//	n = sqrt(m);//平方根函数
//	p = (n - j) / (2 * i);
//	q = (-n - j) / (2 * i);
//	printf("%.2f %.2f",p,q);
//
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
//				arr[i] = 0;//合数直接置零
//				break;
//			}
//	    }
//	}
//	int m = 0;
//	for (m = 0; m < 101; m++)
//	{
//		if (arr[m] != 0)//排除掉被置零的元素
//		{
//			printf("%d  ", arr[m]);
//		}
//	}
//	return 0;
// }





//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	//判断 除以5和3的余数是否同时为0
//	if (i%5==0&&i%3==0)
//	{
//		printf("yes");
//	}
//	else
//		printf("no");
//	return 0;
//}



//int main()
//{
//	int i, j; 
//		j = 0;
//		//for 循环产生 1-100个整数即可 
//		for (i = 0; i < 101; i++)
//		{
//			j = i + j;
//        }
//		printf("%d", j);
//		return 0;
//}


















//int main()
//{
//	int tmp = 0;
//	int i = 0;
//	int arr[3] = { 0 };
//	//依次录入数组元素
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int m = 0;
//	int n = 0;
//	int temp;
//	//通过排序算法 将元素按从小到大的顺序排好
//	for (m = 0; m < 3; m++)
//	{
//		for (n = 0; n < 3 - m - 1;n++)
//		{
//			if (arr[n] > arr[n + 1])
//			{
//				temp = arr[n];
//				arr[n] = arr[n + 1];
//				arr[n + 1] = temp;
//			}
//		}
//	}
//	//依次输出
//	i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}








//int main()
//{
// 	int i, j, k = 0;
//	int arr[10] = { 0 };
//	//通过for循环jiang10个数录入数组中
//	for (i = 0; i < 10; i++)
//	{
//		 scanf("%d", &arr[i]);
//	}
//	
//
//	k = arr[0];
//	i = 0;
//	//假设将第一个数设为最大的 然后与数组每个数 比较 
// 	for (i = 0; i < 10; i++)
//	{
//		//如果他比选定的数大 那么将大数赋给他
//		if (arr[i] > k)
//		{
//			k = arr[i];
//		}
//	}
//	printf("%d",k);
//	return 0;
//}




//int main()
//{
//	int vinegar = 1;
//	int sauce = 2;
//	int empty=0;
//	//将vinegar倒入empty
//	empty = vinegar;
//	//把sauce倒入vinrgar
//	vinegar = sauce;
//	sauce=empty;
//	return 0;
//}