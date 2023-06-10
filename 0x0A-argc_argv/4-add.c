#include<stdio.h>
#include<stdlib.h>
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
int count, sum = 0;

if (argc == 1)
{
printf("0\n");
}
else
{
for (count = 1; count < argc; count++)
{
if (atoi(argv[count]) < 48  || atoi(argv[count]) > 57)
{
printf("Error\n");
return (1);
}
else
{
sum += atoi(argv[count]);
}

}
printf("%d\n", sum);
}
return (0);
}
