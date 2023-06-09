#include<stdio.h>

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
int count;


for (count = 0; count < argc; count++)

{
printf("%s\n", argv[count]);
}

return (0);
}
