#include<stdio.h>
#include "main.h"

/**
* _strcat - concatenate two strings with each other
*@dest: pointer to the base string
* @src: pointer to the string i want to concat it
* Return: pointer to the base string after concat
*/

char *_strcat(char *dest, char *src)
{
	int i, dest_len = 0, src_len = 0;

	while (dest[dest_len])
	{
		dest_len++;
	}
	while (src[src_len])
	{
		src_len++;
	}

	for (i = 0; i < src_len; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}
	dest[dest_len] = '\0';

	return (dest);
}
