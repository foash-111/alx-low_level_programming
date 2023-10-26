#include"main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string that contain the number that should converted
 * Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
int i = 0, temp = 0, power = 1;
unsigned int sum = 0;
if (b == NULL)
return (0);

while (b[i])
{
if (b[i] == '0' || b[i] == '1')
i++;
else
return (0);
}
i--;

while (b[i])
{
temp = b[i] - '0';

sum += temp *power;
power *= 2;
i--;
}

return (sum);
}
