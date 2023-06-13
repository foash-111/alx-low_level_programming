#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function init==array
 *
 * @grid:the address of the array1
 *
 * @height:the address of the array2
 *
 * Return:nothing
*/

void free_grid(int **grid, int height)
{
int i;

i = 0;

for (; i < height; i++)
free(grid[i]);
free(grid);
}
