 #define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
    int a = 0x11223344;  // a����һ���ڴ�ռ� ͬʱ��ø��ڴ�ռ�ı�� 
                        //�ڴ�ռ����ڴ��a����ֵ0x11223344
    int* p = &a;        // ���a����ֵ���ڴ�ռ��Ŵ���ڱ���p
    return 0;
}

 /*main()

{

    int a;  char c = 10;

    float f = 100.0;    double x;

    a = f /= c *= (x = 6.5);

    printf("%d  %d  %3.1f  %3.1f\n", a, c, f, x);

}*/
//int main()
//{
//	/*printf("hellow word\n");
//	double a = 1.2;
//	double* p = &a;*/
//	long long int i = 0x1111111111111111;
//	double *m = (double*)&i;
//	*(m ) = 9;
//	return 0;
//}