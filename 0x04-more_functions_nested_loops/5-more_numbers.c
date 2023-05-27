#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14
 *
 * only use _putchar three times in your code
 *
 * always return 0 when success
*/

void more_numbers(void)
{
	int i, j, k;

	for (k = 48 ; k <= 57 ; k++)
	{
	for (i = 48 ; i <= 49 ; i++)
	{
	for (j = 48 ; j <= 57 ; j++)
	{
	if (i == 48)
	_putchar(j);
	else
	{
	_putchar(i);
	_putchar(j);
	if (j == 52)
	break;
	}
	}
	}
	_putchar('\n');
	}
}
