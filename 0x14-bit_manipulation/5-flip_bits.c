#include"main.h"

/**
 * clear_bit - function that returns the value of a bit at a given index.
 * @n: unsigned long int n number
 * @m: target index
 * Return: int
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result = n ^ m;
unsigned long int mask = 1, count = 0;

while (mask < result)
mask <<= 1;


while (mask)
{
	if (mask & result)
	count++;

	mask >>= 1;
}

return (count);
}
