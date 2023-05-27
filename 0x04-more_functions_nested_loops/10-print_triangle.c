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

for (i = 0 ; i < 10 ; i++)
{
for (j = 0 ; j < n - 1 ; j++)
{
putchar(' ');
}
for (k = 0 ; k <= i ; k++)
{
putchar('#');
}
putchar('\n');
n--;
}
}
