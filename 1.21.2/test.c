#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand((unsigned int)time(NULL));//��������� �����  ���Ӻ���time
	int rat = rand()%100+1;
	printf("%d", rat);
	

		
	return 0;
}
//void play() //����ʵ�ֺ��� 
//{
//	int rat = rand();
//	int i = 0;
//	do {
//		
//		scanf("%d", &i);
//		printf("%d", rat);
//		if (i > rat) 
//		{
//			printf("�����ֲ´���");
//		}
//		if (i < rat)
//		{
//			printf("�����ֲ�С��");
//		}
//		if (i == rat)
//		{
//			printf("��ȷ");
//			break;
//		}
//	} while (1);
//}
//void menu() //�˵�����
//{
//	printf("1.paly\n");
//	printf("0.exit\n");
//}
//int main()
//{
//	int input = 0;
//	do 
//	{
//		srand((unsigned int)time(NULL));//��������� �����  ���Ӻ���time
//		menu();  //��������� ����
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
