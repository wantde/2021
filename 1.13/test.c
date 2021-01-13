#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int Max(int* pi, int* pj)
{
	if (*pj > *pi)
	{
	 *pi=*pj;
	}
	
}
int main()
{
	int i, j;
 	scanf("%d%d", &i, &j);
	
	Max(&i, &j);
   	printf("%d", i);
	printf("\q \b \060");
	return 0;
 }








//int main()
//{
//    int x = 0;
//    while (scanf("%d", &x) != EOF)
//    {
//        if (x >= 140)
//            printf("Genius\n");
//    }
//    return 0;
//}


//int main()
//{
//    printf("%d\n", strlen("c:\test\121"));
//        return 0;
//}