#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with alphapets in lower case
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, j;

	for (n = 48 ; n <= 57 ; n++)
	{
	for (j = 49 ; j <= 57 ; j++)
	{
	if (n >= j)
	continue;
	else
	{
	putchar(n);
	putchar(j);
	if (j == 57 && n == 56)
	break;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
