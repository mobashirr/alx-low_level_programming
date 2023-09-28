#include "main.h"

/**
 * sqrt_check - check the square root.
 * @n: Number to find square root of
 * @l: The number checked to see if it's the sqrt of n
 *
 * Return: The square root value
 */
int sqrt_check(int n, int c)
{
	if  (c * c == n)
	{
		return (c);
	}
	else if (c >= n / 2)
	{
		return (-1);
	}
	else
	{
		return (sqrt_check(n, c + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a numbe.
 *@n: the numbear
 *Return: int
 */

int _sqrt_recursion(int n)
{

if (n == 1)
{
		return (1);
}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
return (sqrt_check(n, 1));
  }
}
