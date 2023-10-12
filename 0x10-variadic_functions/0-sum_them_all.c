#include <stdio.h>
#include<stdarg.h>
/**
 * sum_them_all - sum variadic function
 *
 * @n: number of arguments
 * @...: variadic
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i = 0, sum = 0;

va_start(ap, n);

if (n == 0)
	return (0);
while (i < n)
{
	sum += va_arg(ap, int);
	i++;
}
va_end(ap);
return (sum);
}
