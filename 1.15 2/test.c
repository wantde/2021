  #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int arr[10] = { 0 };
	int i, j, k;//ʮ������������
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int m, n;
	for (m = 0; m < 10; m++)
	{//ð������ ������һ������
		for (n = 0; n < 10 - m - 1; n++)
		{
			if (arr[n] > arr[n + 1])
			{
				k=arr[n];
				arr[n ] = arr[n+1];
				arr[n + 1] = k; 

			}
		}
	}
	printf("%d", arr[9]);
	return 0;
}





//int main()
//{
//	int arr[101] = { 0 };
//	int i, j, k;
//	k = 1900;
//	for (i =0; i < 101; i++)
//	{
//		arr[i] = k++;
//		//��һ������
//		if (arr[i] % 4 == 0 && arr[i] % 100 != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//		if (arr[i] % 400 == 0 && arr[i] % 100 == 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}








//int main()
//{
//	int i, j, k, m;
//	float n,p,q;
//	printf("�뽫���̻��ɱ�׼��ʽAX^2+BX+C=0");
//	printf("����������A,B,C");
//	scanf("%d %d %d", &i, &j, &k);
//	m=j * j - 4 * i * k ;
//	
//	if (m < 0)
//	{
//		printf("û��ʵ����");
//	}
//	n = sqrt(m);//ƽ��������
//	p = (n - j) / (2 * i);
//	q = (-n - j) / (2 * i);
//	printf("%.2f %.2f",p,q);
//
//}





//int main()
//{
//	int i, j, k;
//	k = 100;
//	int arr[101] = { 0 };
//	for (i = 0; i < 101; i++)
//	{
//		arr[i] = k++;//ͨ�����������ÿ��Ԫ�ظ���100-200
//		for (j = 2; j < arr[i]; j++)
//		{
//			if (arr[i] % j == 0)//�ж�arr[i]���Ԫ���Ƿ��Ǻ���
//			{
//				arr[i] = 0;//����ֱ������
//				break;
//			}
//	    }
//	}
//	int m = 0;
//	for (m = 0; m < 101; m++)
//	{
//		if (arr[m] != 0)//�ų����������Ԫ��
//		{
//			printf("%d  ", arr[m]);
//		}
//	}
//	return 0;
// }





//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	//�ж� ����5��3�������Ƿ�ͬʱΪ0
//	if (i%5==0&&i%3==0)
//	{
//		printf("yes");
//	}
//	else
//		printf("no");
//	return 0;
//}



//int main()
//{
//	int i, j; 
//		j = 0;
//		//for ѭ������ 1-100���������� 
//		for (i = 0; i < 101; i++)
//		{
//			j = i + j;
//        }
//		printf("%d", j);
//		return 0;
//}


















//int main()
//{
//	int tmp = 0;
//	int i = 0;
//	int arr[3] = { 0 };
//	//����¼������Ԫ��
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int m = 0;
//	int n = 0;
//	int temp;
//	//ͨ�������㷨 ��Ԫ�ذ���С�����˳���ź�
//	for (m = 0; m < 3; m++)
//	{
//		for (n = 0; n < 3 - m - 1;n++)
//		{
//			if (arr[n] > arr[n + 1])
//			{
//				temp = arr[n];
//				arr[n] = arr[n + 1];
//				arr[n + 1] = temp;
//			}
//		}
//	}
//	//�������
//	i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}








//int main()
//{
// 	int i, j, k = 0;
//	int arr[10] = { 0 };
//	//ͨ��forѭ��jiang10����¼��������
//	for (i = 0; i < 10; i++)
//	{
//		 scanf("%d", &arr[i]);
//	}
//	
//
//	k = arr[0];
//	i = 0;
//	//���轫��һ������Ϊ���� Ȼ��������ÿ���� �Ƚ� 
// 	for (i = 0; i < 10; i++)
//	{
//		//�������ѡ�������� ��ô������������
//		if (arr[i] > k)
//		{
//			k = arr[i];
//		}
//	}
//	printf("%d",k);
//	return 0;
//}




//int main()
//{
//	int vinegar = 1;
//	int sauce = 2;
//	int empty=0;
//	//��vinegar����empty
//	empty = vinegar;
//	//��sauce����vinrgar
//	vinegar = sauce;
//	sauce=empty;
//	return 0;
//}