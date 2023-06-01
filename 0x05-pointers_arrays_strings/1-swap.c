#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: the first parameter
 * @b: the second parameter
 *
 * Return: none
*/

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;

}
