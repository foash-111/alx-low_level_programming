#include <stdio.h>
#include <stdlib.h>

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


	ptr = (int **)malloc(sizeof(int) * height);
	if (ptr == NULL)
	return (NULL);

	while (i < height)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);

		if (ptr == NULL)
		return (NULL);

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
