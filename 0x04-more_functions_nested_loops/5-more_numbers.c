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

	for (i = 0 ; i <= 9 ; i++)
	{
	if (j < 10)
	{
	_putchar(j + 48);
	}
	else
	{
	_putchar(j / 10 + 48);
	_putchar(j % 10 + 48);
	}
	}
	 _putchar('\n');
	}
}
