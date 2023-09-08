#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main -Entry point
 *DECRIPTION : PROGRAM_THAT_COMPARE_THE_LAST_DIGIT
 */
int main(void)
{
	int n;
	int ls;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ls = n % 10;

		printf("Last digit of %d is ", n);

	if (ls > 5)
	{
		ptintf("and is greater than 5");
	}
	else if (ls == 0)
	{
		printf("and is 0");
	}
	else
	{
		printf("and is less than 6 and not 0");
	}
		return (0);
}
