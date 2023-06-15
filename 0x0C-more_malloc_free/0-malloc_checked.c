#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - nction should cause normal process-
 * - termination with a status value of 98
 *
 * @b:the address
 *
 * Return: pointer to address or NULL
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
if (ptr == 0)
	exit(98);
else
	return (ptr);



}
