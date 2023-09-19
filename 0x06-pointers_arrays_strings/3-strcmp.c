#include"main.h"

/**
* _strcmp - compare two strings with each other
*@s1: pointer to the base string
* @s2: pointer to the string i want to concat it
* Return: s1 > s2 ? 1 , s1 < s2 ? -1 : 0
*/

int _strcmp(char *s1, char *s2)
{
	int sum1 = 0, sum2 = 0, s1_len = 0, s2_len = 0;

	while (s1[s1_len])
	{
		sum1 += (int)s1[s1_len];
		s1_len++;
	}
	while (s2[s2_len])
	{
		sum2 += (int)s2[s2_len];
		s2_len++;
	}

	if (sum1 > sum2)
		return (1);
	else if (sum1 < sum2)
		return (-1);
	else
		return (0);
}
