#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function init==array
 *
 * @width:the address of the array1
 *
 * @height:the address of the array2
 *
 * Return:int
*/

int **alloc_grid(int width, int height)
{
int i, j;
int **ptr;

i = 0;
j = 0;


ptr = malloc(sizeof(int) * (width + height));
if (ptr == 0 || width <= 0 || height <= 0)
{return (0); }

while (i < height)
{
while (j < width)
{
ptr[i][j] = 0;
j++;
}
i++;
}
return (ptr);
}
