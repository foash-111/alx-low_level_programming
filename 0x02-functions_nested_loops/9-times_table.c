#include"stdio.h"

/**
* times_table - print times table :)
*
*Return: nothing
*/

void times_table(void)
{
	int i, j, result = 0;

	for (i = 0; i < 10; i++)
	{
		putchar('0');

		for (j = 1; j <= 9; j++)
		{
			result = i * j;

			if (result < 10)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar('0' + result);
			}
			else
			{
				putchar(',');
				putchar(' ');
				putchar('0' + result / 10);
				putchar('0' + result % 10);
			}
		}
		putchar('\n');
	}
}
