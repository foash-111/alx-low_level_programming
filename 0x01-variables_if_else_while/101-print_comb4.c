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
	int i, n, j;

	for (i = 48 ; i <= 57 ; i++)
	{
	for (n = 49 ; n <= 57 ; n++)
	{
	for (j = 50 ; j <= 57 ; j++)
	{
	if (j > n && n > i)
	{
	putchar(i);
	putchar(n);
	putchar(j);
	if (j == 57 && n == 56 && i == 55)
	break;
	putchar(',');
	putchar(' ');
	}
	else
	continue;
	}
	}
	}
	putchar('\n');
	return (0);
}
