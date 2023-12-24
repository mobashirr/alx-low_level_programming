#include "head.h"


int check_winning(char game[3][3])
{

	/*check for plyaer1(x) winning:*/
	if(game[0][0] == 'x' && game[0][1] == 'x' && game[0][2] == 'x') /*ver*/
		return(1);
	else if (game[1][0] == 'x' && game[1][1] == 'x' && game[1][2] == 'x')
		return(1);
	else if (game[2][0] == 'x' && game[2][1] == 'x' && game[2][2] == 'x')/*3*/
		return(1);
	else if (game[0][0] == 'x' && game[1][0] == 'x' && game[2][0] == 'x') /*horizon*/
		return(1);
	else if (game[0][1] == 'x' && game[1][1] == 'x' && game[2][1] == 'x')
		return(1);
	else if (game[0][2] == 'x' && game[1][2] == 'x' && game[2][2] == 'x')/*3*/
		return(1);
	else if (game[0][0] == 'x' && game[1][1] == 'x' && game[2][2] == 'x') /*dia*/
		return(1);
	else if (game[0][2] == 'x' && game[1][1] == 'x' && game[2][0] == 'x')/*2*/
		return(1);

	/*check for plyaer2(o) winning:*/
	if(game[0][0] == 'o' && game[0][1] == 'o' && game[0][2] == 'o') 	/*ver*/
		return(2);
	else if (game[1][0] == 'o' && game[1][1] == 'o' && game[1][2] == 'o')
		return(2);
	else if (game[2][0] == 'o' && game[2][1] == 'o' && game[2][2] == 'o')/*3*/
		return(2);
	else if (game[0][0] == 'o' && game[1][0] == 'o' && game[2][0] == 'o') /*horizon*/
		return(2);
	else if (game[0][1] == 'o' && game[1][1] == 'o' && game[2][1] == 'o')
		return(2);
	else if (game[0][2] == 'o' && game[1][2] == 'o' && game[2][2] == 'o')/*3*/
		return(2);
	else if (game[0][0] == 'o' && game[1][1] == 'o' && game[2][2] == 'o')
		return(2);
	else if (game[0][2] == 'o' && game[1][1] == 'o' && game[2][0] == 'o')
		return(2);
	
	/*no one won*/
	if (draw == 9)
		return(3);

	return(0);
}

int update_board(char input, char board[3][3], char ch)
{
	int i,j;

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(board[i][j] == input && board[i][j] != 'x' && board[i][j] != 'o')
			{
				board[i][j] = ch;
				draw += 1;
				return(0);
			}
		}
	}

	return(1);
}

int check_vaild(char num, char board[3][3])
{
    int i;

    for (i = 1; i < 10; i++)
    {
        if (i == (num - '0'))
	{
		if(update_board(num, board, turn) == 0)
        		return 0;
	}
    }

    return 1;
}