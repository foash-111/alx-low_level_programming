#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"

/**
 * print_strings - print numbers with spearator
 *
 *@separator:the string to be printed between numbers
 *
 *@n:number of the arguments
 *
 *Return:nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ptr;
char *ptrstr;

va_start(ptr, n);

for (i = 0; i < n; i++)
{
ptrstr =  va_arg(ptr, char*);
if (ptrstr == NULL)
ptrstr = "(nil)";

if (i == n - 1 || separator == NULL)
printf("%s", ptrstr);
else
printf("%s%s", ptrstr, separator);
}

printf("\n");
va_end(ptr);
}
