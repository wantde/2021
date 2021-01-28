#define _CRT_SECURE_NO_WARNINGS


#include"game.h"

 void init(char board[ROWS][COLS], int rows, int cols,char t)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = t;
		}
	}
}
 void loadboard(char board[ROWS][COLS], int row, int col)
 {
	 int i = 0;
	 int j = 0;
	 for (i = 0; i <row+1; i++)
	 {
		 printf("%d ",i);
	  }
	 printf("\n");
	 for (i = 1; i <= row; i++)
	 {
		 printf("%d ", i);
		 for (j =1 ; j <= col; j++)
		 {
			 printf("%c ", board[i][j]);
		 }
		 printf("\n");
	 }
	 printf("---扫雷---\n");
 }
 void placeboard(char board[ROWS][COLS], int row, int col)
 {
	 int i = 0;
	
		 while (i<15)
		 {
			 int x = rand() % (row);
			 int y = rand() % (col);
			 if (board[x][y] == '0'&&x>0&&y>0)
			 {
				 
				 board[x][y] = '1';
				 i++;
			 }
		 }
	 
 }
 void checkboard(char mine[ROWS][COLS], char show[ROWS][COLS], int rows, int cols, int row, int col)
 {
	 int x = 0;
	 int y = 0;
	 int  sum = 0;
	 char sums = 0;
	 scanf("%d%d", &x, &y);
	 do
	 {
		 
		 if (0 < x && x <= 9 && 0 < y && y <= 9)
		 {
			 if (show[x][y] == '*')
			 {
				 sum = mine[x - 1][y] + mine[x - 1][y - 1] + mine[x - 1][y + 1] + mine[x + 1][y] + mine[x + 1][y - 1] + mine[x + 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] - 8 * '0';

				 show[x][y] = sum + '0';
			 }
			 else if (mine[x][y] = '1')
			 {
				 printf("你被炸死了\n");
				 break;
			 }
			 else
				 printf("棋子已经被占用了\n");
		 }
		 else
		 {
			 printf("输入错误\n");
		 }

	 } while (1);
	 
 }

 