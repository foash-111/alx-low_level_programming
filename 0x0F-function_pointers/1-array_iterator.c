#include <stddef.h>
#include <stdio.h>
#include<stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array:our array
 * @size:size of the array
 * @action:the pointer which points to the array
 * Return: nothing
*/


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
if (array != NULL && action != NULL)
{
	for (i = 0; i < size; i++)
	action(array[i]);
}



}
