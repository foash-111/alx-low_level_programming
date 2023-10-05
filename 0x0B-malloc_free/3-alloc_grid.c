#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocation 2d array
 * @width: array width
 * @height: array height
 * Return: pointer to the new array
*/

int **alloc_grid(int width, int height)
{

	int **ptr, i = 0, j = 0;

	if (width <= 0 || height <= 0)
	return (NULL);


	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
	free(ptr);
	return (NULL);
	}

	while (i < height)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			i = 0;
			while (i < height)
			{
			free(ptr[i]);
			i++;
			}
		free(ptr);
		return (NULL);
		}
		i++;
	}
	i = 0;

	while (i < height)
	{
		while (j < width)
		{
		ptr[i][j] = 0;
		j++;
		}
		i++;
	}
	return (ptr);
}
