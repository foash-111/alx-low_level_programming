#include "main.h"

/**
 * print_last_digit -  computes the absolute value of an integer.
 * @n: the intger to check
 *
 *
 * Return: last digit.
*/

int print_last_digit(int n)
{

if (n < 0)
{
n = -1 * n;

n = n % 10;
_putchar(n + 48);
return (n);

}
else
{

n = n % 10;
_putchar(n + 48);
return (n);

}
}
