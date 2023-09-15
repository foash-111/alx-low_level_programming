#include "stdio.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	 int n1 = 1, n2 = 2;
	int sum = 0;
	int result = 0;

	while (sum < 4000000)
	{
		/*sum += i + (i - 1);*/
		/*/ 3   1    2*/
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;

		if (sum % 2 == 0)
			result += sum;

	}

	printf("%d\n", result + 2);
	return (0);
}
