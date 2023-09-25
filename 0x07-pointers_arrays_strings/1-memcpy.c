#include<stdio.h>
#include"main.h"

/**
* _memcpy - copy from one to anther
* @dest: base string
* @src: the string we copy from
* @n: n bytes we will copy
* Return: pointer to dest after edition
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
