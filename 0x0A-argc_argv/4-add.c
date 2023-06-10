#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * main - Entry point
 *
 * Description: A C program that printsthe program name
 *
 * @argc: first argument to show the number of commands
 * argc = arg command
 *
 * @argv:second parameter
 * Return: Always int (Success)
*/

int main(int argc, char *argv[])
{
unsigned int count, i, sum = 0;

char *e;
if (argc == 1)
{
printf("0\n");
}
else
{
for (count = 1; count < argc; count++)
{
	e = argv[count];

	for (i = 0; i < strlen(e); i++)
	{
	if (e[i] < 48 || e[i] > 57)
	{
	printf("Error\n");
	return (1);
	}
	}

	sum += atoi(e);
	e++;

}

printf("%d\n", sum);


}

return (0);
}
