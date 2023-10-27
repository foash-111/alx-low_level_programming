#include"main.h"

/**
 * power - power function
 * @osos: power passed
 * Return: result of power
*/

unsigned long int power(int osos)
{
	int i = 0, result = 1;

	while (i < osos)
	{
	result *= 2;
	i++;
	}

	return (result);
}

/**
 * print_binary - function that converts a binary number to an unsigned int
 * @n: unsigned long int n number that should converted
 * Return: (void)
*/

void print_binary(unsigned long int n)
{
	unsigned long int temp = 0;
	int os = 1;

	if (n == 0)
	_putchar('0');
	else if (n == 1)
	_putchar('1');
	else
	{
	while (n > power(os))
	os++;
if (n == power(os))
{
	_putchar('1');
	os--;
	while (os > 0)
	{
		_putchar('0');
		os--;
	}
}
else
{
os--;
while (os >= 0)
{
	temp = power(os);
	if (n >= temp)
	{
		_putchar('1');
		n -= temp;
	}
	else
		_putchar('0');
	os--;
}
}
}
}
