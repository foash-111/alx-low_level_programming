#include"main.h"

/**
* _strcmp - compare two strings with each other
*@s1: pointer to the base string
* @s2: pointer to the string i want to concat it
* Return: s1 > s2 ? 1 , s1 < s2 ? -1 : 0
*/

int _strcmp(char *s1, char *s2)
{
	int s1_len = 0, s2_len = 0;

	while (s1[s1_len])
	{
		s1_len++;
	}
	while (s2[s2_len])
	{
		s2_len++;
	}

	if (s1_len > s2_len)
		return (15);
	else if (s1_len < s2_len)
		return (-15);
	else
		return (0);
}
