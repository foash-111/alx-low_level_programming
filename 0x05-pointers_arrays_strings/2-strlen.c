#include "main.h"

/**
 * _strlen - return the length of the string
 *
 * @s: the first parameter
 *
 * Return: int
*/

int _strlen(char *s)
{
int count;

count = 0;

while (*(s + count) != '\0')
{
count++;
}
return (count);
}
