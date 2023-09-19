#include <stdio.h>

/**
* string_toupper - convert string to upper case
* @str: pointer to the first char of the string
* return: pointer to the string after converted
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);

}
