#include "main.h"

/**
 * print_rev - prints a string followed by a new line
 *
 * @s: the first parameter
 *
 * Return: none
*/

void print_rev(char *s)
{
int i;
int len;

len = _strlen(s);
i = _strlen(s);

while (s[i])
{
_putchar(s[i - 1]);
i--;
}

s[len - 1] = '\0';
_putchar('\n');
}

