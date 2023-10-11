#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - array_iterator
 * @array: pointer to array
 * @size: number of elements of the array
 * @action: pointer to fuction that i want it
 * to print the element i passed to it
 * Return: Nothing
*/


void array_iterator(int *array, size_t size, void (*action)(int))
{
if (action && array)
{
size_t i = 0;

while (i < size)
{
(*action)(array[i]);
i++;
}
}
}
