#include"main.h"

/**
 * set_bit - function that returns the value of a bit at a given index.
 * @n: unsigned long int n number
 * @index: target index
 * Return: int
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1;

if (index > sizeof(*n) * 8 - 1)
return (-1);

mask <<= index;

*n = *n | mask;

return (*n);
}
