#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _realloc - reallocates memory block using malloc & free
 * @ptr: pointer to memory prev alloc
 * @old_size: input old
 * @new_size: input new
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *dest, *src;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

dest = malloc(new_size);
	if (dest == NULL)
		return (NULL);

src = ptr;

	for (i = 0; i < new_size && i < old_size; i++)
		dest[i] = src[i];
free(ptr);

return (dest);
}
