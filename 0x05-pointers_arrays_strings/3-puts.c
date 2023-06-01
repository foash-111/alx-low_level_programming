#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *
 * @str: the first parameter
 *
 * Return: none
*/

void _puts(char *str)
{
int count;
int i;

i = 0;
count = 0;

while (*(str + count) != '\0')
{
count++;
}

while (i < count)
{
_putchar(*(str + i));
}
_putchar('\n')
}
