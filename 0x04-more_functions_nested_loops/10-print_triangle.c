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
int i, j, k;

for (i = 0 ; i < n ; i++)
{
for (j = 0 ; j < n - 1 ; j++)
{
_putchar(' ');
}
for (k = 0 ; k <= i ; k++)
{
_putchar('#');
}
_putchar('\n');
n--;
}
_putchar('\n');
}
