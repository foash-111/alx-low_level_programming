#include"main.h"

/**
* reverse_array - reverse array
* @a: pointer to the start of the array
* @n: number of elements
* return: void
*/

void reverse_array(int *a, int n)
{

	int temp = 0, i;

	if (a == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		temp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temp;
		n--;
	}
}
