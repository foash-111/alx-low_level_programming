#include<stdio.h>

/**
* set_string - chage the value of **s
* @s: address of pointer that point to something
* @to: pointer that point to something
* Return: void
*/

void set_string(char **s, char *to)
{
	*s = to;
}
