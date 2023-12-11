#include<stdio.h>

/**
* _strncat - concatenate two strings with each other
*@dest: pointer to the base string
* @src: pointer to the string i want to concat it
* @n: number of chars in second string that i want
* to concatenate it with the base string
* Return: pointer to the base string after concat
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len = 0;

	while (dest[dest_len])
	{
		dest_len++;
	}


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}
	dest[dest_len] = '\0';

	return (dest);
}
