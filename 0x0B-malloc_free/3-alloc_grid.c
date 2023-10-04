#include "main.h"

/**
 * alloc_grid - make tow dimantional array
 *@width: row
 *@height: colomon
 *Return: pointer to pointer.
 */

int **alloc_grid(int width, int height)
{
int **arr = (int **)malloc(sizeof(int *) * width);
int a = 0;
int b = 0;

if (arr == NULL || width = 0 || height = 0)
{
return(NULL);
}

while (a < height)
{
arr[a] = (int *)malloc(height * sizeof(int));
++a;
}

a = 0;

while (a < height)
{

b = 0;

while (b < width)
{

arr [a][b] = 0;
++b;
}

++a;
}

return (arr);
}
