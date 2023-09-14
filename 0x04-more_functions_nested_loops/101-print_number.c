#include "stdio.h"

/**
 * print_number - print number.
 *@n: the number we want to print
 * Return: void.
 */

void print_number(int n)
{
	int temp = 0, count = 0;

	while (n)
	{
		/*987*/
		/*9//90 + 8 == 98//980 + 7 == 987*/
		temp = (n % 10) + (temp * 10);
		/*temp *= 10;//90//980//9870 --error--*/
		n = n / 10;
		count++;
	}

	while (--count)/*987*/
	{
		/*/7//8//9*/
		putchar('0' + temp % 10);
		/*98////9//0*/
		temp /= 10;

	}

	printf("%d\n", temp);

}
