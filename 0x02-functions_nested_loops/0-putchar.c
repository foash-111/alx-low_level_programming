#include<stdio.h>
#include "main.h"

/**
 * print_ptchar - putchar
 * Return: void
*/

void print_ptchar(void)
{
int i = 0;
char str[] = "_putchar";

while (str[i])
{
_putchar(str[i]);

i++;
}
_putchar('\n');
}

/**
 * main - Entry point
 *
 * Description: A C program that prints with put function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	print_ptchar();

return (0);
}
