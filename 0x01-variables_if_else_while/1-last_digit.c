#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with modulus function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod = n % 10;

	if (mod > 5)
	{
	printf("Last digit of %d", n);
	printf(" is %d and is greater than 5", mod);
	}
	if (mod == 0)
	{
	printf("Last digit of %d", n);
	printf(" is %d and is 0", mod);
	}
	if (mod < 6 && mod != 0)
	{
	printf("Last digit of %d", n);
	printf(" is %d and is less than 6 and not 0", mod);
	}
	return (0);
}
