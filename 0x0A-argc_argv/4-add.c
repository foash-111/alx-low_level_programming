#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with put function
 *@argc: arguments counter
 *@argv: arguments vector
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i = 0, sum = 0, x = 0;

	while (i < argc)
	{
		x = atoi(argv[i]);

		if (x >= 0 && x <= 9)
		{
		sum += x;
		i++;
		}
		else
		{
		printf("Error\n");
		return (1);
		}
	}

		printf("%d\n", sum);
return (0);
}
