#include <stdio.h>

/**
 * larg_prime - return the large prime factor
 *
 * @number: the numer we want to return the large prime factor to it
 *
 * Return: none
 *
*/

void larg_prime(long number)
{
int larger = 0, i;

while (number % 2 == 0)
{
number = number / 2;
larger = 2;
}
while (number % 3 == 0)
{
number = number / 3;
larger = 3;
}

for (i = 5 ; i <= 5000 ; i += 2)
{
while (number % i == 0)
{
number /= i;
larger = i;
if (number <= i)
break;
}
if (number <= i)
break;
}
if (larger < 2)
{
larger = number;
}
printf("%d\n", larger);
}

/**
 * main - Entry point
 *
 * Description: A C program that prints the large prime factor
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
larg_prime(612852475143);
return (0);
}
