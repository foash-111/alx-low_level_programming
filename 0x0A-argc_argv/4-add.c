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

int i = 1;
int sum = 0;

while (i < argc)
{

if (!((int) *argv[i] < 48  && (int) *argv[i] > 57))
{
sum += atoi(argv[i]);
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
