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
	int i = 0, sum = 0;

	while (i < argc)
	{

		sum += atoi(argv[i]);
		i++;
	}

		printf("%d\n", sum);
return (0);
}
