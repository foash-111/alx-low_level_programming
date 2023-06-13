#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function init==array
 *
 * @str:the address of the array
 *
 * Return:char
*/

char *_strdup(char *str)
{

int i;
int size;
char *ptr;

size = 0;
i = 0;


while (1)
{
size++;
if (*(str + i) == '\0')
{
break;
}
i++;
}


ptr = malloc(sizeof(char) * size);

if (ptr == 0 || size == 0)
{
return (0);
}


while (i <= size)
{
ptr[i] = str[i];
i++;
}

return (ptr);

}
