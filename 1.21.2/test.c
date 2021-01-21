#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand((unsigned int)time(NULL));//随机数设置 随机数  种子函数time
	int rat = rand()%100+1;
	printf("%d", rat);
	

		
	return 0;
}
//void play() //代码实现函数 
//{
//	int rat = rand();
//	int i = 0;
//	do {
//		
//		scanf("%d", &i);
//		printf("%d", rat);
//		if (i > rat) 
//		{
//			printf("猜数字猜大了");
//		}
//		if (i < rat)
//		{
//			printf("猜数字猜小了");
//		}
//		if (i == rat)
//		{
//			printf("正确");
//			break;
//		}
//	} while (1);
//}
//void menu() //菜单函数
//{
//	printf("1.paly\n");
//	printf("0.exit\n");
//}
//int main()
//{
//	int input = 0;
//	do 
//	{
//		srand((unsigned int)time(NULL));//随机数设置 随机数  种子函数time
//		menu();  //随机数产生 函数
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			play();
//				break;
//		case 0:
//			break;
//
//		default:
//			printf("no");
//			break;
//		}
//	} while (input);
//	
//
//	
//
//	return 0;
//}
