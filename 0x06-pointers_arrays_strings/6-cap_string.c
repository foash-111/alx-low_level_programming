#include"main.h"
#include <stdio.h>

/**
* cap_string - convert string to upper case
* @str: pointer to the first char of the string
* Return: pointer to the string after converted
*/

char *cap_string(char *str)
{
	int i = 0, j;
char arr[] = { 32, 34, 44, 46, '\t', '\n', '(', ')', '{', '}', '?', '!', ';' };

	while (str[i])
	{
		j = 0;
		/*
		* if (str[i + 1] == '\t')
		*{
		*	str[i + 1] = ' ';
		*}
		*/
			while (j < 13)
			{
				if ((i == 0 && str[i] >= 'a' && str[i] <= 'z')

					||

					(str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == arr[j]))

					str[i] -= 32;
				j++;
			}
		i++;
	}
	return (str);

}
