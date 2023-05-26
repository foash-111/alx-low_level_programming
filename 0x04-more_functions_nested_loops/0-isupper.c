#include "main.h"

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
