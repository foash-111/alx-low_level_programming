#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that printsthe program name
 *
 * @argc: first argument to show the number of commands
 * argc = arg command
 *
 * @argv: second argument to show argument array
 * argv = arg vector or `array`
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char const *argv[])
{
	(void)argc;
printf("%s\n", argv[0]);

return (0);
}
