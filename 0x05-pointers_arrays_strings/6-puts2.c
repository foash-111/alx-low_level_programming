#include "main.h"

/**
 * _puts2 - prints a string followed by a new line
 *
 * @str: the first parameter
 *
 * Return: none
*/

void _puts2(char *str)
{
int i;

i = 0;

while (str[i])
{
if (i % 2 == 0)
	_putchar(str[i]);
else
	continue;

i++;
}

_putchar('\n');
}
