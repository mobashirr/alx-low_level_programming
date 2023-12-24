#include "head.h"
void print_start(void)
{
	int i;
	char *sep = "-----------------------------------";

	write(1,sep,33);

	printf("\nwelcome to my X_O simple game ...\n\n");
	printf("please choose one of this options: \n\n");
	printf("1.start the game with instructions\n");
	printf("2.start the game without instructions\n");
	printf("3.get instructions only\n");
	printf("4. play with computer\n");
	printf("5. exit the game\n");

	printf("\n---> devloped by mohamed bashir <---\n");
}

#include <stdio.h>
#include <unistd.h>

void print_instructions()
{
char board[3][3] = { 
    {'1', '2', '3'}, 
    {'4', '5', '6'}, 
    {'7', 'x', '9'}
};
    	sleep(2);
    	printf("Welcome to my  X_O Game!\n");
    	sleep(2);

    	printf("\ninstructions:\n");
    	sleep(2);
    
    	printf("1. When the game starts, you will see the board shown.\n");
    	sleep(3);
    
    	printf("2. each bolck in the board contain its representive number.\n");
    	sleep(4);
    printf("3. then you will be asked to choose the number to repleace it with your x or o\n");
    	sleep(4);
    
	printf("for example if you are player1 (x) and you entered (8) it will be in the board like this.....\n");
    	sleep(5);

	print_board(board);

	sleep(10);
    	printf("\n i hope its clear Enjoy the game!..\n\n\n");
    	sleep(3);
}


void print_board(char board[3][3])
{
	int i,j;
	char *sep = "-------------";

	printf("\n");
	for(i = 0; i < 3; i++)
	{
		printf("|");
		for(j = 0; j < 3; j++)
		{
			
			printf(" %c ", board[i][j]);
			printf("|");
		}
		printf("\n%s\n",sep);

	}
	printf("\n");
}