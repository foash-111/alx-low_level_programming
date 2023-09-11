#include"stdio.h"
#include"stdlib.h"
#include <string.h>

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
char *ptr;

while (i < argc)
{

	int check = strlen(argv[i]);

	ptr = argv[i];

	while (--check)
	{
	if (ptr[check] < 48 &&  ptr[check] > 57)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		sum += atoi(argv[i]);
	}

	}

i++;

}

printf("%d\n", sum);

return (0);
}
