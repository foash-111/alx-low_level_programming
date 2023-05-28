#include "main.h"

/**
 * print_sign - checks if a character is digit
 * @n: the intger to check
 *
 *
 * Return: 1 and prints + or 0 print 0 or -1 prints -.
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
