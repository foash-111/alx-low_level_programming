#include<stdio.h>
#include"main.h"

/**
* _strspn - function gets the length of a prefix substring
* @s: base string
* @accept: checker string
* Return: count for how many chars that word consist of
*/

unsigned int _strspn(char *s, char *accept)
{
	int count = 0, len1 = 0, len2 = 0;

	while (accept[len2])
	{
		len1 = 0;
		while ((s[len1] >= 'a' && s[len1] <= 'z')
				|| (s[len1] >= 'A' && s[len1] <= 'Z'))
		{
			if (accept[len2] == s[len1])
				count++;

			len1++;
		}
		len2++;
	}
	return (count);
}
