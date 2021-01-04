#include<stdio.h>




#define  _CRT_SECURE_NO_WARNINGS 

menu()
{
	printf("****1.exchange one************");
	printf("****2.max************"); 
	printf("****************");
	printf("****************");
}
exchange()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	c = a;
	a = b;
	b = c;

}
MAX()
{
	int i = 0;
	int arr[9] = { 0 };
	for (i = 0; i < 9; i++)
	{
		int a = 0;
		scanf_s("%d", &a);
			arr[i] = a;
	}
	
	int b = arr[0];
	for (i = 1; i < 9; i++)
	{
		
		if (b < arr[i])
		{
			b = arr[i];
		}
	}

	printf("最大值是%d", b);
}
int main()
{
	int input = 0;
	printf("请选择");
	menu();
	scanf_s("%d", &input);
	do
	{
		switch (input)
		{
		case 1:
			exchange();
		case 2:
			MAX();
        }

	} while (input);
	return 0;
}