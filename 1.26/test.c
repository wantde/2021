#include"game.h"

void game2()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	lnitboard(board, ROW, COL);
	displayboard(board, ROW, COL);
	while (1)
	{

		playermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		player2move(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("player1 win");
	}
	else if (ret == '#')
	{
		printf("player2 win");
	}
	else
	{
		printf("the game has drawn");
	}
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	lnitboard(board, ROW, COL);
	displayboard(board, ROW, COL);
	while (1)
	{

		playermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		cpmove(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("player1 win");
	}
	else if (ret == '#')
	{
		printf("player2 win");
	}
	else
	{
		printf("the game has drawn");
	}
}
void menu()
{
	printf("*********************** \n");
	printf("********1.单人开始游戏***** \n");
	printf("********2.双人开始游戏***** \n");
	printf("********0.退出游戏***** \n");
	printf("*********************** \n");
}

//void test()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("\n******请选择****");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			game2();
//			break;
//		case 0:
//			break;
//			printf("goodbye");
//		default:
//			printf("woring!!");
//			break;
//		}
//	} while (input);
//}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("\n******请选择****");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			game2();
			break;
		case 0:
			break;
			printf("goodbye");
		default:
			printf("woring!!");
			break;
		}
	} while (input);
	
	return 0;
}