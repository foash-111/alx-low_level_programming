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
	int i;

for (i = 0; i <= 9; i++)
{
	if (i == 2 || i == 4)
	{
		continue;
	}
	else
	{
		_putchar (i + 48);
	}
}
_putchar ('\n');
}
