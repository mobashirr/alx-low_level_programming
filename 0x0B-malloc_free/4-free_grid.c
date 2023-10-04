#include "main.h"

/**
 * free_grid - free allocated memory
 *@grid: row
 *@height: colomon
 *Return: pointer to pointer.
 */

void free_grid(int **grid, int height)
{
int a = 0;

while (a < height)
{

free(grid[a]);

++a;
}


}
