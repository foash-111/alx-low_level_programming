#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
* _strdup - duplicate
* @str: string we want to dublicate
* Return: pointer to dublicated string
*/

char *_strdup(char *str)
{
	char *ptr;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	ptr = malloc(sizeof(len) + 1);

	if (ptr == NULL)
		return (NULL);

	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
