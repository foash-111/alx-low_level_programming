#include"main.h"

/**
 * flip_bits - function that returns the value of a bit at a given index.
 * @n: unsigned long int n number
 * @m: target index
 * Return: int
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result = n ^ m;
unsigned long int count = 0;


while (result)
{
	if (1 & result)
	count++;

	result >>= 1;
}

return (count);
}
