#include<stdio.h>
#include "main.h"

/**
* _strstr -  function that locates a substring.
* @haystack: base string
* @needle: string we search for
* Return: pointer to the start of the needle
* or null if not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, flag = 1, temp = 0;

if (*needle == '\0')
return (haystack);

while (haystack[i] != '\0')
{
j = 0;
	while (needle[j] != '\0')
	{

		if (needle[j] == haystack[i])
		{
			if (flag)
			{
			temp = i;
			flag = 0;
			}
		}
		else
		{
			flag = 1;
			break;
		}
	i++;
	j++;
	}

	if (flag == 0 && haystack[temp] != '\0')
		return (&haystack[temp]);

	i++;
	}
return (NULL);
}
