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

	for (i = 0; i <= 9; i++)
	{

	for (j = 0 ; j <= 14 ; j++)
	{
	k = j;
	if (j > 9)
	{
	_putchar(49);
	k = j % 10;
	}
	_putchar(k + 48);
	}
	
	 _putchar('\n');
	}
}
