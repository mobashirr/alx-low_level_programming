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
int nu = 0;

if (a != 3)
{
printf("Error\n");
return (0);
}

while (a > b)
{

nu = atoi(argv[b]);

sum = sum *nu;
++b;
}

printf("%d\n", sum);

return (0);
}
