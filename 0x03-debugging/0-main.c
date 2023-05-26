#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: A C program that prints with srand function
 *
 * Return: Always 0 (Success)
*/

void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else
		(n == 0) printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

}
int main(void)
{
	int n;

	n = 98;

	positive_or_negative(n);
	return (0);
}
