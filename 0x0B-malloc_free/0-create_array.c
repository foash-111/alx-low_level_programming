#include "main.h"
#include <stdlib.h>

/**
 * create_array - function init==array
 *
 * @size:size of the array
 *
 * @c:the init value
 *
 *
 *
 * Return:char
*/

char *create_array(unsigned int size, char c)
{
int i;
char *ptr;

i = 0;


ptr = malloc(sizeof(char) * size);

if (ptr == 0 || size == 0)
{
return (0);
}

while (i < size)
{
ptr[i] = c;
i++;
}

return (ptr);

}
