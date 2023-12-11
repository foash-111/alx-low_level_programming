#include<stdio.h>
#include"main.h"
#include<stdbool.h>

/**
* _atoi - convert string to integer
*
* @s: pointer to the string that i want
* to convert
*
* Return: the integer value of the number
* that was in the string
*
*
*/


int _atoi(char *s)
{
	int i = 0;
	bool flag = 0;
	unsigned int x = 0;

	while (s[i])
	{
		if (s[i] == '-')
			flag = !flag;

		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				x = ((int)s[i] - 48) + (x * 10);
				i++;
			}
			break;
		}
		i++;
	}

	if (flag)
		x = -x;

	return (x);
}
