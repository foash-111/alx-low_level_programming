#include "main.h"

/**
 * print_square - prints #
 *
 * @n: first integer
 *
 * always return 0 when success
*/

void print_square(int n)
{

int i, j;
if (n > 0)
{
for (j = 0 ; j < n ; j++)
{
for (i = 0 ; i < n ; i++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
