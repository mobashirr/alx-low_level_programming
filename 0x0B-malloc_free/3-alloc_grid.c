#include "main.h"

/**
 * alloc_grid - make tow dimantional array
 *@width: row
 *@height: colomon
 *Return: pointer to pointer.
 */

int **alloc_grid(int width, int height)
{
int a = 0;
int b = 0;
int **arr;
if (width == 0 || height == 0)
{
return(NULL);
}


arr = malloc(sizeof(*arr ) * height);

if (arr == NULL)
return (NULL);

while (a < height)
{
arr[a] = (int *)malloc(width * sizeof(int));
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
