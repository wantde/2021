 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int m = 0;
	float r = 0.006;
	float n = 0;
	printf("请输入增长率");
	scanf("%.3f", r);
	printf("请输入年份");
	scanf("%d", m);
	n=pow(1 + r, n);
	m = n / m;
	printf("%.3f", m);
	return 0;
}