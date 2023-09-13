#include"stdio.h"

/**
* print_times_table - print_times_table for a number
*@n: a number that we print_times_table for
*
*Return: nothing
*/

void print_times_table(int n)
{
	int check = 0, i, j;

	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				check = j + 1;

				if (j == n)
				printf("%d", i * j);
				else if (i * check < 10)
				printf("%d,   ", i * j);
				else if (i * check < 100)
					printf("%d,  ", i * j);
				else
						printf("%d, ", i * j);

			}
			printf("\n");
		}
	}
}
