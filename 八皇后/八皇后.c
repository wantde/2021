#include<stdio.h>

#define line 8

void queen(int i, int j);

int check(int i, int j);

int chess[line][line];

int cas = 0;
int xx, yy;


int main() {

	queen(0, 0);

	printf("%d\n", cas);

	return 0;

}



void queen(int i, int j) {

	if (j >= line) {

		return;

	}



	if (check(i, j) == 1) {//����ܷ�

		chess[i][j] = 1;//�Żʺ�

		if (i == line - 1) {//��������һ�У���¼���

			cas++;
			/*���������ÿ�����̽����������
			 for (xx=0;xx<8;xx++)

				 for(yy=0;yy<8;yy++){

				printf("%d",chess[xx][yy]);

				if(yy==7)

					printf("\n");

				}

			 printf("\n");

			������������*/

		}

		else {

			queen(i + 1, 0);//�������һ�оͷ�����һ��

		}

	}

	chess[i][j] = 0;//�����λ�ò��ܷţ����ÿգ�0�����ж��Աߵĸ��ӡ�

	 //�����λ���ܷţ��ߵ��������ζ������Ĵ���ȫ��ִ���ˣ��ѻʺ����ߣ����㣩��������������������Ա�λ����̽��

	queen(i, j + 1);

}





int check(int i, int j) {

	int k;



	for (k = 0; k < line; k++) {

		if (chess[i][k] == 1) return 0;//0=���ܷ�

	}

	for (k = 0; k < line; k++) {

		if (chess[k][j] == 1) return 0;

	}

	for (k = -line; k <= line; k++) {//���Խ���

		if (i + k >= 0 && i + k < line && j + k >= 0 && j + k < line)//�����ϵ����¶Խ���

			if (chess[i + k][j + k] == 1) return 0;



		if (i - k >= 0 && i - k < line && j + k >= 0 && j + k < line)//�����µ����϶Խ���

			if (chess[i - k][j + k] == 1) return 0;

	}

	return 1;

}