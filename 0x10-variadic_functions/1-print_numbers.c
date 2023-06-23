#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"

/**
 * print_numbers - print numbers with spearator
 *
 *@separator:the string to be printed between numbers
 *
 *@n:number of the arguments
 *
 *Return:nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ptr;

va_start(ptr, n);

if (separator == NULL)
	separator = "";

for (i = 0; i < n; i++)
{
if (i == n-1)
printf("%d", va_arg(ptr, int));
else
printf("%d%s", va_arg(ptr, int), separator);
}
printf("\n");
va_end(ptr);
}
