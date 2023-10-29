#include"main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: unsigned long int n number
 * @index: target index
 * Return: (void)
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask = 1;

mask = mask << index;

if (mask > n)
return (-1);

if (n & mask)
return (1);
else
return (0);


}
