#include <stdio.h>
#include<stdarg.h>

/**
 * print_strings - print strings
 *
 * @separator:separator
 * @n: number of arguments
 * @...: ...
 * Return: (void)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list pa;
	char *ptr;

	va_start(pa, n);

while (i < n)
{

ptr = va_arg(pa, char *);

printf("%s", ptr == NULL ? "(nil)" : ptr);

if (i < n - 1)
printf("%s", separator == NULL ? "" : separator);

i++;
}

putchar('\n');

va_end(pa);
}

