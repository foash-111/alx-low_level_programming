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
n =  n % 10;
n = n * (-1);
}

n = n % 10;
_putchar(n + '0');
return (n);
}

}
