#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * continue when == 2 || when == 4
 *
 * This function prints the numbers from 0 to 9, followed by a new line.
 */

void print_numbers(void)
{
	char i;

	i = 48;
for (i = 48; i <= 57; i++)
{
	if (i == 50 || i == 52)
	{
		continue;
	}
	else
	{
		_putchar (i);
	}
}
_putchar ('\n');
}
