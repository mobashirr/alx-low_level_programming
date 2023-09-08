#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * DESCRIPTION: PROGRAM_THAT_COMPARE_THE_LAST_DIGIT
 *return: Always 0 (success)
 */
int main(void)
{
	int n;
	int ls;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ls = n % 10;

		printf("Last digit of %d is %d ", n, ls);

	if (ls > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (ls == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
		return (0);
}
