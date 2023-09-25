#include<stdio.h>
#include"main.h"

/**
* _strchr - find the location of a char
* @s:string we will search in
*@c: the char we will search for
* Return: pointer to the location
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
