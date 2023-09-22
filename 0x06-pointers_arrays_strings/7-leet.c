#include <stdio.h>
#include"main.h"


/**
* leet - convert string to upper case
* @str: pointer to the first char of the string
* Return: pointer to the string after converted
*/
char *leet(char *str)
{
	int i = 0;
	char arr[] = { 'a', 'e', 'o', 't', 'l' };
	char ARR[] = { 'A', 'E', 'O', 'T', 'L' };
	char num[] = { '4', '3', '0', '7', '1' };

	while (str[i])
	{
		int j = 0;

		while (j < 5)
		{
			if (str[i] == arr[j] || str[i] == ARR[j])
				str[i] = num[j];
			j++;
		}

		i++;
	}
	return (str);
}
