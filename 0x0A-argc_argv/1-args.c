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

int main(int argc,  __attribute__((__unused__)) char **argv)
{

printf("%d\n", argc - 1);

return (0);
}
