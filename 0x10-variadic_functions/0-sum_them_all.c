#include"variadic_functions.h"
#include"stdio.h"
#include"stdarg.h"

/**
 * sum_them_all - add values
 *
 *@n:numbers of args
 *
 *Return:int
 *
 *
 *
*/


int sum_them_all(const unsigned int n, ...)
{
int sum;
int argN;
va_list ptr;

sum = 0;
argN = n;

va_start(ptr, n);

	if (n == 0)
		return (0);
while (argN--)
{
sum += va_arg(ptr, int);
}
va_end(ptr);
return (sum);

}
