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

	for (n = 122 ; n >= 97 ; n--)
	{
	putchar(n);
	}
	putchar('\n');
	return (0);
}
