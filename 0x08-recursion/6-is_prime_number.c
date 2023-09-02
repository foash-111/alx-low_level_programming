#include "main.h"

/**
 *is_prime_number - check if the number is prime
 *@n: the nume we will check
 *@start: start often with 3
 *Return: 1 on success 0 otherwise
 *
**/

int prime_helper(int n, int start)
{
if (start >= n)
	return (1);

if (n % start == 0)
	return (0);
else
	return (prime_helper(n, start + 2));

}



/**
 *is_prime_number - check if the number is prime
 *@n: the nume we will check
 *
 *Return: 1 on success 0 otherwise
 *
**/

int is_prime_number(int n)
{

if (n < 2 || n % 2 == 0)
	return (0);
if (n == 2)
	return (1);
if (n > 2)
	return (prime_helper(n, 3));

}

