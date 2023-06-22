#include <stddef.h>
#include <stdio.h>
#include<stdlib.h>
#include "function_pointers.h"

/**
 * int_index - executes a function given as a parameter
 * @array:our array
 * @size:size of the array
 * @cmp:the pointer which points to the array
 * Return: nothing
*/


int int_index(int *array, int size, int (*cmp)(int))
{
int i;

i = 0;
if (array != NULL && cmp != NULL)
{
	if (size <= 0)
	return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);

	}

}
return (-1);


}
