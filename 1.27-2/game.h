#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2



#include<stdio.h>
#include<stdlib.h>
#include<time.h>



void init(char board[ROWS][COLS], int rows, int cols,char t);
void loadboard(char board[ROWS][COLS], int row, int col);
void placeboard(char board[ROWS][COLS], int row, int col);
void checkboard(char mine[ROWS][COLS],char show[ROWS][COLS],  int rows, int cols, int row,int col);