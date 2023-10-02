#include "main.h"

/**
 * main - program that prints all argument passed
 *@argc: count
 *@argv: string
 *Return: int
 */

int main(int argc, char **argv)
{
int a = argc - 1;
int b = 0;

while (a >= b)
{
printf("%s\n", argv[b]);
++b;
}

return (0);
}
