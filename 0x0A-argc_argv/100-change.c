#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int cent, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

cent = atoi(argv[1]);

while (cent > 0)
	{
		coins++;
if ((cent - 25) >= 0)
		{
cent -= 25;
			continue;
		}
if ((cent - 10) >= 0)
		{
cent -= 10;
			continue;
		}
		if ((cent - 5) >= 0)
		{
			cent -= 5;
			continue;
		}
		if ((cent - 2) >= 0)
		{
			cent -= 2;
			continue;
		}
		cent--;
	}

	printf("%d\n", coins);

	return (0);
}
