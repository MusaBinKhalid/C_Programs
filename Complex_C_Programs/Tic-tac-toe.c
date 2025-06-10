#include <stdio.h>

char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

void displayboard(void)
{
    printf("\n");
    printf(" %c | %c | %c\n", board[0], board[1], board[2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[3], board[4], board[5]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[6], board[7], board[8]);
    printf("\n");
}

int checkwin(void)
{
    int wins[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};

    for (int i = 0; i < 8; i++)
    {
        int a = wins[i][0];
        int b = wins[i][1];
        int c = wins[i][2];

        if (board[a] == board[b] && board[b] == board[c])
        {
            return 1;
        }
    }
    return 0;
}

int isdraw(void)
{
    for (int i = 0; i < 9; i++)
    {
        if (board[i] != 'X' && board[i] != 'O')
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{

    int player = 1;
    int move;
    char mark;

    while (1)
    {
        displayboard();

        if (player == 1)
        {
            mark = 'X';
        }
        else
        {
            mark = 'O';
        }

        printf("Player %d [%c], enter your move (1-9): ", player, mark);
        scanf("%d", &move);

        if (move < 1 || move > 9 || board[move - 1] == 'X' || board[move - 1] == 'O')
        {
            printf("Invalid move! Try again.\n");
            continue;
        }

        board[move - 1] = mark;

        if (checkwin())
        {
            displayboard();
            printf("Player %d [%c] wins!\n", player, mark);
            break;
        }

        if (isdraw())
        {
            displayboard();
            printf("It's a draw!\n");
            break;
        }

        if (player == 1)
        {
            player = 2;
        }
        else
        {
            player = 1;
        }
    }

    return 0;
}