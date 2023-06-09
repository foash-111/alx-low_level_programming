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
int num1, num2;

if (argc == 3)
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

printf("%d\n", num1 *num2);
}
else
{
printf("Error\n");
return (1);
}

return (0);
}
