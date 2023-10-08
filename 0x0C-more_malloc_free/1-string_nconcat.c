#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
* string_nconcat - concatinate
* @s1:base string
* @s2: string that we will append
* @n: number of chars that will be concatenated
* Return: pointer to dublicated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i = 0;

	if (s1 == NULL)
		len1 = 0;
	else
	while (s1[len1])
		len1++;
	if (s2 == NULL)
		len2 = 0;
	else
	while (s2[len2])
		len2++;

	if (len2 < n)
		n = len2;

	ptr = malloc((sizeof(char) * (len1 + n)) + 1);

	if (ptr == NULL)
		return (NULL);

	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		ptr[len1] = s2[i];
		i++;
		len1++;
	}

	ptr[len1] = '\0';

	return (ptr);
}
