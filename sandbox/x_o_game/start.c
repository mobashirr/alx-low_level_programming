#include "head.h"

int draw = 0;
int bot = 0;
char turn = '#';


int main()
{
	int choise;

	print_start();
	printf("\nchoose the mood: ");
	scanf("%d",&choise);

	if (choise == 5)
		return(0);
	else if (choise == 2)
		game_started();
	else if (choise == 1)
	{
		print_instructions();
		game_started();
	}
	else if (choise == 3)
		print_instructions();
	else if(choise == 4)
	{
		bot = 1;
		game_started();
	}

	return(0);
}
