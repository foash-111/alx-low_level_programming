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

for (j = 0 ; j < n ; j++)
{
for (i = 0 ; i < j ; i++)
{
putchar(32);
}
putchar (92);
putchar('\n');
}
}
