#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory
 * @nmemb: num of elements
 * @size: size of data type
 * Return: (void *)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	return (NULL);

	while (i < (nmemb * size))
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
