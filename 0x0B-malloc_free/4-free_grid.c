#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free 2d array
 *
 * @grid: 2d array that i want to free
 * @height: the height of the array
 * Return: (void)
 */

void free_grid(int **grid, int height)
{
int i = 0;

while (i < height)
{
	free(grid[i]);
	i++;
}
free(grid);
}
