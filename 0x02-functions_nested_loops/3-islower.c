#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: the character to check
 *
 * Return: 1 if the character is uppercase, 0 otherwise
 */

int _islower(int c)
{
if ((char)c >= 97 && (char) c <= 122)
return (1);
else
return (0);
}
