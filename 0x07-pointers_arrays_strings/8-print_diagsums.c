#include"main.h"
#include <stdio.h>

/**
* print_diagsums - print_diagsums
* @a: pointer to the first element
* @size: size of the array
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0;
	long int sum1 = 0, sum2 = 0;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
				sum1 += a[i * size + j];
			if (i + j == size - 1)
				sum2 += a[i * size + j];
			j++;
		}

		i++;
	}
	printf("%lu, %lu\n", sum1, sum2);
}
