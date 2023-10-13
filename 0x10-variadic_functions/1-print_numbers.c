#include<stdio.h>
#include<stdarg.h>

/**
 * print_numbers - print numbers with separator
 * using variadic function
 *
 * @separator: string that we print between numbers
 * @n: number of arguments
 * @...: ...
 * Return: (void);
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list pa;

va_start(pa, n);

while (i < n)
{

printf("%d", va_arg(pa, int));
if (i < n - 1)
printf("%s", separator == NULL ? "" : separator);

i++;
}
putchar('\n');

va_end(pa);
}
