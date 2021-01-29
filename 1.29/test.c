#define _CRT_SECURE_NO_WARNINGS
class Board {
public:
    bool checkWon(vector<vector<int> > board)
    {
        int i, j;
        for (i = 0; i < board.size(); i++)
        {
            for (j = 0; j < 3; j++)
                if (board[i][j] != 1)
                    break;
            if (j == board.size())
                return true;
        }
        for (j = 0; j < board.size(); j++)
        {
            for (i = 0; i < 3; i++)
                if (board[i][j] != 1)
                    break;
            if (i == board.size())
                return true;
        }
        for (i = 0; i < board.size(); i++)
        {
            if (board[i][i] != 1)
                break;
            if (i == board.size() - 1)
                return true;
        }
        for (i = 0; i < board.size(); i++)
        {
            if (board[i][board.size() - i - 1] != 1)
                break;
            if (i == board.size() - 1)
                return true;
        }
        return false;
    }
};