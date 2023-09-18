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

while (s[count])
{
count++;
}
if (s == NULL)
        return (0);
        else
return (count);
}



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
