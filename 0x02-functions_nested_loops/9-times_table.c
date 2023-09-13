#include"stdio.h"

/**
*times_table - print times table :)
*
*Return: nothing
*/

void times_table(void)
{
	int i, j, result = 0;

	for (i = 0; i < 10; i++)
		{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (j == 9)
			{
				if (result < 10)
				{
					putchar('0' + result);
				}
				else
				{
					putchar('0' + result / 10);
					putchar('0' + result % 10);
				}
			}
			else
			{
				if (result < 10)
				{
					putchar('0' + result);
					putchar(',');
					putchar(' ');
					putchar(' ');
				}
				else
				{
					putchar('0' + result / 10);
					putchar('0' + result % 10);
					putchar(',');
					putchar(' ');
				}
			}

		}
		putchar('\n');
	}
}
