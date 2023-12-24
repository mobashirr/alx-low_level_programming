#include "head.h"

void game_started(void)
{
start:
	int i = 1;
	int again = 0,win;
	draw = 0;
	char board[3][3] = { 
    	{'1', '2', '3'}, 
    	{'4', '5', '6'}, 
    	{'7', '8', '9'}
	};

	printf("the game will start soon ....\n");
	sleep(3);

	while(1)
	{
		if(i % 2 != 0)
		{
player1:
			turn = 'x';
			print_board(board);
			printf("\n-> round(%d) \nplayer (%c) turn: ",draw,turn);
			get_input(board);
		}
		else
		{
player2:
			turn = 'o';
			print_board(board);
			printf("\n-> round(%d) \nplayer (%c) turn: ",draw,turn);
			get_input(board);
		}
		if (check_winning(board) != 0)
			break;
		++i;
	}

	print_board(board);
	win = check_winning(board);
	if(win == 1)
		printf("\n\ncongratulation player1 (x) you won \n");
	else if (win == 2)
		printf("\n\ncongratulation player2 (o) you won \n");
	else if (win == 3)
		printf("\n\nlooks like draw \n");
	sleep(2);
	printf("\n\nto play again press 1: ");
	scanf(" %d", &again);
	if(again == 1)
		goto start;
}
char get_input(char board[3][3])
{
	char num = '0';

input:
	if ((bot == 0) || (bot == 1 && turn == 'x'))
	{
		scanf(" %c",&num);
		if (check_vaild(num,board) != 0)
		{
			printf("\nthis square already played or not valid try again!!\n");
			print_board(board);
			printf("\n-> round(%d) \nplayer (%c) turn: ",draw,turn);
			goto input;
		}
		return(num);
	}
	else
	{
		printf("computer thinking .... ");
		sleep(1);
generate:
		
		srand(time(NULL));
		int randomNumber = rand();
		int min = 1;
    		int max = 9;
   		int random;
		random = min + randomNumber % (max - min + 1);

		if (check_vaild(random + '0',board) != 0)
			goto generate;
		printf("(%d)\n",random);
		return(random + '0');
	}
	return('#');
}