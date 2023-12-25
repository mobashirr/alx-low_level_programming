#include "game.h"

/**
 * draw: when its 1 this mean draw case detected
 * bot: we are in the boot mode (play with computer)
 * turn: track which player should play know (x or o)
*/

int draw = 0;
int bot = 0;
char turn = '#';

/**
 * main - entry point
 * Return: 0
*/
int main()
{
	int choise;

	print_start();
	printf("\nchoose the mood: ");
	scanf("%d",&choise);

	switch(choise)
	{
		case(5):
			return (0);
		case(4):
			bot = 1;
			game_started();
			break;
		case(3):
			print_instructions();
			break;
		case(2):
			game_started();
			break;
		case(1):
			print_instructions();
			game_started();
			break;
		default:
			break;	
	}
	return(0);
}
