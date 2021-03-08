 #define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include <stdio.h>
#include <stdio.h>

int main(void)

{

	int m, k = 0, s = 0;

	for (m = 1; m <= 4; m++) {

		switch (m % 4) {

		case 0:

		case 1: s += m; break;

		case 2:

		case 3: s -= m; break;

		}

		k += s;

	}

	printf("%d\n", k);

	return 0;

}




//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    char* str3 = "hello bit.";
//    char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}





//int main()
//{
//	float a = 3.14;
//	float* p = &a;
//	printf("%f", *p);
//	return 0;
//}




//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int i = 9;
//	int k = 10;
//	int (*pf)(int, int) = &Add;
//	int ret=(*pf)(i, k);
//	printf("%d", ret);
//		return 0;
//}