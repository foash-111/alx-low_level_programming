#include <math.h>
#include "search_algos.h"

/**
 * jump_search - linear_search algorithm in an array of integers
 * @array: pointer to the first element in the array
 * @size: the size of the array
 * @value: the value we search of
 * Return: the index number that we find the value in
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
    size_t jump = 0;

    jump = sqrt(size);


	while (array && i < size)
	{
		if (array[i] >= value)
        {
            printf("Value found between indexes [%ld] and [%ld]\n", i, i + jump);
            break;
        }
        else
        {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        }
        i += jump;

	}
    while (i <= i + jump && i < size)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
		{      
			return (i);
		}
        i++;
    }
	return (-1);
}
