 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int m = 0;
	float r = 0.006;
	float n = 0;
	printf("������������");
	scanf("%.3f", r);
	printf("���������");
	scanf("%d", m);
	n=pow(1 + r, n);
	m = n / m;
	printf("%.3f", m);
	return 0;
}