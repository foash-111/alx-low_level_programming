#include "main.h"

/**
 * print_triangle - prints #
 *
 * @n: first integer
 *
 * always return 0 when success
*/

void print_triangle(int n)
{
int i, j, k, l;

l = n;
for (i = 1 ; i <= n ; i++)
{
for (j = 0 ; j < l - 1 ; j++)
{
_putchar(32);
}
for (k = 1 ; k <= i ; k++)
{
_putchar(35);
}
_putchar('\n');
l--;
}
_putchar('\n');
}
