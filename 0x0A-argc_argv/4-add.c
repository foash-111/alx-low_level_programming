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
int j = 0;
	ptr = argv[i];

	while (j < check)
	{
	if (ptr[j] < 48 &&  ptr[j] > 57)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		sum += atoi(argv[i]);
	}
j++;
	}

i++;

}

printf("%d\n", sum);

return (0);
}
