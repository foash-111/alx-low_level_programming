#include "stdio.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long long int i, n1 = 1, n2 = 2;
	long long int sum = 0;

	printf("1, 2, ");
	for (i = 1; i <= 50; i++)
	{

		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		printf("%lld, ", sum);

	}
	putchar('\n');
	return (0);
}
