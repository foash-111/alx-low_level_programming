#include "main.h"

/**
 *_sqrt_recursion_helper - help
 *
 *@n: number we need the square
 *@start: the start point
 *@end: the end point
 *
 *Return: the result//the square root;
 *
 */


int _sqrt_recursion_helper(int n, int start, int end)
{
int mid = start + (end - start) / 2;
int square = mid * mid;

if (start > end)
	return (-1);
if (square == n)
	return (mid);
if (square > n)/*169 > 25*/
	return (_sqrt_recursion_helper(n, 1, mid - 1));
if (square < n)/*16 < 25*/
	return (_sqrt_recursion_helper(n, mid + 1, end));
return (-1);
}

/**
 *_sqrt_recursion - find square root
 *
 *@n:the number we need to find the square root to it
 *
 *Return: the result
*/


int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
	return (n);
else if (n < 1)
	return (-1);
else
{
return (_sqrt_recursion_helper(n, 1, n));
}
}
