#include<stdio.h>
#include"main.h"

/**
* _memset - function add something after n bytes
*
* @s: base string
* @b: what we will add to the base string
* @n:number of bytes that we will add after it
* Return: pointer to the string after adding
*
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
