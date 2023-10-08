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

	ptr = malloc(size * nmemb);

	if (ptr == NULL || nmemb == 0 || size == 0)
	return (NULL);

	while (i < nmemb)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
