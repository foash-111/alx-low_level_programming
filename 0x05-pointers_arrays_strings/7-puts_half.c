#include "main.h"

/**
 * puts_half - prints a string followed by a new line
 *
 * @str: the first parameter
 *
 * Return: none
*/

void puts_half(char *str)
{
int i = 0;
int count = 0;

while (str[i])
{
i++;
count++;
}
if (i % 2 == 0)
{
i = i / 2;
}
else
{
i = i / 2;
i++;
}
while (i < count)
{
	putchar(str[i]);
	i++;
}

putchar('\n');
}
