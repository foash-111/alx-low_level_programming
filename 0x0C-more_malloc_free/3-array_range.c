#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * array_range - allocate array
 * @min: min
 * @max: max
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int bytes = 0, i = 0;
	int *ptr;
	int dif = max - min;

	bytes = max - min + 1;

	ptr = malloc(sizeof(int) * bytes);

	if (ptr == NULL)
	return (NULL);

	while (i <= dif)
	{
		ptr[i] = min + i;
		i++;
	}

	return (ptr);

}
