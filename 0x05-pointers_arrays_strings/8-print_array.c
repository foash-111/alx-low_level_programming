#include "main.h"

/**
 * print_array - print array
 * @a: pointer to array
 * @n: number of indeces
 * Return: void
*/

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i == n - 1)
{
	printf("%d", *(a + i));
	break;
}

printf("%d, ", *(a + i));

}

putchar('\n');

}
