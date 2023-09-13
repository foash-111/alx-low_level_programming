#include"stdio.h"
#include"main.h"

/**
* print_to_98 - print up or down to 98
* @n: the number we start from
* Return: nothing
*/

void print_to_98(int n)
{

		while (1)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				return;

			}
			else if (n > 98)
			{
				printf("%d, ", n);
				n--;
			}
			else
			{
				printf("%d, ", n);
				n++;
			}
		}
}
