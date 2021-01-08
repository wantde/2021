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



	if (check(i, j) == 1) {//如果能放

		chess[i][j] = 1;//放皇后

		if (i == line - 1) {//如果是最后一行，记录情况

			cas++;
			/*下面是输出每种棋盘结果，供测试
			 for (xx=0;xx<8;xx++)

				 for(yy=0;yy<8;yy++){

				printf("%d",chess[xx][yy]);

				if(yy==7)

					printf("\n");

				}

			 printf("\n");

			上面是输出结果*/

		}

		else {

			queen(i + 1, 0);//不是最后一行就分析下一行

		}

	}

	chess[i][j] = 0;//如果此位置不能放，就置空（0），判断旁边的格子。

	 //如果此位置能放，走到这里就意味着上面的代码全部执行了，把皇后拿走（置零），再讨论其他情况，拿旁边位置试探。

	queen(i, j + 1);

}





int check(int i, int j) {

	int k;



	for (k = 0; k < line; k++) {

		if (chess[i][k] == 1) return 0;//0=不能放

	}

	for (k = 0; k < line; k++) {

		if (chess[k][j] == 1) return 0;

	}

	for (k = -line; k <= line; k++) {//两对角线

		if (i + k >= 0 && i + k < line && j + k >= 0 && j + k < line)//从左上到右下对角线

			if (chess[i + k][j + k] == 1) return 0;



		if (i - k >= 0 && i - k < line && j + k >= 0 && j + k < line)//从左下到右上对角线

			if (chess[i - k][j + k] == 1) return 0;

	}

	return 1;

}