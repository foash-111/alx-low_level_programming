#include<stdio.h>

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
	int i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
	}
return (0);
}
