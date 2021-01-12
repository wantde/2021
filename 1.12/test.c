#include <stdio.h>
#include <stdlib.h>
	void fun3(float*, int);
	float fun4(float*, int);
	void main()
	{
		int i, j, n;
		float* a, answer;
		for (i = 0; i < 3; i++)
			printf("<----------------------------------------------------------------------------->\n");
		printf(" 欢迎进入行列式计算bai程序,请准确输入以便我为您正确计算! \n");
		for (i = 0; i < 3; i++)
			printf("<----------------------------------------------------------------------------->\n");
		do
		{
			printf("请输入您要计算的行列式的行数或列数n(n>1):");
			scanf("%d", &n);
		} while (n < 2);
		a = (float*)malloc(n * n * sizeof(float));
		for (i = 0; i < n; i++)
		{
			printf("请输入您要计算的行列式的:\n");
			for (j = 0; j < n; j++)
			{
				printf("第%d行%d列:", i + 1, j + 1);
				scanf("%f", &a[i * n + j]);
			}
		}
		fun3(a, n);
		answer = fun4(a, n);
		printf("您要计算的行列式的值为:%.3f\n\n\n", answer);
		for (i = 0; i < 3; i++)
			printf("<----------------------------------------------------------------------------->\n");
		printf(" 欢迎进入*雒森*行列式计算程序,请准确输入以便我为您正确计算! \n");
		for (i = 0; i < 3; i++)
			printf("<----------------------------------------------------------------------------->\n");
	}
	void fun3(float a[], int n)
	{
		int i, j, d, f;
		float m = 1, w;
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < n; i++)
			{
				if (a[j * n + j] == 0)
				{
					for (d = j + 1; d < n; d++)
					{
						if (a[d * n + j] != 0)
							break;
					}
					for (f = j; f < n; f++)
						a[j * n + f] += a[d * n + f] * m;
				}
				if (i != j)
				{
					w = -(a[i * n + j] / a[j * n + j]);
					for (f = j; f < n; f++)
						a[i * n + f] += a[j * n + f] * w;
				}
			}
		}
	}
	float fun4(float a[], int n)
	{
		int i;
		float answer = 1;
		for (i = 0; i < n; i++)
			answer *= a[i * n + i];
		return answer;
	}




	return 0;
}