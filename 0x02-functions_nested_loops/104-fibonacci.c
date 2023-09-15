#include "stdio.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int i, n1 = 1, n2 = 2;
	unsigned long int sum = 0;

	printf("1, 2, ");
	for (i = 3; i <= 98; i++)
	{

		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		if (i == 98)
		{
		printf("%ld", sum);
		break;
		}
		printf("%ld, ", sum);
	}
	putchar('\n');
	return (0);
}
