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
	for (j = 48 ; j <= 56 ; j++)
	{
	for (k = i ; k <= 57 ; k++)
	{
	for (l = j + 1 ; l <= 57 ; l++)
	{
	if (k + l > i + j)
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

