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
n = n % 10;
_putchar(n + 48);
return (n);
}
