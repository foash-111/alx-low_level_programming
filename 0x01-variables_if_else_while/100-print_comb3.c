<<<<<<< HEAD
#include <stdlib.h>
#include <time.h>
=======
>>>>>>> ba4c8ee9d8e42989b28ba6710cbc81077e50adc5
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
	int n, j;

	for (n = 48 ; n <= 57 ; n++)
	{
	for (j = 49 ; j <= 57 ; j++)
	{
<<<<<<< HEAD
	if (n >= j)
	continue;
	else
=======
	if (j > n)
>>>>>>> ba4c8ee9d8e42989b28ba6710cbc81077e50adc5
	{
	putchar(n);
	putchar(j);
	if (j == 57 && n == 56)
	break;
	putchar(',');
	putchar(' ');
	}
<<<<<<< HEAD
=======
	else
	continue;
>>>>>>> ba4c8ee9d8e42989b28ba6710cbc81077e50adc5
	}
	}
	putchar('\n');
	return (0);
}
