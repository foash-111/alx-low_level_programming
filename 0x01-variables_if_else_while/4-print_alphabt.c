#include <stdlib.h>
#include <time.h>
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
	char n;

	for (n = 97 ; n <= 122 ;)
	{
	if (n == 101 || n == 113)
	{
	n++;
	continue;
	}
	else
	{
	putchar(n++);
	}
	}
	putchar('\n');
	return (0);
}
