#include "main.h"

/**
 * free_grid - free allocated memory
 *@grid: row
 *@height: colomon
 *Return: pointer to pointer.
 */

void free_grid(int **grid, int height)
{
int **arr = (int **)malloc(height * sizeof(int *));

int a = 0;
int b = 0;

while (a < width)
{
arr[a] = (int *)malloc(height * sizeof(int));
++a;
}

a = 0;
while (a < width)
{

b = 0;
while (b < height)
{

arr [a][b] = 0;
++b;
}

++a;
}

return (arr);
}
