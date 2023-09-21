#include "stdio.h"
#include "main.h"

/**
 * print_number - print number.
 *@n: the number we want to print
 * Return: void.
 */

void print_number(int n)
{
	int temp = 0, count = 0;

	if (n == 0)
{

	_putchar('0');
}

else
{
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}

	while (n)
	{
		/*987*/
		/*7//70 + 8 == 78//780 + 9 == 789*/
		temp = (n % 10) + (temp * 10);
		/*temp *= 10;//70//780//7890 --error--*/
		n = n / 10;
		count++;
	}

	while (count--)/*987*/
	{
		/*/7//8//9*/
		_putchar('0' + temp % 10);
		/*98////9//0*/
		temp /= 10;

	}

}
}
