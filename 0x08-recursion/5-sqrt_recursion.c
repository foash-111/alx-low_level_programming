#include "main.h"

/**
 *_sqrt_recursion_helper - help
 *
 *@n: number we need the square
 *@root: increase from 1
 *
 *Return: the result//the square root;
 *
 */


int _sqrt_recursion_helper(int n, int root)
{
if (root * root > n)
return (-1);
if (root * root == n)
return (root);

if (root * root < n)
return (_sqrt_recursion_helper(n, root + 1));
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
else if (n < 0)
	return (-1);
else
{
return (_sqrt_recursion_helper(n, 1));
}

}
