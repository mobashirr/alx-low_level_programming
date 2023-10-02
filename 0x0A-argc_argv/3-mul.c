#include "main.h"
#include <stdlib.h>
/**
 * main - program that prints multiplication of argument passed
 *@argc: count
 *@argv: string
 *Return: int
 */

int main(int argc, char **argv)
{
int a = argc;
int b = 1;
int sum = 1;


if (a != 3)
{
printf("Error\n");
return (0);
}

while (a > b)
{

sum = sum * atoi(argv[b]);
++b;
}

printf("%d\n", sum);

return (0);
}
