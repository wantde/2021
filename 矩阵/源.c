#include<stdio.h>
#include<string.h>    //ͷ�ļ��к��·��õ���memset����
int main()
{
	int a[20][20], sum[20];
	int i, j, m, temp;
	memset(sum, 0, sizeof(sum));    //�������ڱ����ѧ���Ľ���������İ취��
	scanf("%d", &m);        //���뷽���С
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
			scanf("%d", &a[i][j]);	//ע����a[i][j] ��ʱ������Ҿͷ�ɵд��a[m][n]֮����
	}
	for (i = 0; i < m; i++)   //���forѭ�����������֮�Ͳ����δ���sum������
	{
		for (j = 0; j < m; j++)
			sum[i] += a[i][j];
	}
	for (i = 0; i < m; i++)   //���forѭ�����������֮��
	{
		for (j = 0; j < m; j++)
			sum[i + m] += a[j][i];   //ע����sum[i+m]����Ϊ�������еĺ���m�С�
	}
	for (i = 0; i < m; i++)           //�����Խ���
		sum[2 * m] += a[i][i];
	for (i = 0; i < m; i++)            //�󸨶Խ���
		sum[2 * m + 1] += a[i][m - 1 - i];   //m-1-i ���ҹ�������
	for (i = 0; i < 2 * m + 1; i++)        //ð������ �Ӵ�С����
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
	for (i = 0; i < 2 * m + 2; i++)       		 //��ӡ����
		printf("%d ", sum[i]);
	printf("\n");
	return 0;
}
