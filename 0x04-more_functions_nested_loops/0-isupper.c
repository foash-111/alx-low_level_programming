#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if a character is uppercase
 * @c: the character to check
 *
 * Return: 1 if the character is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if ((char)c >= 65 && (char) c <= 90)
		return (1);
	else
		return (0);
}

/**
 * main - Entry point for the program
 *
 * This function checks if a character is uppercase and prints the result.
 * It takes no arguments and returns 0 on success.
 *
 * Return: 0 on success
 */

int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
