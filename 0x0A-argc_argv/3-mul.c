#include"stdio.h"
#include"stdlib.h"

/**
 * main - entry point
 * @argc: num of argument
 * @argv: array of points to argument
 *
 * Return: (0) on success
*/

int main(int argc, char *argv[])
{

int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int result = num1 * num2;

if (argc == 2)
{
	printf("%d\n", result);
}
else
{
printf("Error\n");

return (1);
}

return (0);
}
