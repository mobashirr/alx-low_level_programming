#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the number of argument pases ti it
 *@argc: number of argument
 *@argv: array of string contain argument passed
 *Return: int
 */



int main(int argc, char **argv)
{

int a = argc;
int sum = 0;

if (argv[a] == argv[0])
{
printf("0");
return (0);
}

else
{
sum = argc - 1;

printf("%d\n", sum);
}

return (0);
}

