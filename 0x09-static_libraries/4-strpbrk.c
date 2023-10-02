#include<stdio.h>

/**
* _strpbrk - function gets the length of a prefix substring
* @s: base string
* @accept: checker string
* Return: pointer to the start of it
*/

char *_strpbrk(char *s, char *accept)
{
	int len1 = 0, len2 = 0;

	while (s[len1])
	{
		len2 = 0;
		while (accept[len2])
		{
			if (accept[len2] == s[len1])
				return (&s[len1]);

			len2++;
		}
		len1++;
	}
	return (NULL);
}
