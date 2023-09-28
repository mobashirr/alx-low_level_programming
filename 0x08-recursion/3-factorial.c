#include "main.h"

/**
 * factorial - find factorial of num
 *@n: passed num.
 *Rrturn: int
 */

int factorial(int n)
{
int sum = 0;

if (n < 0)
	{
	return (-1);
	}
if (n > 0)
{
sum = n * factorial(n - 1);
return (sum);
}
if (n == 0)
{
	return (1);
}

return (sum);
}


