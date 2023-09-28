#include "main.h"


/**
 * _pow_recursion - the result of x to the power of y.
 *@x: the base num
 *@y: the power num
 *Return: int
 */

int _pow_recursion(int x, int y)
{

int sum = 0;

if (y > 0)
{
sum = x * _pow_recursion(x, y - 1);
return (sum);
}

if (y == 0)
{
return (1);
}


if (y < 0)
{
sum = -x * _pow_recursion(x, y - 1);
return (sum);
}


return (sum);

}

