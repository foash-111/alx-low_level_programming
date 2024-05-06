#include "search_algos.h"

/**
 * linear_search - linear_search algorithm in an array of integers
 * @array: pointer to the first element in the array
 * @size: the size of the array
 * @value: the value we search of
 * Return: the index number that we find the value in 
*/

int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    while (i < size)
    {
        if (array[i] == value)
        {
            printf("Value checked array[%ld] = [%d]\n", i, array[i]);
            return (i);
        }
        else
        {
            printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        }
        i++;
    }
    return (-1);
}
