#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with function _isupper
 *
 * Return: Always 0 (Success)
*/

/* function declaration */

int _isupper(int c)
{
	if ((char)c >= 65 && (char) c <= 90)
		return (1);
	else
		return (0);
}

int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
