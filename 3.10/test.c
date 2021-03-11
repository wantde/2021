 #define _CRT_SECURE_NO_WARNINGS

#include"book.h"
meau()
{
	printf("***********************************\n");
	printf("***********1.Add     2.Del*********\n");
	printf("***********3.Serch   4.Amend*******\n");
	printf("***********5.Show    0.Excit*******\n");
	printf("***********************************\n");
}

void test()
{
	struct BooKs book;
	int input = 0;
	InitBook(&book);
	do
	{
		meau();
		scanf("%d", &input);
		switch (input)
		{
		case add:
			Add(&book);
			break;
		case del:
			Del(&book);
		case serch:
			//Serch();
			break;
		case amend:
			//Amend();
			break;
		case show:
			Show(&book);
			break;
		case excit:
			printf("succeed!");
			break;
		default:
			printf("worring!");
			break;


		}

	} while (input);
}


int main()
{
	test();
	return 0;
}




//double fun(int  n)
//{
//	int i=0;
//	double sum = 0.0;
//	double x = 1.0;
//	for (i = 1; i < n + 1; i++) {
//		x *= 1.0 / i;
//		sum += x;
//	}
//	return sum;
//}
//
//int main()
//{
//	int k = 50;
//	double sum = 0.0;
//
//	 sum=  fun(50);
//	printf("%f", sum);
//	return 0;
//}

//void fun(int  a, int  b, long* c)
//{
//
//	int i = a % 10;
//	a = a / 10;
//	int j = a % 10;
//	int m = b % 10;
//	b = b / 10;
//	int n = b % 10;
//	*c = j * 1000 + n * 100 + i * 10 + m;
//
//}
//void main()
//{
//	int  a, b; long  c; // void NONO();
//	printf("Input a, b:");
//	scanf("%d%d", &a, &b);
//	fun(a, b, &c);
//	printf("The result is: %ld\n", c);
//	//NONO();
//}


//int main()
//{
//	int a=56;
//	a=a%100;
//	printf("%d", a);
//	return 0;
//}