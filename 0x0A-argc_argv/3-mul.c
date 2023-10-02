#include<stdio.h>
#include <stdlib.h>

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
	int x, y;

if (argc != 2)
{
printf("Error\n");
return (1);
}

x = atoi(argv[1]);
y = atoi(argv[2]);

printf("%d\n", (x *y));

return (0);
}
