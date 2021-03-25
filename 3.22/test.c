#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int Add(int i)
{
	if (i == 100)
	{
		return 0;
	}
	i++;
	return i + Add(i);
}

int main()
{
	int i = 0;
	int ret=Add(i);
	printf("%d", ret);
	return 0;
}