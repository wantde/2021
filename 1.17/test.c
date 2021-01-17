#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char murder;
	for (murder = 'a'; murder <= 'd'; murder++)
	{
		if ((murder != 'a') + (murder == 'c') + (murder != 'd') + (murder == 'd') == 3)
		{
			printf("%c", murder);
		}
		return 0;

	}
}