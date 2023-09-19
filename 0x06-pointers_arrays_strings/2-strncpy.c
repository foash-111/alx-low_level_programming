#include"main.h"

/**
* _strncpy - concatenate two strings with each other
*@dest: pointer to the base string
* @src: pointer to the string i want to copy it
* @n: number of chars in second string that i want
* to concatenate it with the base string
* Return: pointer to the base string after copy
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
