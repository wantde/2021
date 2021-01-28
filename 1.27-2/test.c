#define _CRT_SECURE_NO_WARNINGS

#include"game.h"
void game()
{
	printf("¿ªÊ¼ÓÎÏ·\n");
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	init(mine, ROWS, COLS,'0');
	init(show, ROWS, COLS,'*');
	placeboard(mine, ROW, COL);
	loadboard(mine, ROW, COL);
	loadboard(show, ROW, COL);
	
	
	checkboard(mine, show, ROWS, COLS,ROW,COL);
	loadboard(show, ROW, COL);
	loadboard(mine, ROW, COL);
}

void menu()
{
	printf("********************\n");
	printf("*****1.paly**********\n");
	printf("*****0.excit*********\n");
	printf("********************\n");
}

int main()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;

		default:
			printf("´íÎó");
			break;
		}
	} while (input);
	return 0;
}