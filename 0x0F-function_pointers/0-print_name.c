#include <stdio.h>
#include"function_pointers.h"

/**
 * print_name - function
 * @name: the string i want to print
 * @f: pointer to a function
 * Return: (void)
*/

void print_name(char *name, void (*f)(char *))
{
if (name)
(*f)(name);
}
