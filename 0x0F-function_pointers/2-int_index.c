#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: pointer to the array that i search in
 * @size: the number of elements of the array
 * @cmp: pointer to the function that check the numbers
 * Return: pointer to the target index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0, check = 0;

if (size <= 0)
return (-1);

if (array && cmp)
{
while (i < size)
{
check = (*cmp)(array[i]);
if (check == 1)
return (i);
i++;
}
}
return (-1);

}
