#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>
int main() {
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    for (a = 1; a <= 5; a++)
    {
        for (b = 1; b <= 5; b++)
        {
            for (c = 1; c <= 5; c++)
            {
                for (d = 1; d <= 5; d++)
                {
                    for (e = 1; e <= 5; e++)
                        
                    {
                        if ((2 == b && 3 != a) || (2 != b && 3 == a) == 1)
                        {
                            if ((2 == b && 4 != e) || (2 != b && 4 == e) == 1)
                            {
                                if ((1 == c && 2 != d) || (1 != c && 2 == d) == 1)
                                {
                                    if ((5 == c && 3 != d) || (5 != c && 3 == d) == 1)
                                    {
                                        if ((4 == e && 1 != a) || (4 != e && 1 == a) == 1)
                                        {
                                            if (((a != b) && (a != c) && (a != d) && (a != e))
                                                && ((b != c) && (b != d) && (b != e))
                                                && ((c != d) && (c != e))
                                                && ((d != e)))
                                            {
                                                printf("a= %d, b= %d,c= %d,d= %d,e= %d\n", a, b, c, d, e);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    system("pause");
    return 0;
}











//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//			
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						//只有半句话真 那么 a||b=1 即可
//						if(((b==2&&a!=3)||(b!=2&&a==3)==1)&&((b==2&&e!=4)||(b!=2&&e==4))&& ((c == 1 && d != 2) || (c != 1 && d == 2) = 1)()
//					}
//				}
//			}
//		}
//	}
	
//	return 0;
//}



//int main()
//{
//	
//	char killer;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'C')) == 3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	
//	return 0;
//}


//int main()
//{
//	int arr[15][15] = { 0 };
//	for (int i = 0; i < 15; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			arr[i][j] = 1;
//			
//		}
//		
//	}
//	
//	for (int i = 1; i < 15; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j-1] + arr[i - 1][j];
//		}
//	}
//
//	for (int i = 0; i < 15; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			
//			printf("%d  ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}





	/*int arr[] = 0;
	int i = 0;
	int a = 0;
	scanf("%d", &a);
	const m = 0;
	int j = 0;
	for (i = 0, i < a; i++;)
	{
		for (j = 0; j < i; j++)
		{

		}
		printf("\n");
	}
	return 0;*/



//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf(" %d% d", a + b, c);
//	return 0;
//}




//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}



//int Differentiate(i)
//{
//	
//	 return *(char*)&i;
//}
//
//int main()
//{
//	int a = 0x01;
//	int m = Differentiate(a);
//	if (m == 1)
//	{
//		printf("小端");
//	}
//	else
//		printf("大端");
//	return 0;
//}