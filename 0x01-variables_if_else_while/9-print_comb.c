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
	int n;

	for (n = 48 ; n <= 57 ; n++)
	{
	putchar(n);
	if (n == 57)
	{
	putchar('$');
	break;
	}
	putchar(',');
	putchar(' ');
	}
	return (0);
}

