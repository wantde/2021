#include<stdio.h>
#include<string.h>    //头文件中含下方用到的memset函数
int main()
{
	int a[20][20], sum[20];
	int i, j, m, temp;
	memset(sum, 0, sizeof(sum));    //这是我在别的书学到的将数组清零的办法。
	scanf("%d", &m);        //输入方阵大小
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
			scanf("%d", &a[i][j]);	//注意是a[i][j] 有时候矩阵我就犯傻写成a[m][n]之类了
	}
	for (i = 0; i < m; i++)   //这个for循环是求出各行之和并依次存入sum数组中
	{
		for (j = 0; j < m; j++)
			sum[i] += a[i][j];
	}
	for (i = 0; i < m; i++)   //这个for循环是求出各列之和
	{
		for (j = 0; j < m; j++)
			sum[i + m] += a[j][i];   //注意是sum[i+m]，因为上面求行的和有m行。
	}
	for (i = 0; i < m; i++)           //求正对角线
		sum[2 * m] += a[i][i];
	for (i = 0; i < m; i++)            //求辅对角线
		sum[2 * m + 1] += a[i][m - 1 - i];   //m-1-i 是找规律所得
	for (i = 0; i < 2 * m + 1; i++)        //冒泡排序法 从大到小排列
	{
		for (j = 0; j < 2 * m + 1 - i; j++)
		{
			if (sum[j] < sum[j + 1])
			{
				temp = sum[j];
				sum[j] = sum[j + 1];
				sum[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 2 * m + 2; i++)       		 //打印所得
		printf("%d ", sum[i]);
	printf("\n");
	return 0;
}
