#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string that contain the number that should converted
 * Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, sum = 0;

	if (b == NULL)
	{
		return (0);
	}

while (b[i] == '0' || b[i] == '1')
{
sum = (sum << 1)  + (b[i] - '0');

i++;
}
if (b[i] != '\0')
	return (0);

return (sum);

}
