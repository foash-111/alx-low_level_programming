#include <stdio.h>

/**
* rot13 - function yo rotate a string
* @str: string we want to rotate
* Return: pointer to the converted string
*/

char  *rot13(char *str)
{
	int i = 0;

while (str[i])
{

	while ((str[i] >= 'a' && str[i] <= 'z')
		|| (str[i] >= 'A' && str[i] <= 'Z'))
	{
	if ((str[i] >= 'a' && str[i] <= 'm')
			|| (str[i] >= 'A' && str[i] <= 'M'))
	{
		str[i] += 13;
		break;
	}
	str[i] -= 13;
	break;
	}
	i++;
}

return (str);
}

