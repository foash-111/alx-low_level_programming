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
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
int num1, num2;
int mul = 1;

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
if (argc == 3)
{

mul = num1 *num2;

printf("%d\n", mul);
}
else
{
printf("Error\n");
return (1);
}

return (0);
}
