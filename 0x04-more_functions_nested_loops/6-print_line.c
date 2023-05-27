#include "main.h"

/**
 * print_line - prints _
 *
 * @n: first integer
 *
 * always return 0 when success
*/

void print_line(int n)
{

int i, j;

if (n > 0)
{
for (i = 0 ; i < n ; i++)
{
putchar(45);
}
}
putchar (36);
putchar('\n');
}
