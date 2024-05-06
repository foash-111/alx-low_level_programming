#include "search_algos.h"

/**
 * binary_search - linear_search algorithm in an array of integers
 * @array: pointer to the first element in the array
 * @size: the size of the array
 * @value: the value we search of
 * Return: the index number that we find the value in
*/

int binary_search(int *array, size_t size, int value)
{
	int number = 0;

	if (array == NULL)
	{
		return (-1);
	}
	number = helper_binary_search(array, 0, size - 1, value);

	return (number);
}

/**
 * helper_binary_search - linear_search algorithm in an array of integers
 * @array: pointer to the first element in the array
 * @left: the start point of the array
 * @right: the end point of the array
 * @value: the value we search of
 * Return: the index number that we find the value in
*/

int helper_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i = left;
	size_t mid = (right - left) / 2 + left;

	if (left > right)
	{
		return (-1);
	}
	printf("Searching in array: ");
	while (i <= right)
	{
		if (i == right)
		{
			printf("%d\n", array[i]);
		}
		else
		{
		printf("%d, ", array[i]);

		}
		i++;
	}

	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] > value)
	{
		return (helper_binary_search(array, 0, mid - 1, value));
	}
	else
	{
		return (helper_binary_search(array, mid + 1, right, value));
	}
	return (-1);
}
