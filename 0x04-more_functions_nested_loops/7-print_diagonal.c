#include "main.h"

/**
 * print_diagonal - prints \
 *
 * @n: first integer
 *
 * always return 0 when success
*/

void print_diagonal(int n)
{

int i, j;
if (n > 0)
{
for (j = 0 ; j < n ; j++)
{
for (i = 0 ; i < j ; i++)
{
_putchar(32);
}
_putchar (92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
