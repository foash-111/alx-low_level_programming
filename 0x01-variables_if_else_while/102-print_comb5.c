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
	int k, l, j, i;

	for (i = 48 ; i <= 57 ; i++)
	{
	for (j = 48 ; j <= 57 ; j++)
	{
	for (k = 48 ; k <= 57 ; k++)
	{
	for (l = 48 ; l <= 57 ; l++)
	{
	if (i * 10 + j < k * 10 + l)
	{
	putchar(i);
	putchar(j);
	putchar(' ');
	putchar(k);
	putchar(l);
	if (i == 57 && j == 56 && k == 57 && l == 57)
	break;
	putchar (',');
	putchar (' ');
	}
	else
	continue;
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

