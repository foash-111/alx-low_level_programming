#include <stdio.h>
#include <stdlib.h>
#include"main.h"

/**
 * create_array - initialize array with malloc
 * @size: of the array
 * @c: the char that will be in the array
 * Return: pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(c) * size);

	if (ptr == NULL)
		return (NULL);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
